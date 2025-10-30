#include <iostream>
using namespace std;

int main() {
    int Marks, gradeCategory;
    cout << "Enter your marks (0 - 100): ";
    cin >> Marks;
    if (Marks < 0 || Marks > 100) {
        cout << "Invalid Marks! Please enter Marks between 0 and 100." << endl;
    }
    gradeCategory = Marks / 10;
    switch (gradeCategory) {
        case 10:
        case 9:
            cout << "Grade: A" << endl;
            break;
        case 8:
            cout << "Grade: B" << endl;
            break;
        case 7:
            cout << "Grade: C" << endl;
            break;
        case 6:
            cout << "Grade: D" << endl;
            break;
        default:
            cout << "Grade: F" << endl;
    }
   system("pause");
    return 0;
}
