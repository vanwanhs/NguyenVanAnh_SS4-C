#include<stdio.h>
int main (){
	int n, y;
	printf("Moi ban nhap thang/nam: ");
	scanf("%d%d",&n , &y);
	
	switch(n){
		case 1: case 3: case 5: case 7: case 8: case 10: case 12:
			printf("Thang nay co 31 ngay\n");
			break;
		case 2:
		 if (y > 100 && y % 100 == 0 && y % 4 == 0 ){
			printf("Thang 2 co 29 ngay\n");
			break;
			} else { printf ("Thang nay co 28 ngay\n");
			break;
			}
	    case 4: case 6: case 9: case 11:
	    	printf("Thang nay co 30 ngay\n");
	    	break;
		default:
			printf("Thang nay khong ton tai");
	}
	
	
	return 0;
}
