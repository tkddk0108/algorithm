//exchangesort ��ȯ���� 
#include<stdio.h>
#include<stdlib.h>
int main(){
	int n=10000;
	int array[10000];
	int temp, i, j;
	for(i=0; i<10000; i++){
		array[i]=rand()%10000;
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

