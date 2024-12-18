#include<stdio.h>

int main(){
		int n,a,b,c;
	while(n != 6){
		printf("MENU\n\n");
		printf("1. Nhap 3 so\n");
		printf("2. Tong 3 so\n");
		printf("3. Trung binh cong 3 so\n");
		printf("4. So nho nhat\n");
		printf("5. So lon nhat\n");
		printf("6. Thoat\n");
		printf("nhap n 1 -> 6: ");
		scanf("%d", &n);
		if(n == 1){
			printf("nhap 3 so: ");
			scanf("%d %d %d",&a,&b,&c);
		}else if(n == 2){
			printf("tong la: %d\n\n",a + b + c);
		}else if(n == 3){
			printf("trung binh la: %.2f\n\n",(float)(a + b + c) / 3);
		}else if(n == 4){
			int min = a;
			if(b < min){min = b;}
			if(c < min){min = c;}
			printf("so nho nhat la: %d\n\n", min);
		}else if(n == 5){
			int max = a;
			if(b > max){max = b;};
			if(c > max){max = c;};
			printf("so lon nhat la: %d\n\n", max);
		}
	}
	printf("\n");
	return 0;
}
