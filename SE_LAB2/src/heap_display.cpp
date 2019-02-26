#include<iostream>
using namespace std;

void heap_display(int array[],int n)
{
    int i;
    if (n == 0)
    {
        cout << "Heap is empty \n";
        return;
    }
    for (i = 0; i < n; i++)
        cout << array[i] << " ";
    cout << endl;
}
