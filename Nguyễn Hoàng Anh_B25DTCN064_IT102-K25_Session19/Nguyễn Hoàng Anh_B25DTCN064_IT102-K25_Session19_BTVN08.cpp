#include<stdio.h>

void insertElement(int *numbers, int size){
	for(int i = 0; i < size; i++){
		printf("[%d] = ",i);
		scanf("%d", numbers + i);
	}
} 

void printElement(int *numbers, int size){
	printf("Cac phan tu trong mang: ");
	for(int i = 0; i < size; i++){
		printf("%d ", *(numbers + i));
	}
}

int checkPrime(int n){
	if(n < 2){
		return 0;
	}
	for(int i = 2; i < n; i++){
		if(n % i == 0){
			return 0;
		}
	}
	return 1;
}

void printPrimes(int *numbers, int size) {
    printf("Cac so nguyen to trong mang: ");
    for (int i = 0; i < size; i++) {
        if (checkPrime(*(numbers + i))) {
            printf("%d ", *(numbers + i));
        }
    }
}

void reverseArray(int *numbers, int size) {
    int *start = numbers;
    int *end = numbers + size - 1;
    int temp;

    while (start < end) {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}

void  sortAscending(int *numbers, int size){
	for(int i = 0; i < size - 1; i++){
		for(int j = 0; j < size - 1 - i; j++){
			if(*(numbers + j) > *(numbers + j + 1)){
				int temp = *(numbers + j);
				*(numbers + j) = *(numbers + j + 1);
				*(numbers + j + 1) = temp;
			}
		}
	}
}

void  sortDescending(int *numbers, int size){
	for(int i = 0; i < size - 1; i++){
		for(int j = 0; j < size - 1 - i; j++){
			if(*(numbers + j) < *(numbers + j + 1)){
				int temp = *(numbers + j);
				*(numbers + j) = *(numbers + j + 1);
				*(numbers + j + 1) = temp;
			}
		}
	}
}

int searchElement(int *numbers, int size, int searchValue){
	for(int i = 0; i < size; i++){
		if(*(numbers + i) == searchValue){
			return i;
		}
	}				
	return -1; 
}


int main(){
	int i, size, numbers[100], choice, sortChoice, searchChoice, searchValue, result;
	
	do{
		printf("\n***************MENU*******************\n");
		printf("1. Nhap phan tu\n");
		printf("2. Hien thi cac gia tri\n");
		printf("3. In so nguyen to\n");
		printf("4. Dao nguoc\n");
		printf("5. Sap xep\n");
		printf("6. Tim kiem\n");
		printf("7. Thoat\n");
		printf("Lua chon cua ban: ");
		scanf("%d", &choice);
		
		switch(choice){
			case 1:
				printf("Nhap so luong phan tu: ");
				scanf("%d", &size);
				
				insertElement(numbers, size);
				 
				printf("\n");
				break;
				
			case 2:
				printElement(numbers, size);
				
				printf("\n");
				break;
				
			case 3:
				printPrimes(numbers, size);
				
				printf("\n");
				break;
				
			case 4:
				reverseArray(numbers, size);
				printf("\n");
				break;
				
			case 5:
				printf("1. Tang dan\n");
				printf("2. Giam dan\n");
				printf("Lua chon cua ban: ");
		        scanf("%d", &sortChoice);
		        
				switch(sortChoice){
					case 1:
						sortAscending(numbers, size);
						break;
					case 2:
						sortDescending(numbers, size); 
						break;
					default:
						printf("Vui long chon tu 1-2");
				}
				printf("\n");
				break;
				
			case 6:
				printf("Nhap gia tri can tim: ");
                scanf("%d", &searchValue);
                
				result = searchElement(numbers, size, searchValue);
				
				if(result == -1){
					printf("Khong tim thay");
				}
                else{
                	printf("Tim thay %d o vi tri %d", searchValue, result);
				}
				
				printf("\n");
				break;
			
			case 7:
				printf("Ket thuc chuong trinh");
				break;
			
			default:
				printf("Vui long chon tu 1-8\n");
		}
    } while(choice != 7);
    
	return 0;
}
