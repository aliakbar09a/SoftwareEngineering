#include<iostream>
#include"functions.h"
using namespace std;
void delete_index(int* arr, int size)
{
	int ind;
	cout<<"\nEnter the index to be deleted : ";
	cin>>ind;
	arr[ind] = arr[size-1];
	size--;
	maxheapify(arr, ind, size);
}

