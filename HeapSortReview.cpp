#include <stdio.h>

int a[11] = {0, 5, 12, 1, 3, 2, 0, 5, 8, 13, 4};

void Exchange(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
	return ;
}

void Change(int i, int len){
	int largest = 0;
	if(2*i <= len && a[2*i] > a[i])
		largest = 2*i;
	else
		largest = i;
	if(2*i+1 <= len && a[2*i+1] > a[largest])
		largest = 2*i+1;
	if(largest != i){
		Exchange(&a[i], &a[largest]);
		Change(largest, len);
	}
}

void BuildMaxHeap(int n){
	for(int i = n/2; i > 0; i--){
		Change(i, n);	
	}
}
void Print();
void HeapSort(int n){
	BuildMaxHeap(n);
	int len = n;
	for(int i = n; i > 0; i--){
		Exchange(&a[1], &a[i]);
		len--;
		Change(1, len);
		Print();
	}
	
}

void Print(){
	for(int i = 1; i < 11; i++){
		printf("%d ", a[i]);
	}
	printf("\n");
}

int main(){
	//BuildMaxHeap(10);
	HeapSort(10);
	//Print();
	return 0;
}




