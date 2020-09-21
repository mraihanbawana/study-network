#include <stdio.h>

int main(){
	int angka, x= 0, y= 1;
	
	printf("Masukkan Angka= ");
	scanf("%d", &angka);
	
	printf("Hasil Fibonacci= ");
	
	for(int i= 1; i < angka; i++){
		if(x >= 0 && x <= angka){
			printf("%d ", x);
		}
		
		x= x + y;
		y= x - y;
	}
	
	return 0;
}
