#include <iostream>
using namespace std;

void analyzeMatrix(int* grades, int students, int subjects) {
    cout << "\nGrade Matrix:\n";
    for (int i = 0; i < students; i++) {
        for (int j = 0; j < subjects; j++) {
            cout << *(grades + i * subjects + j) << " ";
        }
        cout << "\n";
    }

    cout << "\nAverage grade per student:\n";
    for (int i = 0; i < students; i++) {
        int sum = 0;
        for (int j = 0; j < subjects; j++) {
            sum += *(grades + i * subjects + j);
        }
        cout << "Student " << i + 1 << ": " << (double)sum / subjects << "\n";
    }

    int highest = *(grades);
    for (int i = 0; i < students; i++) {
        for (int j = 0; j < subjects; j++) {
            if (*(grades + i * subjects + j) > highest)
                highest = *(grades + i * subjects + j);
        }
    }
    cout << "\nHighest grade: " << highest << "\n";
}

int main() {
    int students, subjects;

    cout << "Enter number of students: ";
    cin >> students;
    cout << "Enter number of subjects: ";
    cin >> subjects;

    int grades[students][subjects];

    for (int i = 0; i < students; i++) {
        cout << "Enter grades for Student " << i + 1 << ":\n";
        for (int j = 0; j < subjects; j++) {
            cout << "  Subject " << j + 1 << ": ";
            cin >> grades[i][j];
        }
    }

    analyzeMatrix(&grades[0][0], students, subjects);

    return 0;
}