#include<iostream>
using namespace std;
#include "inc/functions.h"

int array[1000],n;

int main()
{
	int c=1,i,num;
	cout << "Enter the size of initial heap: ";
	cin >> n;
	cout << "Enter the elements to insert into heap\n";
	for(i=0;i<n;i++)
		cin >> array[i];
	for (int i = n / 2 - 1; i >= 0; i--) 
		heap_create(array,i,n);
	cout << "Elements after creating heap\n";
	heap_display(array, n);
	while(c)
	{
		cout << "Press\n1 to Insert an element\n2 to Delete an element\n3 to Display the heap\n0 to Exit\n";
		cin >> c;
		switch(c)
		{
			case 1:
			cout << "Enter the element to insert: ";
			cin >> num;
				n=heap_insert(array,n,num);
				break;
			case 2:
				n=heap_delete(array,n);
				break;
			case 3:
				heap_display(array,n);
				break;
		}
	}
}
