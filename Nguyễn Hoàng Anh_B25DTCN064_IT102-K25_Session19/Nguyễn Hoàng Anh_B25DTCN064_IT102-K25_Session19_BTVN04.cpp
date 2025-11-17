#include <stdio.h>

void inputArray(int *arr, int n) {
    for (int i = 0; i < n; i++) {
        printf("[%d] = ", i);
        scanf("%d", (arr + i));
    }
}

int countValue(int *arr, int n, int x) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (*(arr + i) == x) {
            count++;
        }
    }
    return count;
}

int main() {
    int n, x;

    printf("Nhap so phan tu n: ");
    scanf("%d", &n);
    
    int arr[n];
    
    inputArray(arr, n);
	 
    printf("Nhap gia tri x can tim: ");
    scanf("%d", &x);

    int count = countValue(arr, n, x);

    if (count == 0) {
        printf("Khong tim thay gia tri %d trong mang.\n", x);
    } else {
        printf("Gia tri %d xuat hien %d lan.\n", x, count);
    }

    return 0;
}

