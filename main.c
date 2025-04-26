#include <stdio.h>
#include <time.h>

int main(){
	
	clock_t t; 
    t = clock();
	
	int result = 0;
	int i;

	
	for (i = 1; i <= 1000000; i++){
		
		printf("%d \n" , i);
		result += i;
		
	}
	
	t = clock() - t; 
    double time_taken = ((double)t)/CLOCKS_PER_SEC; // in seconds
	
	printf("%f", time_taken);
	
	return 0;


}
