//
// Created by 邵军 on 2019/2/25.
//

#include <iostream>

using namespace std;

char *maxi(int a, int b) {
    int c = a - b;
    char *str[2] = {"a Large ", "b Lagrge "};
    c = unsigned(c) >> (sizeof(int) * 8 - 1);
    return str[c];
}

void change(int &a, int &b) {
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
}

#define product(x) x*x

int main() {
//    cout << maxi(8,5) << endl;
    int a = 3;
    int b = 5;
    change(a, b);

    cout << "a=" << a << ",b=" << b << endl;

    int i = 3;
    int j;
    j = product(i++);
    cout << "j=" << j << endl;
    cout << "i=" << i << endl;

    int k = product(++i);
    cout << "k=" << k << endl;
    cout << "i=" << i << endl;

}

