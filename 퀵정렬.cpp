#include<stdio.h>
int number =10;
int data[10]={1,10,5,8,7,6,4,3,2,9};

void quickSort(int *data, int start, int end){
	if(start>=end){
		return; //확인이 필요하다..... 
	}
	int i, j, key, temp; //key값이 pivot값이라고 한다
	key = start;
	i = start +1;
	j = end;
	while(i<=j){
		
		while(data[key]  >=    data[i]   ){
			i++;
		}
		while(data[key]   <=   data[j]  && start < j  ){
			j--;
		}
		
		
		//적당한 수가 i와 j 엑 저장되있을것이다 
		
		if(i > j){
			//   data[key] 와 data[j]를  스왑한다 
			temp = data[key];
			data[key] = data[j];
			data[j] = temp;
		} 
		else{
			//data[i] 와 data[j]를 스왑한다
			temp = data[ i ];
			data[ i ] = data[j];
			data[j] = temp; 
		} 
		
		
	} 
	 //1)여기까지 실행되면 배열이  data[key] '였던' 값을 기준으로  두 부분으로 나뉘게된다 
	 //2)두부분으로 나뉘었는데 각각의 부분에 대해서 다시 quickSort함수를 실행한다.....   
	 
	quickSort(data, start, j-1 );
	quickSort(data, j+1, end) ;
}

int main(void){
	quickSort(data, 0, number -1);
	
	int i;
	for(i=0; i<10; i++ ){
		printf("%d", data);
	}
	return 0;
}
