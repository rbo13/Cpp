#include <iostream>
using namespace std;

bool accept() {

    char answer = 0;
    cout << "Do you want to proceed? (y or n)? \n";
    cin >> answer;

    switch (answer) {
        case 'y':
            cout << "Thats a Yes then.\n";
            return true;
        case 'n':
            cout << "Thats a No then.\n";
            return false;
        default:
            cout << "Thats a No then.\n";
            return false;
    }
}

void copy_fct() {

    int v1[10] = {0,1,2,3,4,5,6,7,8,9};
    int v2[10];

    for (auto i = 0; i != 10; ++i) {
        v2[i] = v1[i];
    }
}

void print() {

    int v[] = {0,1,2,3,4,5,6,7,8,9};

    for (auto x : v) {
        cout << x << endl;
    }
}

void increment() {

    int v[] = {0,1,2,3,4,5,6,7,8,9};

    for (auto& x : v) {
        ++x;
    }
}


int main() {

//    accept();
    print();
    return 0;
}

