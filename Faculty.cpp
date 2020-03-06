//
// Created by pcc08 on 06.03.20.
//

#include "Faculty.h"


void Faculty::set_loyalty(float value){
    loyalty = 0;
    if ((value >= 0.0) && (value <= 0.5))
        loyalty = value;
    else cout << "Loyalty must be in [0,0.5]. Input value was " << value << endl;
}

Faculty::Faculty() {
    name = "_undefined_";
    loyalty = 0;
}

Faculty::Faculty(string& _name, float _loyalty) {
    name = _name;
    set_loyalty(_loyalty);
}

void Faculty::print() const {
    cout << "Faculty: " << name << endl
         << "Deanery loyalty: " << loyalty << endl;
}