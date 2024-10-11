#include <iostream>
using namespace std;
int main()
{
    int i = 1;
    do
    {
        cout << i << " ";
        i++;
    } while (i < 5);
    return 0;
}



#include <iostream>
#include <string>
using namespace std;

class Person {
private:
    int Pid;
    string Pname;
    double PSalary;

public:
    void getdata() {
        cout << "Enter Person ID: ";
        cin >> Pid;
        cout << "Enter Person Name: ";
        cin.ignore();
        getline(cin, Pname);
        cout << "Enter Person Salary: ";
        cin >> PSalary;
    }

    void showdata() {
        cout << "\nPerson ID: " << Pid;
        cout << "\nPerson Name: " << Pname;
        cout << "\nPerson Salary: " << PSalary;
    }

    void setdata(int id, string name, double salary) {
        Pid = id;
        Pname = name;
        PSalary = salary;
    }

    double getSalary() {
        return PSalary;
    }
};

int main() {
    // Create three Person objects with different names
    Person person1, person2, person3;
    
    // Using getdata() for person1
    cout << "\nEntering data for person1 using getdata():" << endl;
    person1.getdata();
    
    // Using setdata() for person2
    cout << "\nSetting data for person2 using setdata()" << endl;
    person2.setdata(102, "Jane Smith", 75000.0);
    
    // Using setdata() for person3
    cout << "\nSetting data for person3 using setdata()" << endl;
    person3.setdata(103, "Bob Johnson", 82000.0);
    
    // Display data for all persons
    cout << "\n\nDisplaying data for all persons:" << endl;
    
    cout << "\nPerson 1 details:";
    person1.showdata();
    
    cout << "\n\nPerson 2 details:";
    person2.showdata();
    
    cout << "\n\nPerson 3 details:";
    person3.showdata();
    
    // Find and display the person with highest salary
    Person highestSalaryPerson;
    if (person1.getSalary() > person2.getSalary() && person1.getSalary() > person3.getSalary()) {
        highestSalaryPerson = person1;
    } else if (person2.getSalary() > person3.getSalary()) {
        highestSalaryPerson = person2;
    } else {
        highestSalaryPerson = person3;
    }
    
    cout << "\n\nPerson with highest salary:";
    highestSalaryPerson.showdata();
    
    return 0;
}