//힙정렬 heapsort
#include <stdio.h>
#include<stdlib.h>

int main(){
	int n=100;
	int array[100];
	int temp, i, j;
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
   
//크기를 줄여가며 반복적으로 힙을 구성
   for(int i = n-1; i >= 0; i--){
      int temp=array[0];
      array[0]=array[i];
      array[i]=temp;
      int root=0;
      int c=1;
      do{
         c=2*root+1;
         // 자식중에 더 큰 값 찾기 
         if(array[c]<array[c+1]&&c<i-1){
            c++;
         }
         //루트보다 자식 값이 더 크다면 교환 
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

