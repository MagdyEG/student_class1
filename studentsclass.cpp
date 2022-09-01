#include "studentsclass.h"
#include <string>

//set and get name student
    void studentsclass::setname(string n)
    {
        name = n;
    }
    string studentsclass::getname()
    {
        return name;
    }

//set and get id student
    void studentsclass::setid(int i)
    {
        if(i >=0)
            id = i;
        else
            cout << "Enter positive number only";
    }
    int studentsclass::getid()
    {
        return id;
    }
//set and get  phone_number student
    void studentsclass::set_phone_number(int p)
    {
        if(p >=0)
            phone_num = p;
        else
            cout << "Enter positive number only";
    }
    int studentsclass::get_phone_number()
    {
        return phone_num;
    }


//set and get  email student
    void studentsclass::setemail(string e)
    {
        email = e;
    }
    string studentsclass::getemail()
    {
        return email;
    }

//set and get  gpa student
    void studentsclass::setgpa(float g)
    {
        gpa = g;
    }
    float studentsclass::getgpa()
    {
        return gpa;
    }


//set and get  field student
    void studentsclass::setfield(string f)
    {
        field = f;
    }
    string studentsclass::getfield()
    {
        return field;
    }
