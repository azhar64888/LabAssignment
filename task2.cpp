#include <iostream>
#include <string>
using namespace std;

struct Student {
    string name;
    string roll;
    float gpa;
};

int main() {
    Student s[3];
    for (int i = 0; i < 3; i++) {
        cout << "Enter name for student " << i + 1 << ": ";
        getline(cin, s[i].name);
        cout << "Enter roll number: ";
        getline(cin, s[i].roll);
        cout << "Enter GPA: ";
        cin >> s[i].gpa;
        cin.ignore();
        cout << endl;
    }

    cout << "\n--- Student Details ---\n";
    for (int i = 0; i < 3; i++) {
        cout << i + 1 << ". " << s[i].name << " | Roll: " 
             << s[i].roll << " | GPA: " << s[i].gpa << endl;
    }
    return 0;
}
