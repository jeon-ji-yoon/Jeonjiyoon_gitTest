#include<stdio.h>

int main(void){
	//n���� ���� �־����� �̸� ������������ ����
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
				//���� �ε��� j�� min�� ��ȯ�ϸ� �ȴ� 
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
