#include <iostream>
#include <string>
using namespace std;

// Doctors
struct Doctors {
    string name;
    int fees;
    string spec;
    int age;
};

// Staff
struct Staffs {
    string name;
    int fees;
    string treatedTo;
    int age;
};

// Patients
struct Patients {
    string name;
    int charges;
    string treatedBy;
    string checkBy;
    int age;
};

// Medicines
struct Medicine {
    string name;
    int price;
};

int main() {
    const int personNo = 1000;
    Patients patients[personNo];
    Staffs staffs[personNo];
    Doctors doctors[personNo];
    Medicine medicines[100];

    int patientCount = 0;

    cout << "Select any Option : \n";
    cout << "1 : Print Patients Detail\n";
    cout << "2 : Admit Patients\n";
    cout << "3 : Exit\n";
    cout << "Your input : ";

    int userInput;
    cin >> userInput;

    // Print Patients
    if (userInput == 1) {
        string patientName;
        cout << "Enter Patient name to print its details: ";
        cin >> patientName;

        bool found = false;
        for (int i = 0; i < patientCount; i++) {
            if (patientName == patients[i].name) {
                cout << "Patient's Name : " << patients[i].name << endl;
                cout << "Patient's Age : " << patients[i].age << endl;
                cout << "Patient's Charges : " << patients[i].charges << endl;
                cout << "Patient Checkup By : " << patients[i].checkBy << endl;
                cout << "Patient Treated by : " << patients[i].treatedBy << endl;
                found = true;
                break; // Exit the loop once found
            }
        }
        if (!found) {
            cout << "This Patient is not found: " << patientName << endl;
            cout << "Do you want to admit this patient? (1 for Yes, 2 for No): ";
            int admitChoice;
            cin >> admitChoice;
            if (admitChoice == 1) {
                // Call the admit function if needed
            }
        }
    }
    // Admit Patients
    else if (userInput == 2) {
        if (patientCount < personNo) {
            cout << "Enter Patient's Name: ";
            cin >> patients[patientCount].name;
            cout << "Patient's Age: ";
            cin >> patients[patientCount].age;
            cout << "Patient's Charges: ";
            cin >> patients[patientCount].charges;
            cout << "Patient Checkup By: ";
            cin >> patients[patientCount].checkBy;
            cout << "Patient Treated by: ";
            cin >> patients[patientCount].treatedBy;

            patientCount++; // Increment the patient count
            cout << "Patient admitted successfully!" << endl;
        }
        else {
            cout << "Cannot admit more patients, capacity reached." << endl;
        }
    }
    // Exit
    else {
        cout << "Exiting the program." << endl;
        return 0;
    }

    return 0;
}
