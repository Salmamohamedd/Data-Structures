template <class Type>
class queueADT
{
public:
    virtual bool isEmptyQueue() const = 0;
//Function to determine whether the queue is empty.
//Postcondition: Returns true if the queue is empty,
// otherwise returns false.
    virtual bool isFullQueue() const = 0;
//Function to determine whether the queue is full.
//Postcondition: Returns true if the queue is full,
// otherwise returns false.
    virtual Type front() const = 0;
//Function to return the first element of the queue.
//Precondition: The queue exists and is not empty.
//Postcondition: If the queue is empty, the program
// terminates; otherwise, the first element of the queue
// is returned.

    virtual Type back() const = 0;
//Function to return the last element of the queue.
//Precondition: The queue exists and is not empty.
//Postcondition: If the queue is empty, the program
// terminates; otherwise, the last element of the queue
// is returned.
    virtual void enqueue(const Type& queueElement) = 0;
//Function to add queueElement to the queue.
//Precondition: The queue exists and is not full.
//Postcondition: The queue is changed and queueElement is
// added to the queue.
    virtual void dequeue() = 0;
//Function to remove the first element of the queue.
//Precondition: The queue exists and is not empty.
//Postcondition: The queue is changed and the first element
// is removed from the queue.
    virtual int queueSize() = 0;
//Function to return the current size of the queue.
//Postcondition: If the queue is empty, it
//returns zero; otherwise, the size of the queue
// is returned.
    virtual void clear() = 0;
//Function to delete all elements of the queue.
//Postcondition: If the queue is empty, it does nothing;
// otherwise, it initializes the front and back indices to
// -1 and count to 0.
    virtual void print() = 0;
//Function to print all elements of the queue.
//Precondition: The queue exists and is not empty.
//Postcondition: If the queue is empty, the program
// terminates; otherwise, it loops over all elements
// and prints them.
};
