#include <stdio.h>

int main(void){
	int matriz [5][5] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25};


//executar em forma de matriz

for (int m = 0; m < 5; ++m){
	for (int n = 0; n < 5; ++n){
		printf("%i ", matriz[m] [n]);	
	}	
	printf("\n");
}

return 0;
}
