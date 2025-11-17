#include <stdio.h>

void inputArray(int *arr, int n) {
    for (int i = 0; i < n; i++) {
        printf("[%d] = ", i);
        scanf("%d", arr + i);
    }
}

void copyArray(int *src, int *dest, int n) {
    for (int i = 0; i < n; i++) {
        *(dest + i) = *(src + i);
    }
}

void printArray(int *arr, int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}

int main() {
    int n;

    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    int A[n], B[n];

    printf("Nhap mang A\n");
    inputArray(A, n);

    copyArray(A, B, n);

    printf("Mang B sau khi sao chep tu A: ");
    printArray(B, n);

    return 0;
}

