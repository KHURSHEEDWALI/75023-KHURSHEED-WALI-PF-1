#include <iostream>
using namespace std;
int main() {
    float cgpa[6] = {3.5, 4.0, 2.8, 3.2, 3.9, 2.5};
    for (int i = 0; i < 6; i++) {
        float g = cgpa[i];
        char grade;
        if (g >= 3.6 && g <= 4.0)
            grade = 'A';
        else if (g >= 3.1 && g <= 3.5)
            grade = 'B';
        else if (g >= 2.6 && g <= 3.0)
            grade = 'C';
        else if (g >= 2.1 && g <= 2.5)
            grade = 'D';
        else
            grade = 'F';
        cout << "CGPA: " << g << " -> Grade: " << grade << endl;
    }
        system ("pause");
    return 0;
}
