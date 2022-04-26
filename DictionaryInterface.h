#ifndef DICIONARY_INTERFACE
#define DICIONARY_INTERFACE

// #include "NotFoundException.h"

template<class Key, class Value>
class DictionaryInterface{
    public:
    virtual bool isEmpty() const = 0;
    virtual int getNumberOfEntries() const = 0;
    virtual void add(const Key& searchKey, const Value& newValue) = 0;
    virtual void remove(const Key& searchKey) = 0;
    virtual void clear() = 0;
    virtual Value getValue(const Key& searchKey) const throw(NotFoundException) = 0;
    virtual bool contains(const Key& searchKey) const = 0;
    virtual void traverse(void visit(Value&)) const = 0;
    virtual ~DictionaryInterface(){ }
    
};

#endif