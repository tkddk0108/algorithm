//mergesort 병렬정렬 
#include<stdio.h>
#include<stdlib.h>
	
int sortArray[10000];

void merge(int array[], int m, int middle, int n){
   int i=m;
   int j=middle+1;
   int k=m;
   
   while(i<=middle && j<=n){
      if(array[i]<=array[j]){
         sortArray[k]=array[i];
         i++;
      }
      else{
         sortArray[k]=array[j];
         j++;
      }
      k++;
   }
   
   if(i>middle){
      for(int t=j; t<=n; t++){
         sortArray[k]=array[t];
         k++;
      }
   }
   else{
      for(int t=i; t<=middle; t++){
         sortArray[k]=array[t];
         k++;
      }
   }
   for(int t=m; t<=n; t++){
      array[t]=sortArray[t];
   }
} 
void mergeSort(int array[], int m, int n){
   if (m<n){
      int middle=(m+n)/2;
      mergeSort(array,m,middle);
      mergeSort(array,middle+1, n);
      merge(array,m,middle,n);
   }
}
int main(){
	int n=100;
	int array[100];
	int i, j;
	
	for(i=0; i<100; i++){
		array[i]=rand()%10000;
	}

   mergeSort(array,0,n-1);
   for(int i=0;i<n;i++){
      printf("%d ", array[i]);
   }
}
