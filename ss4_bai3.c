#include<stdio.h>
int main(){
	int n;
	printf("Moi ban nhap so nguyen: ");
	scanf("%d",&n);
	if (n % 3 ==0 && n % 5 ==0){
		printf("So nguyen chia het cho 3 va 5");
	} else { printf("So nguyen khong chia het cho 3 va 5 ");
	}
	
	return 0;
}
