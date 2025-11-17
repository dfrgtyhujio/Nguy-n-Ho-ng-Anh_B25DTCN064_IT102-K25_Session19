#include <stdio.h>

void inputArray(int *arr, int n) {
    for (int i = 0; i < n; i++) {
        printf("[%d] = ", i);
        scanf("%d", (arr + i));
    }
}

int compareArrays(int *a, int *b, int n) {
    for (int i = 0; i < n; i++) {
        if (*(a + i) != *(b + i)) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int n;

    printf("Nhap so phan tu n: ");
    scanf("%d", &n);
    
    int arr1[n], arr2[n];
    
    printf("Nhap mang thu 1\n");
    inputArray(arr1, n);
    printf("Nhap mang thu 2\n");
    inputArray(arr2, n);

    if (compareArrays(arr1, arr2, n)) {
        printf("Hai mang giong nhau.\n");
    } else {
        printf("Hai mang khac nhau.\n");
    }

    return 0;
}

