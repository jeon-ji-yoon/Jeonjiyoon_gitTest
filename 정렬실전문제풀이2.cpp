#include<stdio.h>
int number, data[1000001] ;

void quickSort( int *data, int start, int end  ){
	if(start>=end){
		return ;
		
	}
	int temp;
	int key = start;
	int i = start +1; int j = end;
	while(i<=j){
		while(  data[key]  >= data[i] ){
			i++;
		}
		while(data[key] <= data[j] && start < j ) {
			j--;
		}
		
		if(  i>j     ){
			temp = data[j];
			data[j] = data  [key];
			data[key]=temp;
			
		}else{
			temp = data[i];
			data[i] = data[j];
			data[j] = temp;
		}
		
	
	}
	quickSort( data , start,j-1 );
	quickSort(data ,j+1, end);
	
	
}


int main(void){
	int num;
	scanf("%d", &num);
	int i;
	for(i=0; i<num; i++){
		scanf("%d",&data[i] );
	}
	quickSort(data,0, num-1 );
	for(i=0; i<num; i++){
		printf("%d\n",data[i]);
	}
	return 0;
}
