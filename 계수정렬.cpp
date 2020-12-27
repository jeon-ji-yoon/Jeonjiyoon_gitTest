#include<stdio.h>

//이건 나도 하겠다 
int num = 30;
int data[30] = {1,3,2,4,3,2,5,3,1,2,3,4,4,3,5,1,2,3,5,2,3,1,4,3,5,1,2,1,1,1};

int main(void){
	int a[5]; 
	int i,j;
	for(i =0; i<num; i++){
		a[ data[i]-1 ] ++;
	}
	
	for(i =0; i<5; i++){
		for(j=0; j < a[i]; j++){
			printf("%d", i+1);
		}
	}
	/*for(i=0; i<num; i++){
		//데이터는 5이하의 수들로'만' 이루어져있음 
		if(data[i]== 1 ){
			a++;
		}
		else if(data[i]== 2){
			b++;
		}
		else if(data[i]== 3) {
			c++;
		}
		else if(data[i]== 4){
			d++;
		}
		else{
			e++;
		}
	}
	*/
	
	return 0;
}
