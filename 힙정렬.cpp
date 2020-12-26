#include<stdio.h>
int number = 9;
int heap[9] = {7,6,5,8,3,5,9,1,6};

int main(void){
	for(int i=1; i<number; i++ ){
		int c = i;
		do{
			int root = (c-1) / 2; //��Ʈ ��带 ����Ų�� 
			if(  heap[root] < heap[c]    ){
				int temp = heap[root];
				heap[root] = heap[c];
				heap[c] = temp; 
			} 
			
			c = root; //�̰� ���ϴ°��� 
		}while(c!=0); //�� ���� ���� �ȵ� �� c!=0���� 
			
		for(int i = number-1; i>=0; i-- ){
			int temp = heap[0];
			heap[0] = heap[i];
			heap[i] = temp;
			
			int root = 0;
			int c = i;
			do{
				c = 2*root +1;
				if(heap[c] < heap[c+1]&& c<i-1 ){
					c++; //�� ���� �ڽ� ��� �� �� ū���� �ִ� ����� �ε����� c�� ��� 
				}
				if(heap[root] < heap[c] &&c < i) {
					int temp = heap[root];
				    heap[root] = heap[c];
				    heap[c] = temp;
				}
				root = c; //�θ� ��带 �̵����Ѽ� �ٽ� �۾��� �����Ѵ�.. 
			}while( c<i);
		}
	
	}
	return 0;
}
