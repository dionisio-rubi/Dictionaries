#include "Entry.h"

template<class Key, class Value>
Entry<Key, Value>::Entry(): key(), value(){ }

template<class Key, class Value>
Entry<Key, Value>::Entry(const Key& key, const Value& value): key(key), value(value){ }

template<class Key, class Value>
void Entry<Key, Value>::setKey(const Key& searchKey){ this->key = searchKey; }

template<class Key, class Value>
void Entry<Key, Value>::setValue(const Value& newValue){ this->value = newValue; }

template<class Key, class Value>
Value Entry<Key, Value>::getValue() const{ return value; }

template<class Key, class Value>
Key Entry<Key, Value>::getKey() const{ return key; }

template<class Key, class Value>
bool Entry<Key, Value>::operator==(const Entry<Key, Value>& entry) const{
            
}

template<class Key, class Value>
bool Entry<Key, Value>::operator>(const Entry<Key, Value>& entry) const{
            
}
