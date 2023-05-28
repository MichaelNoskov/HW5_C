#include <stdio.h>
#include <string.h>

struct Move
{
	int x;
	int y;
};

struct Move getFinishPoint(struct Move arr[], int n) {
    struct Move all = {0, 0};
    for (int i=0; i<n; i++) {
        all.x += arr[i].x;
        all.y += arr[i].y;
    }
    return all;
}

int main() {
    struct  Move arr[3] = {{0, 1}, {1, 2}, {3, 1}};
    struct Move a = getFinishPoint(arr, 3);
    printf("%d %d\n", a.x, a.y);
    return(0);

}