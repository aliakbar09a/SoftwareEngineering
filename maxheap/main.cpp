#include<iostream>
using namespace std;
#include"functions.h"
int main()
{
	int arr[20], size;
	cout<<"\nEnter the size of initial array : ";
	cin>>size;
	for(int i=0; i++;i<size)
		cin>>arr[i];
	create_heap(arr, size);
	print_arr(arr, size);
}
