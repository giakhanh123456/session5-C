#include<stdio.h>

int main(){
	long long n;
	printf("nhap so nguyen n: ");
	scanf("%lld", &n);
	printf("cac chu so trong so %lld la: ",n);
	while(n > 0){
	printf("%d ", n % 10);
	n /= 10;	
	}
	printf("\n");
	return 0;
}
