#include <iostream>
#include <cstddef>
#include "dinamicQueue.h"

using namespace std;

    queue::queue(){
        firstNode = NULL;
        lastNode = NULL;
    }
    queue::~queue(){
        node* tempNode;
        while(firstNode != NULL){
            tempNode = firstNode;
            firstNode = firstNode->next;
            delete tempNode;
        }
        lastNode = NULL;
    }

    bool queue::isfull(){
        node* tempNode;
        try{
            tempNode = new node;
            delete tempNode;
            return false;
        }catch(bad_alloc exception){
            return true;
        }
    }
    bool queue::isempty(){
        return(firstNode == NULL);
    }

    void queue::push(type item){
        if(isfull()){
            cout << "The Queue is full\n\n";
        } else{
            node* newNode = new node;
            newNode->value = item;
            newNode->next = NULL;
            if(firstNode == NULL){
                firstNode = newNode;
            } else{
                lastNode->next = newNode;
            }
            lastNode = newNode;
        }
    }
    type queue::pop(){
        if(isempty()){
            cout << "The Queue is empty\n\n";
            return 0;
        } else{
            node* tempNode = firstNode;
            type item = firstNode->value;
            firstNode = firstNode->next;
            if(firstNode == NULL){
                lastNode = NULL;
            }
            delete tempNode;
            return item;
        }
    }

    void queue::print(){
        node* tempNode = firstNode;
        cout << "[";
        while(tempNode != NULL){
            if(tempNode != firstNode){
                cout << ", ";
            }
            cout << tempNode->value;
            tempNode = tempNode->next;
        }
        cout << "]\n\n";
    }