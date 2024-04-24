template <class Type>
class linkedQueueType: public queueADT<Type>
{
public:
    bool isEmptyQueue() const;
    Type front() const;

    Type back() const;

    void enqueue(const Type& queueElement);

    Type dequeue();

    linkedQueueType();

    int queueSize();

    void clear();

    void print();

private:
    nodeType<Type> *queueFront; //pointer to the front of the queue
    nodeType<Type> *queueRear; //pointer to the rear of the queue
    int count; // counter to keep track of the queue size
};
