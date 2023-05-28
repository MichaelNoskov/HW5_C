#include <stdio.h>
#include <string.h>

int main() {
    int n, x;
    scanf("%d", &n);
    int arr[n], m = n/2;
    for (int i=0; i<n; i++){
        scanf("%d", &x);
        if (i+1 <= m) {
            arr[i+m] = x;
        } else
            arr[i-m] = x;
    }

    for (int i=0; i<n; i++)
        printf("%d\n", arr[i]);
    return(0);

}