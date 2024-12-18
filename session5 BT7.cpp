#include<stdio.h>

int main(){
	int a,b,n;
	printf("nhap 2 so nguyen duong a, b: ");
	scanf("%d %d",&a,&b);
	while(b != 0){
		n = b;
		b = a % b;
		a = n;
	}
	printf("uoc chung lon nhat la: %d", a);
	return 0;
}
