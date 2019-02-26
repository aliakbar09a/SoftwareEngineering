#include<iostream>
using namespace std;
#include"../inc/functions.h"

int heap_delete(int array[],int n)
{
    int left, right, i, temp, parentnode,num;
    cout << "Enter the element to delete: ";
    cin >> num;
    for (i = 0; i < n; i++) {
        if (num == array[i])
            break;
    }
    if (i==n)
    {
        cout << " \n" << num << " not found in heap list\n";
        return n;
    }
    array[i] = array[n - 1];
    n = n - 1;
    parentnode =(i - 1) / 2; 
    if (array[i] > array[parentnode])
    {
        heap_insert(array, i, array[i]);
        return n+1;
    }
    left = 2 * i + 1; 
    right = 2 * i + 2; 
    while (right < n)
    {
        if (array[i] >= array[left] && array[i] >= array[right])
            return n;
        if (array[right] <= array[left])
        {
            temp = array[i];
            array[i] = array[left];
            array[left] = temp;
            i = left;
        }
        else
        {
            temp = array[i];
            array[i] = array[right];
            array[right] = temp;
            i = right;
        }
        left = 2 * i + 1;
        right = 2 * i + 2;
    }
    if (left == n - 1 && array[i])    {
        temp = array[i];
        array[i] = array[left];
        array[left] = temp;
    }
    return n-1;
}
