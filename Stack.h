class Stack
{
    private:
	int size;
	int *a;
	int index;
    public:
        Stack(int size);
        void push(int value);
        int pop();
	bool isEnd();
        ~Stack();
};

