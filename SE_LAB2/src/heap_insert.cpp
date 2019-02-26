#include<iostream>
using namespace std;

int heap_insert(int array[],int location,int num)
{
	int parentnode,n=location;
	
    while (location > 0)
    {
        parentnode =(location - 1)/2;
        if (num <= array[parentnode])
        {
            array[location] = num;
            return n+1;
        }
        array[location] = array[parentnode];
        location = parentnode;
    }
    array[0] = num;
    return n+1;
}
