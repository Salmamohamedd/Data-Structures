template <class Type>
queueType<Type>::queueType(int maxSize) {
    maxQueueSize = maxSize;
    list = new Type[maxQueueSize];
    queueFront = 0;
    queueRear = - 1;
    count = 0;
}

template<class Type>
bool queueType<Type>::isEmptyQueue() const {
    return (count == 0);
}

template<class Type>
bool queueType<Type>::isFullQueue() const {
    return (count==maxQueueSize);
}

template <class Type>
Type queueType<Type>::front() const
{
    assert(!isEmptyQueue());
    return list[queueFront];
}

template <class Type>
Type queueType<Type>::back() const
{
    assert(!isEmptyQueue());
    return list[queueRear];
}

template <class Type>
void queueType<Type>::enqueue(const Type& newElement)
{
    if (!isFullQueue())
    {
        cout << "Inserting " << newElement << "\n";
        queueRear = (queueRear + 1) % maxQueueSize;
    //use the
    //mod operator to advance queueRear
    //because the array is circular

        count++;
        list[queueRear] = newElement;


    }
    else
        cout << "Cannot add to a full queue." << endl;
}

template <class Type>
Type queueType<Type>::dequeue()
{
    if (!isEmptyQueue())
    {
        int x = list[queueFront];
        cout << "Removing " << x << endl;
        queueFront = (queueFront + 1) % maxQueueSize; 
        //use the
        //mod operator to advance queueFront
        //because the array is circular
        count--;
        return x;
    }
    else
        cout << "Cannot remove from an empty queue" << endl;
}

template <class Type>
int queueType<Type>::queueSize(){
    return count;
}

template <class Type>
void queueType<Type>::clear(){
    count = 0;
    queueRear = -1;
    queueFront = 0;
}

template <class Type>
void queueType<Type>::print(){
    if (isEmptyQueue()) {
        cout << "The queue is empty." << endl;
    } else {
        int frontIndex = queueFront;
        for (int i = 0; i < count; i++) {
            cout << list[frontIndex] << " ";
            frontIndex = (frontIndex + 1) % maxQueueSize;
        }
        cout << "\n";
    }
}
