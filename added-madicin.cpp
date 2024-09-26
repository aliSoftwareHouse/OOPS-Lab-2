#include <iostream>
using namespace std;

//Hospital management system
struct Patients {
	string name; string illness; int age; int days; string checkupBy;
};

struct Doctors {
	string name; string spec; int fee;
};

struct Staffs {
	string name; int fees; int age; string lookupTo;
};

struct Medicines {
	string name; string price;
};

int main()
{
	Patients patient[10];
	Doctors doctor[10];
	Staffs staff[10];
	Medicines medicine[10];

	patient[0].name = "Ali", patient[0].illness = "Heart Attack", patient[0].age = 65, patient[0].days = 12, patient[0].checkupBy = doctor[0].name;
	patient[1].name = "Alia", patient[1].illness = "Kidney Attack", patient[1].age = 45, patient[1].days = 20, patient[1].checkupBy = doctor[1].name;
	patient[2].name = "Arsalan", patient[2].illness = "Stomach Attack", patient[2].age = 15, patient[2].days = 2, patient[2].checkupBy = doctor[2].name;

	doctor[0].name = "Uzair", doctor[0].fee = 2300, doctor[0].spec = "MBBS";
	doctor[1].name = "Asim", doctor[1].fee = 4300, doctor[1].spec = "BDS";
	doctor[2].name = "Jawad", doctor[2].fee = 2900, doctor[2].spec = "FTC";

	staff[0].name = "Uzair", staff[0].fees = 2300, staff[0].age = 15, staff[0].lookupTo = patient[0].name;
	staff[1].name = "Asim", staff[1].fees = 4300, staff[1].age = 15, staff[1].lookupTo = patient[1].name;
	staff[2].name = "Jawad", staff[2].fees = 2900, staff[2].age = 15, staff[2].lookupTo = patient[2].name;

	medicine[0] = { "Dolex", "10" };
	medicine[1] = { "Doliprane", "20" };
	medicine[2] = { "Dolo", "30" };

	string searchName;
	int chargePerday = 100;
	cout << "Enter a Patient name or Doctor's name or Staff name to View their Records : ";
	cin >> searchName;

	for (int i = 0; i < 10; i++) {
		if (searchName == patient[i].name) {
			cout << "This is the patient's recorde \n";
			cout << "Name : " << patient[i].name << endl;
			cout << "illness : " << patient[i].illness << endl;
			cout << "Age : " << patient[i].age << endl;
			cout << "Days : " << patient[i].days << endl;
			cout << "Checkup By : " << patient[i].checkupBy << endl;
			int totalFees =  (patient[i].days * chargePerday) + doctor[i].fee + staff[i].fees ;
			cout << "Total Fees: " << totalFees << endl << endl;
		}
		else if (searchName == doctor[i].name) {
			cout << "This is the doctor's recorde \n";
			cout << "Name : " << doctor[i].name << endl;
			cout << "Fee : " << doctor[i].fee << endl;
			cout << "Checkup to : " << patient[i].name << endl << endl;
		}
		else if (searchName == staff[i].name) {
			cout << "This is the staff's recorde \n";
			cout << "Name : " << staff[i].name << endl;
			cout << "Fees : " << staff[i].fees << endl;
			cout << "Age : " << staff[i].age << endl << endl;

		}
		else {
			cout << "Invalid Input";
		}
	}

}
