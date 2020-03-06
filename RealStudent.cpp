//
// Created by pcc08 on 06.03.20.
//

#include "RealStudent.h"


float RealStudent::expell_probability() {
    return float(Student::expell_probability() * (loyalty + 0.75));
}

RealStudent::RealStudent() : Student(), Faculty(){

}

RealStudent::RealStudent(string _fullname, string _facname, float _karma, float _plan, float _facloyalty)
    : Student(_fullname, _plan, _karma), Faculty(_facname, _facloyalty)
{

}