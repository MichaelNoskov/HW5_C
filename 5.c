#include <stdio.h>
#include <string.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    int arr[n][m];
    int max, min, i_max=0, i_min=0;
    for (int i=0;i<n;i++){
        int sum=0;
        for (int g=0; g<m; g++){
            int x;
            scanf("%d", &x);
            arr[i][g] = x;
            sum += x;
        }
        if (i == 0) {
            max = sum;
            min = sum;
        }
        else if (sum > max) {
            max = sum;
            i_max = i;
        }
        else if (sum < min) {
            min = sum;
            i_min = i;
        }
    }

    for (int i=0; i<n; i++) {
        int a = arr[i_min][i];
        arr[i_min][i] = arr[i_max][i];
        arr[i_max][i] = a;
    }

    for (int i=0; i<m; i++) {
        for (int g=0; g<0; g++)
            printf("%d ", arr[i][g]);
        printf("\n");
    }

    return(0);

}