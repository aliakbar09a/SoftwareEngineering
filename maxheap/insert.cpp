#include<iostream>
#include"functions.h"
using namespace std;
void insert(int* arr, int size)
{
	int ele;
	cout<<"\nEnter the new element : ";
	cin>>arr[size];
	size++;
	create_heap(arr, size);
}

