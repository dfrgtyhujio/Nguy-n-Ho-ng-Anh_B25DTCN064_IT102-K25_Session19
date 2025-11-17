#include<stdio.h>

void inputArray(int *arr, int n) {
    for (int i = 0; i < n; i++) {
    	printf("[%d] = ", i);
        scanf("%d", (arr + i));
    }
}

void countEvenOdd(int *arr, int n, int *even, int *odd) {
    for (int i = 0; i < n; i++) {
        if(*(arr + i) % 2 == 0) {
            (*even)++;
        } else{
        	(*odd)++;
		} 
	}
	printf("So phan tu chan la %d\n", *even);
	printf("So phan tu le la %d\n", *odd);
}

int main(){
    int n;
    int even = 0, odd = 0; 

    printf("Nhap so phan tu n: ");
    scanf("%d", &n);

    int arr[n];

    inputArray(arr, n);
    countEvenOdd(arr, n, &even, &odd);
	
	return 0; 
} 
