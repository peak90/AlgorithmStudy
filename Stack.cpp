#include "Stack.h"
#include<iostream>
using namespace std;
Stack::Stack(int size)
{
    this->size=size;
    index=0;
    a=new int[size];
}
void Stack::push(int value)
{
    if(index<size)
    {
        a[index++]=value;
    }
    else
    {
        int *b=new int[size*2];
	for(int i=0;i<size;i++)
	{
	    b[i]=a[i];
	}
	delete [] a;
	size*=2;
	a=b;
	a[index++]=value;
    }
}
int Stack::pop()
{
    if(index>=0)
    {
        return a[index--];
    }
    else
    {
        cout<<"This is the last element";
	return -1;
    }
}
bool Stack::isEnd()
{
    return index<0;
}
Stack::~Stack()
{
    if(a!=NULL)
    {
        delete [] a;
    }
}
