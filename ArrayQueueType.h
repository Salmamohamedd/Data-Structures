template <class Type>
class queueType: public queueADT<Type>
{
public:
    queueType (int);
    bool isEmptyQueue() const;

    bool isFullQueue() const;

    Type front() const;

    Type back() const;

    void enqueue(const Type& queueElement);

    void dequeue();

    int queueSize();

    void clear();

    void print();
    
private:
    int maxQueueSize;
    //variable to store the maximum queue size
    int count;
    //variable to store the number of
    //elements in the queue

    int queueFront; //variable to point to the first
                    //element of the queue

    int queueRear; //variable to point to the last
                  //element of the queue

    Type *list;   //pointer to the array that holds
                  //the queue elements

};
