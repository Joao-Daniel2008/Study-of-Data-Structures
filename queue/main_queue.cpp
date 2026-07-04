#include <iostream>
#include "queue.h"

using namespace std;

int main(){

    int opcao;
    type item;
    queue queue;

    do{
        cout << "type 1 for stop the programm\n";
        cout << "type 2 for insert an item\n";
        cout << "type 3 for remove an item\n";
        cout << "type 4 for print the queue\n";

        cin >> opcao;

        if(opcao == 2){
            cout << "\ntype the item: ";
            cin >> item;
            queue.push(item);
        } else if(opcao == 3){
            item = queue.pop();
            cout << "Item removed: " << item << "\n\n";
        } else if(opcao == 4){
            queue.print();
        }

    } while(opcao != 1);

    return 0;
}