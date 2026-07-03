#include <iostream>
#include "stack.h"

using namespace std;

int main(){

    int opcao;
    type item;
    stack Stack;

    do{
        cout << "type 1 for stop the programm\n";
        cout << "type 2 for push an item\n";
        cout << "type 3 for remove an item\n";
        cout << "type 4 for print the stack\n" << endl;

        cin >> opcao;

        if(opcao == 2){
            cout << "type the item: ";
            cin >> item;
            Stack.push(item);
        } else if(opcao == 3){
            item = Stack.pop();
            cout << "Element removed: " << item << endl;
        } else if(opcao == 4){
            Stack.print();
        }

    } while(opcao != 1);

    return 0;
}