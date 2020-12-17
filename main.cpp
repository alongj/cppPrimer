#include <iostream>
#include<array>
#include "head/studenti.h"

using std::cin;
using std::cout;
using std::endl;

void set(Student &sa, int n);

const int pupils = 3;
const int quzzes = 5;

void test(int** a);
void test2(int*& a);
void test3(int* a);

int main() {
//    Student ada[pupils] =
//            {Student(quzzes), Student(quzzes), Student(quzzes)};
//    int i;
//    for (int i = 0; i < pupils; ++i) {
//        set(ada[i], quzzes);
//    }
//    cout << "\nStudent List:\n";
//    for (int i = 0; i < pupils; ++i) {
//        cout << ada[i].Name() << endl;
//    }
//    cout << "\n Result: ";
//    for (int i = 0; i < pupils; ++i) {
//        cout << endl << ada[i];
//        cout << "average: " << ada[i].Average() << endl;
//    }
//    cout << "Done. \n";
    int* a = new int(5);
    printf("main %x\n", &a);
    test(&a);
    test2(a);
    test3(a);
    delete(a);
    return 0;
}

void test(int** a) {
    printf("%x \n",a);
}

void test2(int*& a) {
    printf("test2 %x \n",a);
    printf("test2 %x \n",&a);
}

void test3(int* a) {
    printf("test3 %x \n",a);
    printf("test3 %x \n",&a);
}

void set(Student &sa, int n) {
    cout << "Please enter the student's name: ";
    getline(cin, sa);
    cout << "Please enter " << n << " quiz scores:\n";
    for (int i = 0; i < n; i++) {
        cin >> sa[i];
    }
    while (cin.get() != '\n')
        continue;
}
