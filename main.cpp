#include <iostream>
#include "RealStudent.h"

int main() {
    string name, facname;
    float p, k, l;

    cout << "Enter <fullname> <facname> <plan> <karma> <loyalty>" << endl;
    getline(cin, name);
    getline(cin, facname);
    cin >> p >> k >> l;

    RealStudent stud(name, facname, k, p, l);

    stud.print();
    return 0;
}