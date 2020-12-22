#include<stdio.h>
int main(void){
	int i, j, min, index, temp;
	int n = 10;
	int array1[n] = {1,10,5,8,7,6,4,3,2,9};
	
	for(i=0; i<10; i++)
	{
		min = 999;
		
		for(j=i; j<10; j++) // i부터 끝까지 훑으면서 그중 최솟값을 찾는다( 이후에 맨 앞으로 보낼거에) 
		{
			if(array1[j] < min ){
				min = array1[j];
				index = j;
			} 
		}
		
		temp = array1[i]; //은삼쿤의 말대로 주석을달겠노라 기억을 잘하기 위해
		//swap 하는 부분입니다 ^^ 
		array1[i] = array1[index];
		array1[index] = temp;
	}
	
	for(i=0; i<10; i++){
		printf("%d", array1[i]);
	}
}
