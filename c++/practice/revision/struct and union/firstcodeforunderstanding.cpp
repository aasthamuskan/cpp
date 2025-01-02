#include <iostream>
#include <cstring>
using namespace std;

// Define a structure to store student information
struct Student {
    char name[20];
    int age;
    float marks;
};

// Define a union to store a student’s ID, either numeric or alphanumeric
union StudentID {
    int idNum;
    char idStr[10];
};

int main() {
    Student student;   // Structure variable
    StudentID id;      // Union variable
    
    // User input for structure members
    cout << "Enter student's name: ";
    cin >> student.name;
    cout << "Enter student's age: ";
    cin >> student.age;
    cout << "Enter student's marks: ";
    cin >> student.marks;
    
    // Displaying structure information
    cout << "\nStructure Example (Student Information):\n";
    cout << "Name: " << student.name << "\n";
    cout << "Age: " << student.age << "\n";
    cout << "Marks: " << student.marks << "\n";
    
    // User input for union members
    int choice;
    cout << "\nWould you like to enter a numeric ID (1) or alphanumeric ID (2)? ";
    cin >> choice;
    
    if (choice == 1) {
        cout << "Enter student's numeric ID: ";
        cin >> id.idNum;
        cout << "Union Example (Student ID as Number):\n";
        cout << "ID (Numeric): " << id.idNum << "\n";
    } else if (choice == 2) {
        cout << "Enter student's alphanumeric ID: ";
        cin >> id.idStr;
        cout << "Union Example (Student ID as Alphanumeric):\n";
        cout << "ID (Alphanumeric): " << id.idStr << "\n";
    } else {
        cout << "Invalid choice.\n";
        return 1;
    }
    
    // Showing that union overwrites the previous data
    cout << "\nNotice the memory sharing in Union:\n";
    if (choice == 2) {
        cout << "After storing string ID, Numeric ID will be corrupted: " << id.idNum << "\n";
    }

    // Memory size comparison
    cout << "\nMemory Size Comparison:\n";
    cout << "Size of structure (Student): " << sizeof(student) << " bytes\n";
    cout << "Size of union (StudentID): " << sizeof(id) << " bytes\n";

    return 0;
}
