#include<stdio.h>
int main(void){
	int i, j, min, index, temp;
	int n = 10;
	int array1[n] = {1,10,5,8,7,6,4,3,2,9};
	
	for(i=0; i<10; i++)
	{
		min = 999;
		
		for(j=i; j<10; j++) // i���� ������ �����鼭 ���� �ּڰ��� ã�´�( ���Ŀ� �� ������ �����ſ�) 
		{
			if(array1[j] < min ){
				min = array1[j];
				index = j;
			} 
		}
		
		temp = array1[i]; //�������� ����� �ּ����ްڳ�� ����� ���ϱ� ����
		//swap �ϴ� �κ��Դϴ� ^^ 
		array1[i] = array1[index];
		array1[index] = temp;
	}
	
	for(i=0; i<10; i++){
		printf("%d", array1[i]);
	}
}
