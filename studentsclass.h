#ifndef STUDENTSCLASS_H
#define STUDENTSCLASS_H
#include <string>
#include <iostream>

using namespace std;


class studentsclass
{

//Define all values
private:
    string name;
    int id;
    int phone_num;
    string email;
    float gpa;
    string field;

//Define all methods
public:
    void setname(string n);
    string getname();
    void setid(int i);
    int getid();
    void set_phone_number(int p);
    int get_phone_number();
    void setemail(string e);
    string getemail();
    void setgpa(float g);
    float getgpa();
    void setfield(string f);
    string getfield();

};

#endif // STUDENTSCLASS_H
