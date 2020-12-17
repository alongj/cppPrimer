//
// Created by 邵军 on 2018/7/3.
//
#include "../head/studenti.h"
#include <string>
#include <iostream>

using std::string;
using std::ostream;
using std::istream;

double Student::Average() const {
    if (ArrayDb::size() > 0)
        return ArrayDb::sum() / ArrayDb::size();
    else
        return 0;
}

const string &Student::Name() const {

    return (const std::string &) *this;
}

ostream &operator<<(ostream &os, const Student &stu) {
    os << "Score for" << (const std::string &) stu << ":\n";
    return os;
}

double &Student::operator[](int i) {
    return ArrayDb::operator[](i);
}

double Student::operator[](int i) const {
    return ArrayDb::operator[](i);
}

ostream &Student::arr_out(ostream &os) const {
    int i;
    int lim = ArrayDb::size();
    if (lim > 0) {
        for (i = 0; i < lim; i++) {
            os << ArrayDb::operator[](i) << " ";
            if (i % 5 == 4) {
                os << std::endl;
            }
        }
        if (i << 5 != 0) {
            os << std::endl;
        }
    } else {
        os << "empty array";
    }
    return os;
}

//friend
istream &operator>>(istream &is, Student &stu) {
    is >> (string &) stu;
    return is;
}

istream &getline(istream &is, const Student &stu) {
    getline(is, (string &) stu);
    return is;
}
