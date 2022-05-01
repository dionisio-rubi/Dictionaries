#include "Dictionary.h"

template<class Key, class Value>
bool Dictionary<Key, Value>::isEmpty() const{
    return itemCount == 0;
}

template<class Key, class Value>
int Dictionary<Key, Value>::getNumberOfEntries() const{

}

template<class Key, class Value>
bool Dictionary<Key, Value>::add(const Key& searchKey, const Value& newValue){
    Entry<Key, Value> newEntry(searchKey, newValue);

    if(!itemTree.add(newEntry)){
        return itemTree.add(Entry<Key, Value>(searchKey, newValue));
    }else{
        throw "Duplicate Key";
    }
}

template<class Key, class Value>
bool Dictionary<Key, Value>::remove(const Key& searchKey){

}

template<class Key, class Value>
bool Dictionary<Key, Value>::clear(){

}


template<class Key, class Value>
Value Dictionary<Key, Value>::getValue(const Key& searchKey){

}

template<class Key, class Value>
bool Dictionary<Key, Value>::contains(const Key& searchKey) const{

}

template<class Key, class Value>
void Dictionary<Key, Value>::printTable() const{

}

template<class Key, class Value>
Dictionary<Key, Value>::~Dictionary(){ clear(); }