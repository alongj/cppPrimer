//
// Created by 邵军 on 2019/2/24.
//

#include <iostream>

using namespace std;

int main(int argc, char **argv) {
//    float a = 0.0f;
//    cout << (int) a << endl;
//    cout << &a << endl;
//    cout << (int&) a << endl;

    unsigned int a = 0xFFFFFF77;
    unsigned char i = (unsigned char) a;
    char *b = (char *) &a;
    printf("%08x,%08x\n", i, *b);

//    char c = 0xF7;
//    printf(",%08x \n",*(&c));
//    cout << "int=" << sizeof(int) << ", unsigned int=" << sizeof(unsigned int) << endl;
//    cout << "char=" << sizeof(char) << ", unsigned char=" << sizeof(unsigned char) << endl;
    enum  mumble {m1,m2,m3} mval;
    unsigned long ulong =1;
    cout << "mval+ulong=" <<mval + ulong << endl;

//    cout << "m1+ulong" << (m1+ulong) << endl;
//    cout << "m1+ulong" << (ulong+m1) << endl;

    string strArr1[]={"Trend", "Micro", "Soft"};
    cout << sizeof(strArr1) << endl;
    cout << sizeof(string) << endl;

    int d;
    cout << sizeof(d=3) << endl;
}

