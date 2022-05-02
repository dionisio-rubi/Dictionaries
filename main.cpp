// Created by: Rubi Dionisio

#include <iostream>
#include <string>

#include "Dictionary.h"
#include "Entry.h"

int main(){
    Dictionary<std::string, std::string> contacts;
    std::cout << contacts.add("Rubi", "800-588-2300") << std::endl;
    std::cout << contacts.add("Alex", "775-123-4567") << std::endl;
    std::cout << contacts.add("Andy", "778-330-2389") << std::endl;
    std::cout << contacts.add("Han", "800-588-2300") << std::endl;

    std::cout << "Contains Han: " << contacts.contains("Han") << "\tPhone Number: " << contacts.getValue("Han") << std::endl;
    std::cout << "Remove Han: " << contacts.remove("Han") << std::endl;
    std::cout << "Contains Han: " << contacts.contains("Han ") << std::endl;
    std::cout << "Phone number for Andy: " << contacts.getValue("Andy") << std::endl;
    std::cout << "Phone number for Alex before: " << contacts.getValue("Alex") << std::endl;
    std::cout << contacts.add("Alex", "702-444-7777") << std::endl;
    std::cout << "Phone number for Alex after: " << contacts.getValue("Alex") << std::endl;
    contacts.printTable();
    
    return 0;
};