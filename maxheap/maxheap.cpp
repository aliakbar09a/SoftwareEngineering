#include<iostream>
using namespace std;
void maxheapify(int *arr, int i, int size)
{
	int l = 2*i+1; 
    int r = 2*i+2; 
    int smallest = i; 
    if (l < size && arr[l] > arr[i]) 
        smallest = l; 
    if (r < size && arr[r] > arr[smallest]) 
        smallest = r; 
    if (smallest != i) 
    { 
		int temp = arr[i];
		arr[i] = arr[smallest];
		arr[smallest] = temp;
        maxheapify(arr, smallest,size); 
    } 
}
void create_heap(int *arr, int size)
{
	int i=int(size/2);
	while(i>=0)
	{
		maxheapify(arr, i, size);	
		i--;
	}
}

void print_arr(int* arr, int size)
{
	for(int i=0;i<6;i++)
		cout<<arr[i]<<" ";
}
