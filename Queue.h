#pragma once
template <typename Object>
class Queue
{
public:
    bool isEmpty() const
    {
        return theList.empty(); //Is it empty?
    }
    const Object& getFront() const
    {
        return theList.front(); //Return item at front of queueue
    }
    void enqueue(const Object& x)
    {
        theList.push_back(x); //Push object into queue
    }
    Object& dequeue()
    {
        Object dequeuedThing = theList.front();
        theList.pop_front(); //Delete thing we just dequeued
        return dequeuedThing;
    }
private:
    List<Object> theList;
};
