#include <stdio.h>
#include <string.h>

void reduce_fraction(int * a, int * b) {
    if (a > b) {
        * a /= *b;
        * b = 1;
    } else {
        * b /= * a;
        * a = 1;
    }
}

int main() {
    int a=5,b=10;
    reduce_fraction(&a, &b);
    printf("%d %d\n", a, b);
    return(0);

}