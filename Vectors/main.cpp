#include <iostream>
#include <vector>
using namespace std;

/**
 * Method that creates a 20 sized vector.
 */
void create_vector() {

    vector<double> student_marks(20);

    for (vector<double>::size_type i = 0; i < 20; ++i) {

        cout << "Enter marks for student #:" << i + 1 << " : " << flush;
        cin >> student_marks[i];
    }

    // Print
    for (int i = 0; i < student_marks.size(); ++i) {
        cout << "Student "<< i << " has a grade of : " << student_marks[i] << endl;
    }
}

/**
 * Method that resizes the vector
 * based on a user input
 */
void resize_vector() {

    vector<double> student_marks;

    int num_students;

    cout << "Enter number of students: " <<flush;
    cin >> num_students;

    //resize the vector.
    student_marks.resize(num_students);

    for (vector<double>::size_type i = 0; i < num_students; ++i) {

        cout << "Enter marks for student #:" << i + 1 << " : " << flush;
        cin >> student_marks[i];
    }

    // Print
    for (int i = 0; i < student_marks.size(); ++i) {
        cout << "Student "<< i << " has a grade of : " << student_marks[i] << endl;
    }
}

/**
 * Method that inserts a new element
 * to the vector.
 */
void vector_menu() {

    vector<int> vec;
    vector<int>::iterator iter;
    int choice, item;

    while(1) {

        cout<<"\n---------------------"<<endl;
        cout<<"Vector Implementation in Stl"<<endl;
        cout<<"\n---------------------"<<endl;
        cout<<"1.Insert Element into the Vector"<<endl;
        cout<<"2.Delete Last Element of the Vector"<<endl;
        cout<<"3.Size of the Vector"<<endl;
        cout<<"4.Display by Index"<<endl;
        cout<<"5.Dislplay by Iterator"<<endl;
        cout<<"6.Clear the Vector"<<endl;
        cout<<"7.Exit"<<endl;
        cout<<"Enter your Choice: ";
        cin>>choice;

        switch (choice) {

            case 1:
                cout << "Enter value to be inserted: ";
                cin >> item;
                vec.push_back(item);
                break;

            case 2:
                cout << "Delete last item inserted: "<<endl;
                vec.pop_back();
                break;

            case 3:
                cout << "Size of vector is:";
                cout << vec.size()<<endl;
                break;

            case 4:
                cout << "Displaying elements by index: ";
                for (int i = 0; i < vec.size(); ++i) {

                    cout << vec[i] << " ";
                }
                cout << endl;
                break;

            case 5:
                cout << "Display by iterator: ";

                for (iter = vec.begin(); iter != vec.end(); iter++)
                {
                    cout<<*iter<<" ";
                }
                cout<<endl;
                break;

            case 6:
                vec.clear();
                cout << "Vector cleared!"<<endl;
                break;

            case 7:
                exit(1);
                break;

            default:
                cout << "Wrong choice!"<<endl;
        }
    }
}

int main() {

    /**
     * C++ Exercise that creates a Vector.
     * Vector is similar to array, but with
     * the exception that it automatically
     * handles its own storage requirements
     * as the data grows.
     */

    //create_vector();
    //resize_vector();

    vector_menu();
    return 0;
}