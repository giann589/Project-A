#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Student {
    string firstName, lastName;
    char grade;
};

int main() {
    vector<Student> students;
    string firstName, lastName;
    char grade;

    cout << "Enter student data (firstName lastName grade)." << endl;
    cout << "Type 'done' as the first name to stop." << endl;

    while (true) {
        cout << "First name: ";
        cin >> firstName;

        if (firstName == "done") {
            break;
        }

        cout << "Last name: ";
        cin >> lastName;

        cout << "Grade (A-F): ";
        cin >> grade;
        cout << endl;

        students.push_back({ firstName, lastName, grade });
    }

    const string gradeOrder = "ABCDF";

    for (char g : gradeOrder) {
        for (const Student& s : students) {
            if (s.grade == g) {
                cout << s.firstName << " " << s.lastName << " " << s.grade << endl;
            }
        }
    }

    return 0;
}
