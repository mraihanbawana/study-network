#include <stdio.h>

int memo[100];

int fibonacci(int number){
    if((number == 0)||(number == 1)){
        return 1;  
    }else{
    	memo[number]= fibonacci(number-1) + fibonacci(number-2);
        return (memo[number]);
    }
}

int main(){

    int count;
    
    printf("Masukkan jumlah bilangan: ");
    scanf("%d", &count);
    
    for(int i= 0; i < count; i++){
        printf(" %d ", fibonacci(i));
    }  
    printf("\n");
    
	return 0;
}
