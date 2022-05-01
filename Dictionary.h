#ifndef TREE_DICTIONARY
#define TREE_DICTIONARY

#include "DictionaryInterface.h"
#include "Entry.h"

template<class Key, class Value>
class Dictionary: public DictionaryInterface<Key, Value>{
    private:
        // static const int hashTableSize = 1024;
        int itemCount = 0;
        // Entry<KeyType, ValueType> hashTable[hashTableSize];
        // int hash(const KeyType& key) const;
    public:
        bool isEmpty() const override;
        int getNumberOfEntries() const override;
        bool add(const Key& searchKey, const Value& newValue) override;
        bool remove(const Key& searchKey) override;
        bool clear() override;
        Value getValue(const Key& searchKey) override;
        bool contains(const Key& searchKey) const override;
        // void traverse(void visit(Value&)) const = 0;
        void printTable() const;
        ~Dictionary();
};

#include "Dictionary.cpp"
#endif