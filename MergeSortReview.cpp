#include <stdio.h>

int a[11] = {0, 5, 12, 1, 3, 2, 0, 5, 8, 13, 4};


void Print(){
	for(int i = 1; i < 11; i++){
		printf("%d ", a[i]);
	}
	printf("\n");
}

void Merge(int low, int high){
	int mid = (low + high)/2;
	int n1 = mid - low + 1;
	int n2 = high - mid;
	int b[n1+2], c[n2+2];
	b[n1+1] = 10000;
	c[n2+1] = 10000;
	for(int i = 1; i <= n1; i++){
		b[i] = a[low+i-1];
	}
	for(int i = 1; i <= n2; i++){
		c[i] = a[mid+i];
	}
	int i = 1;
	int j = 1;
	for(int t = low; t <= high; t++){
		if(b[i] <= c[j]){
			a[t] = b[i];
			i++;
		}else{
			a[t] = c[j];
			j++;
		}
	}
}

void MergeSort(int low, int high){
	if(low < high){
		int mid = (low + high)/2;
		MergeSort(low, mid);
		MergeSort(mid+1, high);
		Merge(low, high);	
	}
}

int main()
{
	MergeSort(1, 10);
	Print();
	return 0;
}
















