#include<stdio.h>
int main(){
	int first, last, tienDien;
	int soDien;
	printf("Moi ban nhap tien dien dau thang: ");
	scanf("%d",&first);
	printf("Moi ban nhap tien dien cuoi thang: ");
	scanf("%d",&last);
	soDien = last - first;
		 if (soDien < 50){
		 	tienDien = soDien * 10000;
		 } else if(soDien < 100){
			tienDien = 50 * 10000 + (soDien - 50) * 15000;
		 } else if(soDien < 150){
		 	tienDien = 50 * 10000 + 50 * 15000 + (soDien - 100) * 20000;
		 } else if(soDien < 200){
		 	tienDien = 50 * 10000 + 50 * 15000 + 50 * 20000 + (soDien - 150) * 25000;
		 } else {
		 	tienDien = 50 * 10000 + 50 * 15000 + 50 * 20000 + 50 * 25000 + (soDien - 200) * 30000; 
		 }
		 printf("So dien thang nay cua ban: %d kw/h\n",soDien);
		 printf("Tien dien thang nay cua ban: %d VND\n",tienDien);
		    
	return 0;
	
	
}
