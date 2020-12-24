#include<stdio.h>

int main(void){
	//n개의 수가 주어지면 이를 오름차순으로 정렬
	int input;int i, j;
	int index, temp;
	
	//scanf("%d", &input);
	int array[3];
	
	
	for(i = 0; i<3; i++){
		scanf("%d", &array[i]);
		//printf("\n");
	} 
	
	
	for(i=0; i<3; i++){
		int min = 1000001;
		for(j=i; j<3; j++){
			if(min > array[j]){
				min = array[j];
				index = j;
				//이제 인덱스 j와 min을 교환하면 된다 
			}
			
		}
		
		temp = array [i];
		array[i] = min;
		array[index] = temp;
		 
	}
	
	
	for(i = 0; i<3 ;i++){
		printf("%d ", array[i]);
	}
	
	return 0;
}
