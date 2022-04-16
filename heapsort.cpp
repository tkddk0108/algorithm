//ÈüÁ¤·Ä heapsort
#include <stdio.h>
#include<stdlib.h>

int main(){
	int n=100;
	int array[100];
	int i, j;
	
	for(i=0; i<100; i++){
		array[i]=rand()%10000;
	}
	
   for(int i=1; i<n; i++){
      int c= i;
      do{
         int root=(c-1)/2;
         if(array[root]<array[c]){
            int temp=array[root];
            array[root]=array[c];
            array[c]=temp;
         }
         c=root;
      }while (c != 0);
   
   }
   for(int i = n-1; i >= 0; i--){
      int temp=array[0];
      array[0]=array[i];
      array[i]=temp;
      int root=0;
      int c=1;
      do{
         c=2*root+1;
         if(array[c]<array[c+1]&&c<i-1){
            c++;
         }
         if (array[root]<array[c] && c<i){
            int temp=array[root];
            array[root]=array[c];
            array[c]=temp;
         } 
         root=c;
      }while (c < i);   
   }
   for (int i=0; i<n;i++){
      printf("%d ", array[i]);
      }
   }

