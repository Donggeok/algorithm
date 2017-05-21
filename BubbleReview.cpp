#include <stdio.h>

int a[11] = {0, 5, 12, 1, 3, 2, 0, 5, 8, 13, 4};

void Exchange(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
	return ;
}


void BubbleSort(){
	for(int i = 10; i > 1; i--){
		for(int j = 1; j < i; j++){
			if(a[j] > a[j+1]){
				Exchange(&a[j], &a[j+1]);	
			}
		}
	}	
	
}

void Print(){
	for(int i = 1; i < 11; i++){
		printf("%d ", a[i]);
	}
	printf("\n");
}


int main(){
	BubbleSort();
	Print();
	return 0;
} 
