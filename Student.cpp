//
// Created by pcc08 on 06.03.20.
//

#include "Student.h"

Student::Student() {
    fullname = "_undefined_";
    karma = 0;
    plan = 0;
}

Student::Student(std::string name){
    fullname = name;
    karma = 0;
    plan = 0;
}

Student::Student(std::string name, float p, float k){
    fullname = name;
    //karma = 0;
    //plan = 0;
    set_plan(plan);
    set_karma(karma);
}

void Student::set_plan(float value) {
    plan = 0;
    if ((value >= 0.0) && (value <= 1.0))
        plan = value;
    else cout << "Plan must be in [0,1]. Input value was " << value << endl;
}

void Student::set_karma(float value) {
    karma = 0;
    if ((value >= 0.0) && (value <= 0.5))
        karma = value;
    else cout << "Karma must be in [0,0.5]. Input value was " << value << endl;
}

float Student::expell_probability() const {
    return 1 - (karma + plan);
}

void Student::print() const {
    cout << "Full Name: " << fullname << endl
         << "Karma: " << karma << endl
         << "Plan done: " << plan << endl
         << "Expelling probability: " << 100 * expell_probability() << "%" << endl;
    return;
}