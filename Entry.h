#ifndef ENTRY
#define ENTRY

template<class Key, class Value>
class Entry{
    private:
        Key key;
        Value value;
    public:
        Entry();
        Entry(const Key& key, const Value& value);
        void setKey(const Key& searchKey);
        void setValue(const Value& newValue);
        Value getValue() const;
        Key getKey() const;
        bool operator==(const Entry<Key, Value>& entry) const; //checks if entries are equal
        bool operator==(const Value& entry) const;
        bool operator>(const Entry<Key, Value>& entry) const; // checks if entry is > other entry
        bool operator>(const Value& entry) const;
};

#include "Entry.cpp"
#endif