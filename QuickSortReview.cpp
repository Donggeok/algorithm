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

int Partition(int low, int high){
	int j = low-1;
	for(int i = low; i < high; i++){
		if(a[i] < a[high]){
			j++;
			Exchange(&a[i], &a[j]);
		}
	}
	Exchange(&a[high], &a[j+1]);
	return j+1;
}

void QuickSort(int low, int high){
	if(low < high){
		int mid = Partition(low, high);
		QuickSort(low, mid-1);
		QuickSort(mid+1, high);
	}
}

int main(){
	QuickSort(1, 10);
	Print();
	
	return 0;
}

