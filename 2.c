#include <stdio.h>
#include <string.h>

struct Person
{
	int age; // возраст
	char name[30]; // имя
};

float averageAge(struct Person arr[], int n) {
    float all_age = 0.0;
    for (int i=0;i<n;i++) {
        all_age += arr[i].age; 
    }
    return all_age/n;
}

int main() {
    struct  Person arr[3] = {{0, 1}, {1, 2}, {3, 1}};
    float a = averageAge(arr, 3);
    printf("%f\n", a);
    return(0);

}