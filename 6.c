#include <stdio.h>
#include <string.h>


int abs_arr(int arr[], int n) {
    int amount = 0;
    for (int i=0, *ptr = arr; i<n; ptr++, i++)   {
        if (* ptr < 0) {
            * ptr *= -1;
            amount += 1;
        }
    }
    return amount;
}

int main() {
    int arr[3] = {1,2,-3};
    abs_arr(arr, 3);
    return(0);

}
