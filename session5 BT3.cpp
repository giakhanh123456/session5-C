#include<stdio.h>

int main(){
	int n, sum = 0;
	printf("nhap so nguyen n: ");
	scanf("%d", &n);
	for(int i = 1; i <= n; i++){
		sum = sum + i;
	}
	printf("tong cac so la: %d\n",sum);
	return 0;
}
