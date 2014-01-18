class Queue
{
    private:
        int head;
	int tail;
	int size;
	int *arr;
    public:
        Queue(int size);
	void enQueue(int value);
	int deQueue();
	bool isEmpty();
        ~Queue();
};
