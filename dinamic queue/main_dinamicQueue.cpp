#include <iostream>
#include <cstddef>
#include "dinamicQueue.h"

using namespace std;

int main(){

    int option;
    type item;
    queue queue;

    do{
        cout << "type 1 to stop programm\n";
        cout << "type 2 to insert item\n";
        cout << "type 3 to remove item\n";
        cout << "type 4 to show the queue\n\n";

        cin >> option;

        if(option == 2){
            cout << "type the item: ";
            cin >> item;
            queue.push(item);
        } else if(option == 3){
            item = queue.pop();
            cout << "Item removed: " << item << "\n\n";
        } else if(option == 4){
            queue.print();
        }

    }while(option != 1);

    return 0;
}