#include<stdio.h>

void inputArray(int *arr, int n) {
    for (int i = 0; i < n; i++) {
    	printf("[%d] = ", i);
        scanf("%d", (arr + i));
    }
}

void findMax(int *arr, int n) {
    int max = *arr;

    for (int i = 1; i < n; i++) {
        if (*(arr + i) > max) {
            max = *(arr + i);
        }
    }
    printf("Phan tu lon nhat trong mang la: %d\n", max);
}

int main(){
    int n;

    printf("Nhap so phan tu n: ");
    scanf("%d", &n);

    int arr[n];

    inputArray(arr, n);
    findMax(arr, n);
	
	return 0; 
} 
