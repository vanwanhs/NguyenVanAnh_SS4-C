#include<stdio.h>
int main(){
	int year;
	printf("Moi ban nhap nam: ");
	scanf("%d",&year);
	if (year > 100 && year % 100 ==0 && year % 4 ==0){
	printf("Nam nay la nam nhuan");
	} else {
	printf("Nam nay khong phai la nam nhuan");
	}
	
	return 0;
}
