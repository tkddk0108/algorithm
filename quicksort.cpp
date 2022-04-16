//ÄüÁ¤·Ä quick sort
#include <stdio.h>
#include<stdlib.h>

void quickSort(int *array, int start, int end){
	if (start>=end){ 
		return;
	}
	int key=start;
	int i =start+1;
	int j=end;
	int temp;

	while(i<=j){
		while (array[i] <= array[key]){
			i++;
		}
		while (array[j]>=array[key] && j>start){
			j--;
		}
		if(i>j){
			temp=array[j];
			array[j]=array[key];
			array[key]=temp;			
		}
		else{
			temp=array[j];
			array[j]=array[i];
			array[i]=temp;
		}
	}
	quickSort(array, start, j-1);
	quickSort(array, j+1, end);
}

int main(){
	int n=10000;
	int array[10000];
	int temp, i, j;
	for(i=0; i<10000; i++){
		array[i]=rand()%10000;
	}
	quickSort(array, 0, n-1);
	for(int i=0; i<n; i++){
		printf("%d ", array[i]);
	}
}
