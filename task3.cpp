#include <iostream>
using namespace std;

int main() {
    int marks;
    cout << "Enter marks (0–100): ";
    cin >> marks;

    if (marks >= 90 && marks <= 100)
        cout << "Grade: A+\n";
    else if (marks >= 80)
        cout << "Grade: A\n";
    else if (marks >= 70)
        cout << "Grade: B\n";
    else if (marks >= 60)
        cout << "Grade: C\n";
    else if (marks >= 50)
        cout << "Grade: D\n";
    else if (marks >= 0)
        cout << "Grade: F\n";
    else
        cout << "Invalid marks entered!\n";

    return 0;
}
