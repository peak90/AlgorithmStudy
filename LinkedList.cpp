#include"LinkedList.h"
#include<iostream>
using namespace std;


Node::Node()
{
    next=NULL;
}
LinkedList::LinkedList()
{
    head=NULL;
    tail=NULL;
}
void LinkedList::insert(int x)
{
    if(head==NULL)
    {
        head=new Node();
	head->value=x;
	tail=head;
    }
    else
    {
        tail->next=new Node();
	tail->next->value=x;
	tail=tail->next;
    }
}
Node* LinkedList::search(int x)
{
    if(head==NULL)
        return NULL;
    Node *tmp=head;
    while(tmp!=NULL)
    {
        if(tmp->value==x)
	    return tmp;
	tmp=tmp->next;
    }
    return tmp;
}
void LinkedList::deleteItem(Node *node)
{
    if(node==NULL)
        return;
    if(head==node)
    {
        Node *tmp=head->next;
	delete head;
	head=tmp;
    }
    else
    {
        Node *tmp=head;
	while(tmp->next!=NULL&&tmp->next!=node)
	    tmp=tmp->next;
	if(tmp->next!=NULL)
	{
	    Node *dnode=tmp->next;
	    tmp->next=dnode->next;
	    delete dnode;
	}
    }
}
bool LinkedList::isEnd()
{
    return tail==NULL;
}
void LinkedList::transverse()
{
    Node *tmp=head;
    while(tmp!=NULL)
    {
        cout<<tmp->value<<" ";
	tmp=tmp->next;
    }
    cout<<endl;
}
 LinkedList::~LinkedList()
{
    Node *tmp=head;
    Node *p;
    while(tmp!=NULL)
    {
        p=tmp->next;
	delete tmp;
	tmp=p;
    }
}
