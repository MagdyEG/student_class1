#include <iostream>
#include <string>
#include "studentsclass.h"

using namespace std;


int main()
{
    int n, c = 1, id, pn;
    float gpa;
    string name, email, field;
    cout << "Hello students" << endl;
    cout << "Enter number of students:" << endl;
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cout << endl << c << ".student:" << endl;
        c++;
        studentsclass arr[n];
        cout << "Enter your first name: " << endl;
        cin >> name;
        arr[i].setname(name);

        cout << "Enter your ID: " << endl;
        cin >> id;
        arr[i].setid(id);

        cout << "Enter your phone number: " << endl;
        cin >> pn;
        arr[i].set_phone_number(pn);

        cout << "Enter your email: " << endl;
        cin >> email;
        arr[i].setemail(email);

        cout << "Enter your GPA: " << endl;
        cin >> gpa;
        arr[i].setgpa(gpa);

        cout << "Enter your field: " << endl;
        cin >> field;
        arr[i].setfield(field);




        cout << endl << "Name: " << arr[i].getname() << endl;
        cout << "ID: " << arr[i].getid() << endl;
        cout << "Phone number: " << arr[i].get_phone_number() << endl;
        cout << "Email: " << arr[i].getemail() << endl;
        cout << "GPA: " << arr[i].getgpa() << endl;
        cout << "Field: " << arr[i].getfield() << endl;

    }

    cout << endl << "Thanks All." << endl;
    return 0;
}
