// array of object


#include <iostream>

using namespace std;

// Define a Student class
class Student {
public:
    string name;
    int age;
    float marks;

    // Method to input student details
    void input() {
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Age: ";
        cin >> age;
        cout << "Enter Marks: ";
        cin >> marks;
    }

    // Method to display student details
    void display() {
        cout << "Name: " << name << ", Age: " << age << ", Marks: " << marks << endl;
    }
};

int main() {
    int n;

    // Asking user for the number of students
    cout << "Enter number of students: ";
    cin >> n;

    // Creating an array of Student objects
    Student students[n];

    // Taking input for all students
    for (int i = 0; i < n; i++) {
        cout << "\nEnter details for Student " << i + 1 << ":\n";
        students[i].input();
    }

    // Displaying student details
    cout << "\nStudent Details:\n";
    for (int i = 0; i < n; i++) {
        students[i].display();
    }

    return 0;
}
