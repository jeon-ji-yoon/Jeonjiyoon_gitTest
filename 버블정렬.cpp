#include<stdio.h>
int main(void){
	int array[10]={1,10,5,8,7,6,4,3,2,9};
	int i,j,temp;
	for(i=0; i<10; i++)
	{
		for(j=0; j<10-i; j++ )
		{
			if(array[j] > array[j+1]){
				//�����ؾ߰ڳ� j��° �ε�����  j+1��° �ε�����
				temp = array[j] ;
				array[j]= array[j+1];
				array[j+1] = temp;
			}
		}
	}
}
