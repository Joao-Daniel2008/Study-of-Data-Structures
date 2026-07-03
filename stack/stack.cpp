#include <iostream>
#include "stack.h"

using namespace std;

    stack::stack(){
        lenght = 0;
        structure = new type[max_lenght];
    }
    stack::~stack(){
        delete [] structure;
    }

    bool stack::isfull(){
        return(lenght == max_lenght);
    }
    bool stack::isempty(){
        return(lenght == 0);
    }

    void stack::push(type item){
        if(isfull()){
            cout << "The Stack is full\n" << endl;
        } else{
            structure[lenght] = item;
            lenght++;
            cout << "Inserted element: " << item << endl << endl;
        }
    }
    type stack::pop(){
        if(isempty()){
            cout << "The Stack is empty\n" << endl;
            return 0;
        } else{
            lenght--;
            return(structure[lenght]);
        }
    }

    void stack::print(){
        cout << "[";
        for(int i = 0; i < lenght; i++){
            if(i == lenght - 1){
                cout << structure[i];
            } else{
                cout << structure[i] << ", ";
            }
        }
        cout << "]\n\n";

    }