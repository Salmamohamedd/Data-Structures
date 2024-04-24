template <class Type>
bool linkedQueueType<Type>::isEmptyQueue() const
{
    return(queueFront == NULL);
}

template <class Type>
void linkedQueueType<Type>::enqueue(const Type &queueElement) {

nodeType<Type> *newNode;
newNode = new nodeType<Type>; //create the node
newNode->info = queueElement; //store the info
newNode->link = NULL; //initialize the link field to NULL
if (queueFront == NULL) //if initially the queue is empty
{
queueFront = newNode;
queueRear = newNode;
}
else //add newNode at the end
{
queueRear->link = newNode;
queueRear = queueRear->link;
}

count++;
}


template <class Type>
Type linkedQueueType<Type>::front() const
{
    assert(queueFront != NULL);
    return queueFront->info;
}

template <class Type>
Type linkedQueueType<Type>::back() const
{
    assert(queueRear!= NULL);
    return queueRear->info;
}


template <class Type>
Type linkedQueueType<Type>::dequeue() {
    nodeType<Type> *temp;
    if (!isEmptyQueue())
    {
        temp = queueFront; //make temp point to the first node
        Type x = queueFront->info;
        queueFront = queueFront->link; //advance queueFront
        delete temp; //delete the first node
        count--;
        if (queueFront == NULL) //if after deletion the queue is empty
            queueRear = NULL; //set queueRear to NULL
        return x;
    }
    else
        cout << "Cannot remove from an empty queue" << "\n";
}

template<class Type>
int linkedQueueType<Type>::queueSize() {
    return count;
}

template <class Type>
void linkedQueueType<Type>::clear()
{
    nodeType<Type> *temp;
    while (queueFront!= NULL) //while there are elements left in the queue
    {
        temp = queueFront; //set temp to point to the current node
        queueFront = queueFront->link; //advance first to the next node
        delete temp; //deallocate memory occupied by temp
    }
    queueRear = NULL; //set rear to NULL
}


template<class Type>
linkedQueueType<Type>::linkedQueueType()
{
    queueFront = NULL; //set front to null
    queueRear = NULL; //set rear to null
    count = 0;

}

template<class Type>
void linkedQueueType<Type>::print() {
    if (isEmptyQueue()) {
        cout << "The queue is empty." << "\n";
    }
    else {
        nodeType<Type> *current;
        current = queueFront;
        while (current != NULL) {
            cout << current->info << " ";
            current = current->link;
        }
        cout << "\n";
    }
}
