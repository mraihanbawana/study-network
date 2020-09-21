#include <stdio.h> 
  

void towerOfHanoi(int n, char dari_tiang, char ke_tiang, char aux_tiang){ 
    if (n == 1){ 
        printf("\n Pindahkan benda 1 dari tiang %c ke tiang %c", dari_tiang, ke_tiang); 
        return; 
    } 
    
    towerOfHanoi(n-1, dari_tiang, aux_tiang, ke_tiang); 
    
    printf("\n Pindahkan benda %d dari tiang %c ke tiang %c", n, dari_tiang, ke_tiang); 
    towerOfHanoi(n-1, aux_tiang, ke_tiang, dari_tiang); 
}
  
int main(){ 
    int n= 4; // jumlah benda
    
  towerOfHanoi(n, 'A', 'C', 'B');  
	// A, B and C are names of rods
    
	return 0; 
}
