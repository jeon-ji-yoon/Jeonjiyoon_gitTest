#include<stdio.h>
int main(void){
	int array[10] = {1,10,5,8,7,6,4,3,2,9};
	int i, j , temp, temp2;
	for(i=1/*1부터 시작하겟네 특이하게*/; i<10; i++){
		//temp = array[i];
		
		for(j= i-1 ; j>-1; j--)
		{
			if( array[j] > array[j+1] ) {
				temp = array[j];
				array[j] = array[j+1];
				array[j+1] = temp;
				
			}
		}
	}
	
	for(i=0; i<10; i++){
		printf("%d ", array[i]);
		
	}
	
	
	
	
	
	
	
	return 0;
}
