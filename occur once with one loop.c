#include <stdio.h> 

int find(int* arr,int size) 
{ 
    int res=arr[0];
    int i =0;        
    for(i=1;i<size;i++) 
      res = res^arr[i];    
    return res; 
} 

void main(void) 
{ 
    int arr[11]={1024,1,1024,1,2,1,2,1,1024,5,1024}; 
    int size = sizeof(arr)/sizeof(arr[0]); 
    printf("Element occurring once = %d",find(arr,size));
}