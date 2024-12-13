#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

// [Missing Code 1] Function to find grade based on score
char findGrade(float score) {
    if (score > 95) return 'A';
    else if (score > 77) return 'B';
    else if (score > 69) return 'C';
    else if (score > 50) return 'D';
    else return 'F';
}

int main() {
    int N;
    cout << "Enter the number of students: ";
    cin >> N;

    string name[N];  // Array to store student names
    float score[N];  // Array to store student scores

    // Collect names and scores using a while loop
    cin.ignore(); // To clear the newline left by cin >> N
    int i = 0;
    while (i < N) {
        cout << "Name of student " << i + 1 << ": ";
        getline(cin, name[i]); // [Missing Code 2] Capture name with spaces
        cout << "Score of student " << i + 1 << ": ";
        cin >> score[i]; // [Missing Code 3] Capture score
        cin.ignore(); // To clear the newline after capturing score
        i++;
    }

    // Print names, scores, and grades using a while loop
    cout << "---------------------------------------------\n";
    cout << setw(25) << "Name" << setw(8) << "Score" << setw(8) << "Grade" << "\n";
    cout << "---------------------------------------------\n";
    i = 0;
    while (i < N) {
        cout << setw(25) << name[i];
        
        // If the score is an integer, print without decimal places
        if (score[i] == static_cast<int>(score[i])) {
            cout << setw(8) << static_cast<int>(score[i]); // Print as integer
        } else {
            cout << setw(8) << fixed << setprecision(2) << score[i]; // Print with 2 decimal places
        }

        cout << setw(8) << findGrade(score[i]) << "\n"; // Display grade
        i++;
    }
    cout << "---------------------------------------------\n";

    return 0;
}