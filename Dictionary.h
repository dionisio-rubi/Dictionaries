#ifndef TREE_DICTIONARY
#define TREE_DICTIONARY

#include "DictionaryInterface.h"
#include "Entry.h"

template<class Key, class Value>
class Dictionary: public DictionaryInterface<Key, Value>{
    private:
        static const int hashTSize = 3333;
        int itemCount = 0;
        Entry<Key, Value> hashTable[hashTSize];
        int hashFunc(const Key& key) const;
    public:
        bool isEmpty() const override;
        int getNumberOfEntries() const override;
        bool add(const Key& searchKey, const Value& newValue) override;
        bool remove(const Key& searchKey) override;
        bool clear() override;
        Value getValue(const Key& searchKey) const override;
        bool contains(const Key& searchKey) const override;
        void printTable() const;
        ~Dictionary();
};

#include "Dictionary.cpp"
#endif