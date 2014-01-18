class BinaryHeap
{
    private:
        int length;
	int heapsize;
        int *arr;
	void maxheapify(int index);
	void buildheap();
    public:
        BinaryHeap(int size);
	~BinaryHeap();
        void push(int value);
	int pop();
        void sort();
	void printout();
};
