#include<stdio.h>
int number =10;
int data[10]={1,10,5,8,7,6,4,3,2,9};

void quickSort(int *data, int start, int end){
	if(start>=end){
		return; //Ȯ���� �ʿ��ϴ�..... 
	}
	int i, j, key, temp; //key���� pivot���̶�� �Ѵ�
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
		
		
		//������ ���� i�� j �� ������������̴� 
		
		if(i > j){
			//   data[key] �� data[j]��  �����Ѵ� 
			temp = data[key];
			data[key] = data[j];
			data[j] = temp;
		} 
		else{
			//data[i] �� data[j]�� �����Ѵ�
			temp = data[ i ];
			data[ i ] = data[j];
			data[j] = temp; 
		} 
		
		
	} 
	 //1)������� ����Ǹ� �迭��  data[key] '����' ���� ��������  �� �κ����� �����Եȴ� 
	 //2)�κκ����� �������µ� ������ �κп� ���ؼ� �ٽ� quickSort�Լ��� �����Ѵ�.....   
	 
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
