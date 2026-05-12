#include <iostream>
#include <vector>
using namespace std;

struct Student {
    string name;
    string regNo;
    float cgpa;
};

vector<Student> students;

// CREATE
void addStudent() {
    Student s;
    cout << "Enter Name: ";
    cin.ignore();
    getline(cin, s.name);
    cout << "Enter Registration Number: ";
    cin >> s.regNo;
    cout << "Enter CGPA: ";
    cin >> s.cgpa;
    students.push_back(s);
    cout << "Student added successfully!\n";
}

// READ
void viewStudents() {
    if (students.empty()) {
        cout << "No records found.\n";
        return;
    }
    for (int i = 0; i < students.size(); i++) {
        cout << "\nStudent " << i + 1 << endl;
        cout << "Name: " << students[i].name << endl;
        cout << "Reg No: " << students[i].regNo << endl;
        cout << "CGPA: " << students[i].cgpa << endl;
    }
}

// UPDATE
void updateStudent() {
    string reg;
    cout << "Enter Registration Number to update: ";
    cin >> reg;

    for (int i = 0; i < students.size(); i++) {
        if (students[i].regNo == reg) {
            cout << "Enter New Name: ";
            cin.ignore();
            getline(cin, students[i].name);
            cout << "Enter New CGPA: ";
            cin >> students[i].cgpa;
            cout << "Record updated successfully!\n";
            return;
        }
    }
    cout << "Student not found.\n";
}

// DELETE
void deleteStudent() {
    string reg;
    cout << "Enter Registration Number to delete: ";
    cin >> reg;

    for (int i = 0; i < students.size(); i++) {
        if (students[i].regNo == reg) {
            students.erase(students.begin() + i);
            cout << "Record deleted successfully!\n";
            return;
        }
    }
    cout << "Student not found.\n";
}

// MENU
int main() {
    int choice;
    do {
        cout << "\n===== Student Management System =====\n";
        cout << "1. Add Student\n";
        cout << "2. View Students\n";
        cout << "3. Update Student\n";
        cout << "4. Delete Student\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: addStudent(); break;
            case 2: viewStudents(); break;
            case 3: updateStudent(); break;
            case 4: deleteStudent(); break;
            case 5: cout << "Exiting program...\n"; break;
            default: cout << "Invalid choice!\n";
        }
    } while (choice != 5);

    return 0;
}

