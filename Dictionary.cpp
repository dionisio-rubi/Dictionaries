#include "Dictionary.h"

//private
template<class Key, class Value>
int Dictionary<Key, Value>::hashFunc(const Key& key) const{
    std::hash<Key> hashKey;
    return hashKey(key) % hashTSize;
}

//public
template<class Key, class Value>
bool Dictionary<Key, Value>::isEmpty() const{ return itemCount == 0; }

template<class Key, class Value>
int Dictionary<Key, Value>::getNumberOfEntries() const{ return itemCount; }

template<class Key, class Value>
bool Dictionary<Key, Value>::add(const Key& searchKey, const Value& newValue){
    int hashIndex = hashFunc(searchKey);
    for(int i = hashIndex; i < hashTSize; i++){ // this loops through until it finds an empty spot
        if(hashTable[hashIndex].getKey() == Key()){ //does the actual addinng if there is no value/key in the hash table
            hashTable[i] = Entry<Key,Value>(searchKey,newValue);
            itemCount++;
            return true;
        }
        if(hashTable[hashIndex].getKey() == searchKey){
            hashTable[hashIndex].setValue(newValue); //overwrite value already in the key
            return true;
        }
    }
    return false;
}

template<class Key, class Value>
bool Dictionary<Key, Value>::remove(const Key& searchKey){
    int hashIndex = hashFunc(searchKey);
    for(int i = hashIndex; i < hashTSize; i++){
        if(hashTable[hashIndex].getKey() == searchKey){
            hashTable[hashIndex] = Entry<Key,Value>();
            itemCount--;
            return true;
        }
    }
    return false;
}

template<class Key, class Value>
bool Dictionary<Key, Value>::clear(){
    int i = 0;
    while (itemCount > 0 && i < hashTSize){
        if (remove(hashTable[i].getKey())){
            itemCount--;
        }
        i++;
    }
    return true;
}


template<class Key, class Value>
Value Dictionary<Key, Value>::getValue(const Key& searchKey)const{
    int hashIndex = hashFunc(searchKey);
    for(int i = hashIndex; i < hashTSize; i++){
        if(hashTable[i].getKey() == searchKey){
            return hashTable[hashIndex].getValue();
        }
    }
    return Value();
}

template<class Key, class Value>
bool Dictionary<Key, Value>::contains(const Key& searchKey) const{
    int hashIndex = hashFunc(searchKey);
    for(int i = hashIndex; i < hashTSize; i++){
        if(hashTable[i].getKey() == searchKey){
            return true;
        }
    }
    return false;
}

template<class Key, class Value>
void Dictionary<Key, Value>::printTable() const{
    for(int i = 0; i < hashTSize; i++){
        if(hashTable[i].getKey() != Key()){ // only prints if there is a key in the hash table
            std::cout << "Index: " << i << "\tKey: " << hashTable[i].getKey() << "\tValue: " << hashTable[i].getValue() << std::endl;
        }
    }
}

template<class Key, class Value>
Dictionary<Key, Value>::~Dictionary(){ clear(); }