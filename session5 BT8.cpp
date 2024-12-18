#include<stdio.h>

int main(){
	int a,b,n,UCLN,abandau,bbandau;
	printf("nhap 2 so nguyen duong a, b: ");
	scanf("%d %d",&a,&b);
	abandau = a;
	bbandau = b;
		while(b != 0){
		n = b;
		b = a % b;
		a = n;
	}
		UCLN = a;
	printf("boi chung nho nhat la: %d", (abandau * bbandau) / UCLN);
	return 0;
}
