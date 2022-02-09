#pragma once
template <typename Object>
class Stack
{
public:
    bool isEmpty() const
    {
        return theList.empty(); //Is it empty?
    }
    const Object& top() const
    {
        return theList.back(); //Return top element in stack, at the back of the list
    }
    void push(const Object& x)
    {
        theList.push_back(x); //Push object into the stack, at the back of the list
    }
    Object& pop()
    {
        Object popped = theList.back();
        theList.pop_back(); //Take it out of the list since it was just popped
        return popped;
    }
private:
    List<Object> theList;
};