#include<stdio.h>

int main(){
	int n, tich;
	printf("nhap so n 1 -> 10: ");
	scanf("%d", &n);
	for(int i = 1; i <= 10; i++){
		tich = n * i;
		printf("%d * %d = %d\n", n, i, tich);
    }
	return 0;
}
