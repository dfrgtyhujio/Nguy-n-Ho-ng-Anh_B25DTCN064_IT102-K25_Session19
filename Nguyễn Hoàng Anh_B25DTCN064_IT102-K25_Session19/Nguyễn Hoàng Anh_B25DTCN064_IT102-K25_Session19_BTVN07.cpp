#include <stdio.h>

void inpurArray(int *arr, int n) {
    for (int i = 0; i < n; i++) {
        printf("[%d] = ", i);
        scanf("%d", arr + i);
    }
}

void printArray(int *arr, int n) {
    printf("Cac phan tu trong mang: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}

int calculateSum(int *arr, int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += *(arr + i);
    }
    return sum;
}

int findMax(int *arr, int n) {
	int max = *arr;
    for (int i = 1; i < n; i++) {
        if (*(arr + i) > max) {
            max = *(arr + i);
        }
    }
    return max;
}

int main() {
    int arr[100];
    int n, choice;

    do {
        printf("\n============ MENU ============\n");
        printf("1. Nhap vao so phan tu va tung phan tu\n");
        printf("2. Hien thi cac phan tu trong mang\n");
        printf("3. Tinh do dai mang\n");
        printf("4. Tinh tong cac phan tu trong mang\n");
        printf("5. Hien thi phan tu lon nhat\n");
        printf("6. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Nhap vao so phan tu: ");
                scanf("%d", &n);
                inpurArray(arr, n);
                break;
            case 2:
                printArray(arr, n);
                break;
            case 3:
                printf("Do dai mang: %d\n", n);
                break;
            case 4:
				printf("Tong cac phan tu: %d\n", calculateSum(arr, n));
                break;
            case 5:
                printf("Phan tu lon nhat: %d\n", findMax(arr, n));
                break;
            case 6:
                printf("Thoat chuong trinh.\n");
                break;
            default:
                printf("Lua chon khong hop le!\n");
        }
    } while (choice != 6);

    return 0;
}

