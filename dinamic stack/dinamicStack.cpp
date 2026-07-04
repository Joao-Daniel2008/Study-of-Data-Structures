#include <iostream>
#include <cstddef>
#include "dinamicStack.h"

using namespace std;

    stack::stack(){
        topNode = NULL;
    }
    stack::~stack(){
        node* tempNode;
        while(topNode != NULL){
            tempNode = topNode;
            topNode = topNode->next;
            delete tempNode;
        }
    }

    bool stack::isfull(){
        node* tempNode;
        try{
            tempNode = new node;
            delete tempNode;
            return false;
        } catch(bad_alloc exception){
            return true;
        }
    }
    bool stack::isempty(){
        return(topNode == NULL);
    }

    void stack::push(type item){
        if(isfull()){
            cout << "The Stack is full\n\n";
        } else{
            node* newNode = new node;
            newNode->value = item;
            newNode->next = topNode;
            topNode = newNode;
        }
    }
    type stack::pop(){
        if(isempty()){
            cout << "The Stack is empty\n\n";
            return 0;
        } else{
            node* tempNode = topNode;
            type item = topNode->value;
            topNode = topNode->next;
            delete tempNode;
            return item;
        }
    }

    void stack::print(){
        node* tempNode = topNode;
        cout << "[";
        while(tempNode != NULL){
            if(tempNode != topNode){
                cout << ", ";            
        }
            cout << tempNode->value;
            tempNode = tempNode->next;
        }
        cout << "]\n\n";
    }