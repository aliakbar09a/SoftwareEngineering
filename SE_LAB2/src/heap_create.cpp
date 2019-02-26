#include<stdlib.h>
#include<bits/stdc++.h>
using namespace std;

void heap_create(int array[],int i,int n) 
{ 
    int largest = i; 
    int l = 2*i + 1;
    int r = 2*i + 2; 
   
    if (l < n && array[l] > array[largest]) 
        largest = l; 
  
    if (r < n && array[r] > array[largest]) 
        largest = r; 
  
    if (largest != i) 
    { 
        swap(array[i], array[largest]); 
        heap_create(array,largest,n); 
    } 
} 
