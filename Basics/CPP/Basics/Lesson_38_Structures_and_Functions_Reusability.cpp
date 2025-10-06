#include <iostream>
#include <string>
using namespace std;
enum enGender
{
    Male,
    Femal
};
enum enMaritalStatus
{
    Married,
    single
};
enum EmploymentStatus
{
    Employed,
    Unemployed,
    Student,
    LookingforaJob,
    Freelancer,
    Retired
};
struct addres
{
    string City;
    string Country;
};
struct stContactInformation
{
    string mobilePhone;
    string Email;
    addres addres;
};
struct stJobInformation
{
    EmploymentStatus EmploymentStatus;
    string JobTitle;
    string CompanyName;
    float Mounthly_Salary;
};
struct stInfo
{
    string Name;
    string Nationality;
    short Age;
    enGender Gender;
    enMaritalStatus MaritalStatus;
    stContactInformation Contact;
    stJobInformation Job;
};
void ReadInfo(stInfo &person1)
{
    cout << "please enter Your Name? ";
    getline(cin, person1.Name);

    cout << "please enter Your Nationality? ";
    cin >> person1.Nationality;

    cout << "please enter Your Age? ";
    cin >> person1.Age;

    cout << "please enter Your Gender (Male=0, Femal=1)? ";
    int g;
    cin >> g;
    person1.Gender = enGender(g);

    cout << "please enter Your Marital Status (Married=0, single=1)? ";
    int m;
    cin >> m;
    person1.MaritalStatus = enMaritalStatus(m);

    cout << "please enter Your City? ";
    cin >> person1.Contact.addres.City;

    cout << "please enter Your Country? ";
    cin >> person1.Contact.addres.Country;

    cout << "please enter Your mobile Phone? ";
    cin >> person1.Contact.mobilePhone;

    cout << "please enter Your Email? ";
    cin >> person1.Contact.Email;

    cout << "please enter Your Employment Status (Employed=0, Unemployed=1, Student=2, LookingforaJob=3, Freelancer=4, Retired=5)? ";
    int e;
    cin >> e;
    person1.Job.EmploymentStatus = EmploymentStatus(e);

    if (person1.Job.EmploymentStatus == 0)
    {
        cout << "please enter Your Job Title? ";
        cin.ignore(1, 'n');
        getline(cin, person1.Job.JobTitle);

        cout << "please enter Your Mounthly Salary? ";
        cin >> person1.Job.Mounthly_Salary;

        cout << "please enter Your Company Name? ";
        cin.ignore(1, 'n');
        getline(cin, person1.Job.CompanyName);
    }
}
void PrintInfo(stInfo person1)
{
    cout << "*********************" << endl;
    cout << "Name: " << person1.Name << endl;
    cout << "Nationality: " << person1.Nationality << endl;
    cout << "Age: " << person1.Age << endl;
    cout << "Gender: " << person1.Gender << endl;
    cout << "Marital Status : " << person1.MaritalStatus << endl;
    cout << "City: " << person1.Contact.addres.City << endl;
    cout << "Country: " << person1.Contact.addres.Country << endl;
    cout << "mobile Phone: " << person1.Contact.mobilePhone << endl;
    cout << "Email: " << person1.Contact.Email << endl;
    cout << "Employment Status: " << person1.Job.EmploymentStatus << endl;
    if (person1.Job.EmploymentStatus == 0)
    {
        cout << "Job Title: " << person1.Job.JobTitle << endl;
        cout << "Mounthly Salary: " << person1.Job.Mounthly_Salary << endl;
        cout << "Yearly Salary: " << person1.Job.Mounthly_Salary * 12 << endl;
        cout << "Company Name: " << person1.Job.CompanyName << endl;
    }
    cout << "*********************" << endl;
}
int main()
{
    stInfo(person1);
    ReadInfo(person1);
    PrintInfo(person1);
    return 0;
}