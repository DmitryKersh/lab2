//
// Created by pcc08 on 06.03.20.
//

#ifndef LAB2_STUDENT_H
#define LAB2_STUDENT_H

#include <string>
#include <iostream

using std::cin;
using std::cout;
using std::endl;

class Student {

    std::string fullname;

protected:
    float karma;
    float plan;

public:
    Student();
    Student(std::string name);
    Student(std::string name, float p, float k);

    void set_plan(float value);
    void set_karma(float value);

    float expell_probability() const;
    void print() const;

};


#endif //LAB2_STUDENT_H