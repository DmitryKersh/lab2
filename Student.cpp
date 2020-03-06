//
// Created by pcc08 on 06.03.20.
//

#include "Student.h"

Student::Student() {
    fullname = "_undefined_";
    karma = 0;
    plan = 0;
}

Student::Student(string& name){
    fullname = name;
    karma = 0;
    plan = 0;
}

Student::Student(string& name, float _plan, float _karma){
    fullname = name;
    set_plan(_plan);
    set_karma(_karma);
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
    if(1 - (karma + plan) > 0) return 1 - (karma + plan);
    return 0;
}

void Student::print() const {
    cout << "Full Name: " << fullname << endl
         << "Karma: " << karma << endl
         << "Plan done: " << plan << endl
         << "Expelling probability: " << 100 * expell_probability() << "%" << endl;
}

