//
// Created by pcc08 on 06.03.20.
//

#ifndef LAB2_STUDENT_H
#define LAB2_STUDENT_H

#include <string>
#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

class Student {

protected:
    string fullname;
    float karma;
    float plan;

public:
    Student();
    Student(string name);
    Student(string name, float p, float k);

    void set_plan(float value);
    void set_karma(float value);

    float expell_probability() const;
    void print() const;

};


#endif //LAB2_STUDENT_H
