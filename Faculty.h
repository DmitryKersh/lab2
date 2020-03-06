//
// Created by pcc08 on 06.03.20.
//

#ifndef LAB2_FACULTY_H
#define LAB2_FACULTY_H

#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

class Faculty {

protected:
    string name;
    float loyalty;

public:
    void set_loyalty(float value);

    Faculty();
    Faculty(string& _name, float _loyalty);

    void print() const;

};


#endif //LAB2_FACULTY_H
