#include<iostream>
#include<stdlib.h>
#include"Stack.h"
#include"Queue.h"
#include"LinkedList.h"
#include"BinaryHeap.h"
using namespace std;
int main(int argc,char *argv[])
{
  
    if(argc!=2)
    {
        cout<<"please use the number of random numbers as the first argument"<<endl;
	return -1;
    }
    int size=atoi(argv[1]);
    if(size<1)
    {
        cout<<"array size must be bigger than 0";
	return -1;
    }
   /* Stack *s=new Stack(size);
    int count=size;
    for(int i=0;i<count;i++)
    {
        s->push(rand()%100);
    }
    while(!s->isEnd())
    {
        cout<<s->pop()<<" ";
    }
    cout<<endl;
    delete s;*/
   /* Queue *q=new Queue(10);
    for(int i=0;i<10;i++)
    {
        q->enQueue(i);
    }
    while(!q->isEmpty())
    {
        cout<<q->deQueue()<<endl;
    }
    cout<<q->deQueue()<<endl;
    cout<<q->deQueue()<<endl;
    q->enQueue(100);
    q->enQueue(20);
    cout<<q->deQueue()<<endl;
    LinkedList *ll=new LinkedList();
    for(int i=0;i<10;i++)
    {
        ll->insert(i);
    }
    ll->transverse();
    ll->deleteItem(ll->search(5));
    ll->transverse();
    delete ll;*/
    BinaryHeap *heap=new BinaryHeap(size);
    for(int i=0;i<size;i++)
    {
        heap->push(rand()%100);
    }
    heap->printout();
    heap->sort();
    heap->printout();
    cout<<heap->pop()<<endl;
    cout<<heap->pop()<<endl;
    heap->push(345);
    heap->push(341);
    heap->push(3443);
    heap->push(32);
    heap->sort();
    heap->printout();
    delete heap;
    return 0;
}
