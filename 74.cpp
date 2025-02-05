// Nested class demo

#include <iostream>

using namespace std;

// Outer class
class University {
public:
    string universityName;

    // Constructor for University
    University(string name) {
        universityName = name;
    }

    // Nested class
    class Student {
    public:
        string name;
        int age;

        // Constructor for Student
        Student(string studentName, int studentAge) {
            name = studentName;
            age = studentAge;
        }

        // Display student details
        void displayStudent() {
            cout << "Student Name: " << name << ", Age: " << age << endl;
        }
    };

    // Display university details
    void displayUniversity() {
        cout << "University: " << universityName << endl;
    }
};

int main() {
    // Create an object of the outer class
    University uni("Oxford University");

    // Create an object of the nested class
    University::Student stu("Alice", 21);

    // Display details
    uni.displayUniversity();
    stu.displayStudent();

    return 0;
}
