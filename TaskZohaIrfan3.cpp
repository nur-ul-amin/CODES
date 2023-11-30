#include <iostream>
using namespace std;
 //code by Noor-Ul-Amin Tue Oct 17 2023
int main() {
    double gpa;
    cout << "Enter GPA: ";
    cin >> gpa;
 //code by Noor-Ul-Amin Tue Oct 17 2023
    if (gpa >= 3.5) {
        cout << "You have made the Dean's List." << endl;
    } else if (gpa >= 2.0) {
        cout << "Your GPA is OK." << endl;
    } else {
        cout << "See your academic advisor." << endl;
    }

    return 0;
}
