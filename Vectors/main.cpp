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

    return 0;
}