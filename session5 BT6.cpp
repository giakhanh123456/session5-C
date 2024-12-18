#include<stdio.h>

int main(){
	int a,b,n;
	printf("nhap 2 so a, b: ");
	scanf("%d %d",&a,&b);
	while(n != 5){
		printf("CALCULATOR\n\n");
		printf("1. Tong 2 so\n");
		printf("2. Hieu 2 so\n");
		printf("3. Tich 2 so\n");
		printf("4. Thuong 2 so\n");
		printf("5. Thoat\n");
		printf("nhap n 1 -> 5: ");
		scanf("%d", &n);
		if(n == 1){
			printf("Tong la: %d\n\n", a + b);
		}else if(n == 2){
			printf("Hieu la: %d\n\n", a - b);
		}else if(n == 3){
			printf("Tich la: %d\n\n", a * b);
		}else if(n == 4){
			printf("Thuong la: %d\n\n", a / b);
		}
	}
	return 0;
}
