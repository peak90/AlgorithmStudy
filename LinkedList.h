class Node
{
    public:
        int value;
	Node *next;
	Node();
};

class LinkedList
{
    private:
        Node *head;
	Node *tail;
    public:
        LinkedList();
	void insert(int x);
	Node* search(int x);
	void deleteItem(Node *node);
	bool isEnd();
        void transverse();
	~LinkedList();
};
