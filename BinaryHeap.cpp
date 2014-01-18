#include"BinaryHeap.h"
#include<iostream>
using namespace std;
BinaryHeap::BinaryHeap(int size)
{
    length=size;
    heapsize=0;
    arr=new int[size];
}
BinaryHeap::~BinaryHeap()
{
    if(arr!=NULL)
        delete [] arr;
}
void BinaryHeap::push(int value)
{
    if(heapsize==length)
    {
        int *tmp=new int[length*2];
	for(int i=0;i<length;i++)
	    tmp[i]=arr[i];
	delete [] arr;
	arr=tmp;
	length=length*2;
	arr[heapsize++]=value;
    }
    arr[heapsize++]=value;
    buildheap();
}
int BinaryHeap::pop()
{
    int tmp=arr[0];
    arr[0]=arr[heapsize-1];
    heapsize--;
    buildheap();
    return tmp;
}
void BinaryHeap::sort()
{
    int tmpheapsize=heapsize;
    while(heapsize>0)
    {
        int tmp=arr[0];
	arr[0]=arr[heapsize-1];
	arr[heapsize-1]=tmp;
	heapsize--;
	buildheap();
    }
    heapsize=tmpheapsize;
}
void BinaryHeap::printout()
{
    for(int i=0;i<heapsize;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void BinaryHeap::maxheapify(int index)
{
    int left=index*2;
    int right=index*2+1;
    int largest=index;
    if(left<heapsize&&arr[left]>arr[largest])
    {
        largest=left;
    }
    if(right<heapsize&&arr[right]>arr[largest])
    {
        largest=right;
    }
    if(largest!=index)
    {
        int tmp=arr[index];
	arr[index]=arr[largest];
	arr[largest]=tmp;
	maxheapify(largest);
    }
}
void BinaryHeap::buildheap()
{
    for(int i=heapsize/2;i>=0;i--)
        maxheapify(i);
}
