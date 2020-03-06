//
// Created by pcc08 on 06.03.20.
//

#include "RealStudent.h"


float RealStudent::expell_probability() {
    return (Student::expell_probability() * (1.25f - loyalty));
}

RealStudent::RealStudent() : Student(), Faculty(){

}

RealStudent::RealStudent(string& _fullname, string& _facname, float _karma, float _plan, float _facloyalty)
    : Student(_fullname, _plan, _karma), Faculty(_facname, _facloyalty) {

}

void RealStudent::print() {
    cout << "Full Name: " << fullname << endl
         << "Karma: " << karma << endl
         << "Plan done: " << plan << endl
         << "Faculty: " << name << endl
         << "Deanery loyalty: " << loyalty << endl
         << "Expell probability (overrided):" << 100 * expell_probability() << '%' << endl;
}