# exchange-sort
#include<stdio.h>
#include<stdlib.h>
int main(){
	int n=100;
	int array[100];
	int temp, i, j;
		
	for(i=0; i<100; i++){
		array[i]=rand()%1000;
	}
	
	for(i=0; i< n-1; i++){
		for (j=i+1; j<n; j++){
			if(array[i]>array[j]){
				temp=array[i];
				array[i]=array[j];
				array[j]=temp;
			}
		}
	
	}
	for(i=0; i<n; i++){
		printf("%d ", array[i]);
	}
} 
