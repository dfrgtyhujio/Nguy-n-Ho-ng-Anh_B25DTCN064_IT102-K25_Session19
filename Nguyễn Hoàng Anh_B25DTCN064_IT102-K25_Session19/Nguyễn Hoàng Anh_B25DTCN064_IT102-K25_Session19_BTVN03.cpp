#include <stdio.h>

void inputArray(int *arr, int n) {
    for (int i = 0; i < n; i++) {
        printf("[%d] = ", i);
        scanf("%d", (arr + i));
    }
}

void average(int *arr, int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += *(arr + i);
    }

    float result = (float)sum / n;
    printf("Gia tri trung binh la: %.2f\n", result);
}

int main() {
    int n;

    printf("Nhap so phan tu n: ");
    scanf("%d", &n);

    int arr[n];

    inputArray(arr, n);
    average(arr, n);

    return 0;
}

