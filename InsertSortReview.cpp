#include <stdio.h>

int a[11] = {0, 5, 12, 1, 3, 2, 0, 5, 8, 13, 4};

void Exchange(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
	return ;
}

void Print(){
	for(int i = 1; i < 11; i++){
		printf("%d ", a[i]);
	}
	printf("\n");
}

void InsertSort(){
	for(int i = 1; i < 10; i++){
		int j = i+1;
		int t = a[j];
		while(t < a[j-1] && j > 1){
			a[j] = a[j-1];
			j--;
		}
		a[j] = t;
	}
}

int main(){
	InsertSort();
	Print();
	return 0;
}








