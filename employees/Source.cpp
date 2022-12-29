//Programmer Name: Muhammad Danyal
//Reg.NO:4304-BSSE-F21-B
#include<iostream>
#include <string>
using namespace std;

class employ {
	unsigned int empNo, age;
	float salary;
	string empName;
	char gender;
public:
	employ(int eNo=1 , int ag=1, float sal=1.0, char g='g', string ename = "ge") :empNo(eNo), age(ag), gender(g), salary(sal) { empName = ename; }
	void read();
	void displayep();
};
class manager:public employ {
	string designation;
	float clubdues;
public:
	manager(int eNo = 1, int ag = 1, float sal = 1.0, char g = 'g', string ename = "ge", string des = "s", float cd = 1.0) :employ(eNo, ag, sal, g, ename), clubdues(cd) { designation = des; }
	void managerset();
};
class scientist :public employ {
	string field, nPublication;
public:
	scientist(int eNo = 1, int ag = 1, float sal = 1.0, char g = 'g', string ename = "ge", string f = "s", string np = "n") :employ(eNo, ag, sal, g, ename) { field = f, nPublication = np; }
	void scientestset();
};
class worker :public employ {
	string shift;
	float dwage;
public:
	worker(int eNo = 1, int ag = 1, float sal = 1.0, char g = 'g', string ename = "ge", string shi = "s", float dw = 1.0) :employ(eNo, ag, sal, g, ename), dwage(dw) { shift = shi; }
	void labor();
};
//employ
void employ::read() {
	employ s;	
		cout << "Enter Employ number " << endl;
		cin >> s.empNo;
		cout << "Enter Employ Name " << endl;
		cin >> s.empName;
		cout << "Enter Employ Gender(m for male & f for female) " << endl;
		cin >> s.gender;
		cout << "Enter Employ age " << endl;
		cin >> s.age;
		cout << "Enter Employ salary " << endl;
		cin >> s.salary;
}
void employ::displayep() {
	cout << "Employ number " << endl;
	cout<< empNo;
	cout << "Employ Name " << endl;
	cout<<empName;
	cout << "Employ Gender " << endl;
	cout<<gender;
	cout << "Employ age " << endl;
	cout<<age;
	cout << "Employ salary " << endl;
	cout<<salary;
}
//scientest
void scientist::scientestset() {
	scientist s;
	cout << "Enter scientist details\n";
	s.read();
	cout << "Enter Field of study\n";
	cin >> field;
	cout << "Enter No of publications \n";
	cin >> nPublication;	
}
//manager
void manager::managerset() {
	manager m;
	cout << "Enter Manager details\n";
	m.read();
	cout << "Enter Designation \n";
	cin >> designation;
	cout << "Enter club dues \n";
	cin >> clubdues;
}
//worker
void worker::labor() {
	worker w;
	cout << "Enter Labor details\n";
	w.read();
	cout << "Enter shift(Day/Night) \n";
	cin >> shift;
	cout << "Enter club dues \n";
	cin >> dwage;
}

int main() {	
	scientist s;
	manager m;
	worker w;
	int choice;
	while (true) {
		cout << "----------Main Menu-----------" << endl << endl;		
		cout << " 1. Enter Manager Details \n";
		cout << " 2. Enter Scientist Details \n";
		cout << " 3. Enter Worker Details \n";
		cout << " 4. Exit\n";
		cout << " What do you want to do? \n";
		cin >> choice;
		switch (choice)
		{		
		case 1:
			system("cls");
			cout << "---------------Manager Details-------------" << endl << endl;		
			m.managerset();
			cout << endl;
			break;
		case 2:
			system("cls");
			cout << "---------------Scientest Details-------------" << endl << endl;	
			s.scientestset();
			cout << endl;
			break;
		case 3:
			system("cls");
			cout << "---------------Worker Details-------------" << endl << endl;		
			w.labor();
			cout << endl;
			break;
		case 4:
			EXIT_SUCCESS;
			exit(0);
			break;
		default:
			break;
		}
	}
}
