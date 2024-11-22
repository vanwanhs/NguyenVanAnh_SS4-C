#include<stdio.h>
int main(){
	int num1, num2, num3;
	printf("Moi ban nhap so a: ");
	scanf("%d",&num1);
	printf("Moi ban nhap so b: ");
	scanf("%d",&num2);
	printf("Moi ban nhap so c: "); 
	scanf("%d",&num3);
	if ( num1 < num3 && num2 > num3 || num1 > num3 && num3 > num2 )
	{
		printf("%d nam trong khoang ",num3);
	} else { printf("%d khong nam trong khoang",num3);
	}
	
	return 0;
}
