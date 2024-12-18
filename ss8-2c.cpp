#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x, found = 0;

    printf("Nhập phần tử cần tìm: ");
    scanf("%d", &x);

    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            printf("Vị trí phần tử trong mảng là %d\n", i);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Phần tử không tồn tại trong mảng.\n");
    }

    return 0;
}
