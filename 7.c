#include <stdio.h>
#include <string.h>

int without_name(n) {
    int arr[3] = {0, 0, 1};
    for (int i=0; i<n; i++) {
        int x = arr[0];
        int y = arr[1];
        int z = arr[2];
        arr[0] = x + y + z;
        arr[1] = x;
        arr[2] = y;
    }
    return arr[0] + arr[1] + arr[2];
}

int main() {
    int n=10;
    printf("%d", without_name(n));
    return(0);

}