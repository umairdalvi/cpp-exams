#include <iostream>
#include <vector>

using namespace std;

class Student
{
private:
    int id;
    string name;

public:
    Student(int id, string name)
    {
        this->name = name;
        this->id = id;
    }

    void viewStudentInfo()
    {
        cout << "\n-----------------------------------\n";
        cout << "ID  : " << this->id << endl;
        cout << "Name: " << this->name;
        cout << "\n-----------------------------------\n";
    }

    int getId()
    {
        return this->id;
    }
};

class StudentManager
{
private:
    vector<Student> students;

public:
    void addStudent()
    {
        int id;
        string name;

        cout << "Enter student id :";
        cin >> id;

        cin.ignore();

        cout << "Enter student name: ";
        getline(cin, name);

        Student newStudent(id, name);
        students.push_back(newStudent);

        cout << "\n-----------------------------------\n";
        cout << "Student added successfully.";
        cout << "\n-----------------------------------\n";
    }

    void viewAllStudents()
    {
        if (students.size() == 0)
        {
            cout << "\n-----------------------------------\n";
            cout << "No students to show.";
            cout << "\n-----------------------------------\n";
            return;
        }
        for (int i = 0; i < students.size(); i++)
        {
            students[i].viewStudentInfo();
        }
    }

    void removeStudentById()
    {
        if (students.size() == 0)
        {
            cout << "\n-----------------------------------\n";
            cout << "No students to remove.";
            cout << "\n-----------------------------------\n";
            return;
        }

        int id;
        bool found;

        cout << "Enter student id: ";
        cin >> id;

        for (int i = 0; i < students.size(); i++)
        {
            if (students[i].getId() == id)
            {
                found = true;
                students.erase(students.begin() + i);

                cout << "\n-----------------------------------\n";
                cout << "Student removed successfully.";
                cout << "\n-----------------------------------\n";
            }
        }
        if (!found)
        {
            cout << "\n-----------------------------------\n";
            cout << "Student not found.";
            cout << "\n-----------------------------------\n";
        }
    }

    void searchStudentById()
    {
        if (students.size() == 0)
        {
            cout << "\n-----------------------------------\n";
            cout << "No students to search.";
            cout << "\n-----------------------------------\n";
            return;
        }

        int id;
        bool found;

        cout << "Enter student id: ";
        cin >> id;

        for (int i = 0; i < students.size(); i++)
        {
            if (students[i].getId() == id)
            {
                found = true;
                students[i].viewStudentInfo();
            }
        }
        if (!found)
        {
            cout << "\n-----------------------------------\n";
            cout << "Student not found.";
            cout << "\n-----------------------------------\n";
        }
    }
};

int main()
{
    StudentManager manager;
    int choice;

    do
    {
        cout << endl;
        cout << "1. Add Student." << endl;
        cout << "2. Remove Student by ID." << endl;
        cout << "3. View all Students." << endl;
        cout << "4. Search student by ID." << endl;
        cout << "5. Exit." << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            manager.addStudent();

            break;
        }
        case 2:
        {
            manager.removeStudentById();

            break;
        }
        case 3:
        {
            manager.viewAllStudents();

            break;
        }
        case 4:
        {
            manager.searchStudentById();

            break;
        }
        case 5:
        {
            cout << "\n-----------------------------------\n";
            cout << "Thank You.";
            cout << "\n-----------------------------------\n\n";

            break;
        }
        }
    } while (choice != 5);

    return 0;
}