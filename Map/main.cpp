#include <iostream>
#include <map>
#include <string>
#include <cstdlib>

void create_map();

using namespace std;

int main() {

    create_map();
    return 0;
}

void create_map() {

    map<char,int> mp;
    map<char, int>::iterator it;
    int choice, item;
    char key;

    while (1) {

        cout<<"Map Implementation in Stl"<<endl;
        cout<<"\n---------------------"<<endl;
        cout<<"1.Insert Element into the Map"<<endl;
        cout<<"2.Delete Element of the Map"<<endl;
        cout<<"3.Size of the Map"<<endl;
        cout<<"4.Find Element at a key in Map"<<endl;
        cout<<"5.Display by Iterator"<<endl;
        cout<<"6.Count Elements at a specific key"<<endl;
        cout<<"7.Exit"<<endl;
        cout<<"Enter your Choice: ";
        cin>>choice;

        switch(choice) {

            case 1:
                cout<<"Enter value to be inserted: ";
                cin>>item;
                cout<<"Enter the key for "<< item <<  " : ";
                cin>>key;
                mp.insert(pair<char,int>(key  ,item));
                break;

            case 2:
                cout<<"Enter the mapped string to be deleted: ";
                cin>>key;
                mp.erase(key);
                break;

            case 3:
                cout<<"Size of Map: ";
                cout<<mp.size()<<endl;
                break;

            case 4:
                cout<<"Enter the key at which value to be found: ";
                cin>>key;
                if (mp.count(key) != 0)
                    cout<<mp.find(key)->second<<endl;
                else
                    cout<<"No Element Found"<<endl;
                break;

            case 5:
                cout<<"Displaying Map by Iterator: ";
                for (it = mp.begin(); it != mp.end(); it++)
                {
                    cout << (*it).first << ": " << (*it).second << endl;
                }
                break;

            case 6:
                cout<<"Enter the key at which number of values to be counted: ";
                cin>>key;
                cout<<mp.count(key)<<endl;
                break;

            case 7:
                exit(1);
                break;

            default:
                cout<<"Wrong Choice"<<endl;
        }
    }
}