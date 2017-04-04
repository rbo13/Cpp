#include <iostream>
#include <vector>
using namespace std;

int main() {

    /**
     * C++ Exercise that creates a Vector.
     * Vector is similar to array, but with
     * the exception that it automatically
     * handles its own storage requirements
     * as the data grows.
     */

    // Create a vector to store int.
    vector<int> vec;


    // Display the size.
    cout << "The size of the vector is: " << vec.size() << endl;

    // Push 5 values into the vector.
    for(int i = 0; i < 5; i++) {
        vec.push_back(i);
    }

    // Display the newly size of the vector.
    cout << "Extended vector size: " << vec.size() << endl;

    // Get 5 values to vector
    for (int i = 0; i < vec.size(); i++) {

        cout << "Values of vec: [" << vec[i] <<"]" << endl;
    }

    // Using the Iterator.
    vector<int>::iterator v = vec.begin();

    while(v != vec.end()) {
        cout << "Value of vec using iterator = " << *v << endl;
        v++;
    }

    return 0;
}