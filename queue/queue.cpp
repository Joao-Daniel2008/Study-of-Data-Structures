#include <iostream>
#include "queue.h"

using namespace std;

    queue::queue(){
        last = 0;
        first = 0;
        structure = new int[max_lenght];
    }
    queue::~queue(){
        delete [] structure;
    }

    bool queue::isfull(){
        return(last - first == max_lenght);
    }
    bool queue::isempty(){
        return(last - first == 0);
    }

    void queue::push(type item){
        if(isfull()){
            cout << "The Queue is full\n\n";
        } else{
            structure[last % max_lenght] = item;
            last++;
            cout << "Inserted item: " << item << "\n\n";
        }
    }
    type queue::pop(){
        if(isempty()){
            cout << "The Queue is empty\n\n";
            return 0;
        } else{
            first++;
            return (structure[(first - 1) % max_lenght]);
        }
    }

    void queue::print(){
        cout << "[";
        for(int i = first; i < last; i++){
            if(i == last - 1){
                cout << structure[i % max_lenght];
            } else{
                cout << structure[i % max_lenght] << ", ";
            }
        }
        cout << "]\n\n";
    }