#include<stdio.h>
int main(){
	int day, month, year;
	printf("Moi ban nhap ngay: ");
	scanf("%d",&day);
	printf("Moi ban nhap thang: ");
	scanf("%d",&month);
	printf("Moi ban nhap nam: ");
	scanf("%d",&year);
	switch ( month){
		case 1: case 5: case 3: case 7: case 8: case 10: case 12:
			if((day > 0 && day <= 31 )){
				if (year > 100 && year % 4 == 0 && year % 100 == 0){
					printf ("Ngay %d, thang %d, nam %d. Nam nay la nam nhuan.",day, month, year);
				} else { printf ("Ngay %d, thang %d, nam %d.",day, month, year);
				}
				
			} else { printf ("Khong ton tai");
			}
			break;
		case 4: case 6: case 9: case 11:
			if((day > 0 && day <= 30)){
				if (year > 100 && year % 4 == 0 && year % 100 == 0){
				printf ("Ngay %d, thang %d, nam %d. Nam nay la nam nhuan.",day, month, year);	
				} else if (year > 0 )
				{ printf ("Ngay %d, thang %d, nam %d",day, month, year);
				} else ("Khong ton tai");
			} else { printf ("Khong ton tai");
			}
			break;
		case 2:
			if (year > 100 && year % 4 == 0 && year % 100 == 0){
				if (day > 0 && day <= 29){
				printf ("Ngay %d, thang %d, nam %d. Nam nay la nam nhuan.",day, month, year);	
				} else { printf ("Khong ton tai");
				}
			} else if ( year > 0){
				printf ("Ngay %d, thang %d, nam %d",day, month, year);
			} else { printf ("Khong ton tai");
			}
			break;
			default:
				printf ("Khong hop le!");
			
	}
	
	return 0;
}
