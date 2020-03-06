//
// Created by pcc08 on 06.03.20.
//

#ifndef LAB2_REALSTUDENT_H
#define LAB2_REALSTUDENT_H

#include "Student.h"
#include "Faculty.h"
#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

class RealStudent : public Student, public Faculty {
public:
    float expell_probability();
    RealStudent();
    RealStudent(string _fullname, string _facname, float _karma, float _plan, float _facloyalty);
};


#endif //LAB2_REALSTUDENT_H
