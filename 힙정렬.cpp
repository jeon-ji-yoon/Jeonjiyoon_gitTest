#include<stdio.h>
int number = 9;
int heap[9] = {7,6,5,8,3,5,9,1,6};

int main(void){
	for(int i=1; i<number; i++ ){
		int c = i;
		do{
			int root = (c-1) / 2; //루트 노드를 가리킨다 
			if(  heap[root] < heap[c]    ){
				int temp = heap[root];
				heap[root] = heap[c];
				heap[c] = temp; 
			} 
			
			c = root; //이건 왜하는거지 
		}while(c!=0); //이 줄이 이해 안됨 왜 c!=0이지 
			
		for(int i = number-1; i>=0; i-- ){
			int temp = heap[0];
			heap[0] = heap[i];
			heap[i] = temp;
			
			int root = 0;
			int c = i;
			do{
				c = 2*root +1;
				if(heap[c] < heap[c+1]&& c<i-1 ){
					c++; //두 개의 자식 노드 중 더 큰값이 있는 노드의 인덱스가 c에 담김 
				}
				if(heap[root] < heap[c] &&c < i) {
					int temp = heap[root];
				    heap[root] = heap[c];
				    heap[c] = temp;
				}
				root = c; //부모 노드를 이동시켜서 다시 작업을 수행한다.. 
			}while( c<i);
		}
	
	}
	return 0;
}
