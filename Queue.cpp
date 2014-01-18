#include "Queue.h"
#include<iostream>
using namespace std;
Queue::Queue(int size)
{
    this->size=size;
    head=0;
    tail=0;
    arr=new int[this->size];
}
void Queue::enQueue(int value)
{
    if((tail+1)%size==head)
    {
	cout<<"queue is full"<<endl;
	return;
    }
    arr[tail]=value;
    tail=(tail+1)%size;
}
int Queue::deQueue()
{
    if(head==tail)
    {
        cout<<"queue is empty"<<endl;
	return -1;
    }
    int tmp=arr[head];
    head=(head+1)%size;
    return tmp;
}
bool Queue::isEmpty()
{
    return (head==tail);
}
Queue::~Queue()
{
    if(arr!=NULL)
    {
        delete [] arr;
    }
}
