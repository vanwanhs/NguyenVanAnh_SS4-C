#include <stdio.h>
int main(){
	float a, b, c, d;
	printf ("Moibannhap so hang a: ");
	scanf("%f",&a);
	printf("Moi ban nhap so hang b: ");
	scanf("%f",&b);
	printf("Moi ban nhap so hang c: ");
	scanf("%f",&c);
	d = a + b + c;
	if (( d == 180)){
		if ( a <= b + c && b <= a + c &&  c <= a + c){
			printf("Ban co the tao thanh mot tam giac");
		} else { printf ("Ban khong the tao thanh mot tam giac");
		} 
	} else { printf ("Ban khong the tao thanh moot tam giac");
	}
	
	
	return 0;
}
