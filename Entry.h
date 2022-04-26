#ifndef ENTRY
#define ENTRY

template<class Key, class Value>
class Entry{
    private:
        Key key;
        Value value;
    protected:
        void setKey(const Key& searchKey);
    public:
        Entry();
        Entry(const Key& key, const Value& value);
        Value getValue() const;
        Key getKey() const;
        bool operator==(const Entry<Key, Value>& entry) const;
        bool operator>(const Entry<Key, Value>& entry) const;
};

#include "Entry.cpp"
#endif