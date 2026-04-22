#include <iostream>
#include <fstream>
#include <cstring>
#include<limits>
using namespace std;

class Student {
private:
    int id;
    char name[50];
    float gpa;

public:
    // 🔹 Input
    void input() {
        cout << "Enter ID: ";
        cin >> id;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        cout << "Enter Name: ";
        cin.getline(name, 50);

        cout << "Enter GPA: ";
        cin >> gpa;
    }

    // 🔹 Display
    void display() const {
        cout << "ID: " << id
            << ", Name: " << name
            << ", GPA: " << gpa << endl;
    }

    // 🔹 Getter
    int getId() const {
        return id;
    }

    // 🔹 Update
    void update() {
        cout << "Enter new Name: ";
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cin.getline(name, 50);

        cout << "Enter new GPA: ";
        cin >> gpa;
    }
};

// 🔹 File name
const char* FILE_NAME = "students.dat";

// ➕ CREATE
void addStudent() {
    Student s;
    s.input();

    ofstream out(FILE_NAME, ios::binary | ios::app);
    out.write((char*)&s, sizeof(s));
    out.close();

    cout << "Student added successfully!\n";
}

// 📖 READ
void viewStudents() {
    Student s;
    ifstream in(FILE_NAME, ios::binary);

    if (!in) {
        cout << "No records found.\n";
        return;
    }

    cout << "\n--- Student Records ---\n";
    while (in.read((char*)&s, sizeof(s))) {
        s.display();
    }

    in.close();
}

// 🔍 SEARCH
void searchStudent() {
    int id;
    cout << "Enter ID to search: ";
    cin >> id;

    Student s;
    ifstream in(FILE_NAME, ios::binary);
    bool found = false;

    while (in.read((char*)&s, sizeof(s))) {
        if (s.getId() == id) {
            cout << "Record Found:\n";
            s.display();
            found = true;
            break;
        }
    }

    if (!found) cout << "Student not found.\n";

    in.close();
}

// ✏️ UPDATE
void updateStudent() {
    int id;
    cout << "Enter ID to update: ";
    cin >> id;

    Student s;
    fstream file(FILE_NAME, ios::binary | ios::in | ios::out);
    bool found = false;

    while (file.read((char*)&s, sizeof(s))) {
        if (s.getId() == id) {
            cout << "Enter new details:\n";
            s.update();

            file.seekp(-sizeof(s), ios::cur);
            file.write((char*)&s, sizeof(s));

            cout << "Record updated!\n";
            found = true;
            break;
        }
    }

    if (!found) cout << "Student not found.\n";

    file.close();
}

// ❌ DELETE
void deleteStudent() {
    int id;
    cout << "Enter ID to delete: ";
    cin >> id;

    Student s;
    ifstream in(FILE_NAME, ios::binary);
    ofstream out("temp.dat", ios::binary);

    bool found = false;

    while (in.read((char*)&s, sizeof(s))) {
        if (s.getId() == id) {
            found = true;
            continue;
        }
        out.write((char*)&s, sizeof(s));
    }

    in.close();
    out.close();

    remove(FILE_NAME);
    rename("temp.dat", FILE_NAME);

    if (found)
        cout << "Record deleted!\n";
    else
        cout << "Student not found.\n";
}

// 🔹 MENU
void menu() {
    int choice;

    do {
        cout << "\n====== Student Management System ======\n";
        cout << "1. Add Student\n";
        cout << "2. View Students\n";
        cout << "3. Search Student\n";
        cout << "4. Update Student\n";
        cout << "5. Delete Student\n";
        cout << "0. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1: addStudent(); break;
            case 2: viewStudents(); break;
            case 3: searchStudent(); break;
            case 4: updateStudent(); break;
            case 5: deleteStudent(); break;
            case 0: cout << "Exiting...\n"; break;
            default: cout << "Invalid choice!\n";
        }

    } while (choice != 0);
}

// 🔹 MAIN
int main() {
    menu();
    return 0;
}