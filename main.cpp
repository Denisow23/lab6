#include <iostream>
#include "set"

using namespace std;

void decide(multiset <int> multi){
    cout << "Adding random numbers: " << endl;
    for (int i = 0; i < 100; i++) {
        int random = (rand()%10) - 4;
        multi.insert(random);
        cout << i + 1 << ") " << random << endl;}
        int a;
        multiset<int>::iterator it = multi.begin();
        cout << "Repeates elements counter:\n ";
        int zapas;
        for (; it != multi.end(); it++) {
            if (zapas == *it) continue;
            cout << "\n\nElement: " << *it;
            a = multi.count(*it);
            cout << "\nIt count: " << a;
            zapas = *it;
        }
}

int main() {
    multiset<int> mult;
    decide(mult);
    return 0;
}

//cout << "Введите размер массива" << endl;
//int size, elem;
//cin >> size;
//for (int i = 0; i < size; i++){
//cout << "Введите " << i << "элемент массива" << endl;
//cin >> elem;
//multi.insert(elem);
//}


