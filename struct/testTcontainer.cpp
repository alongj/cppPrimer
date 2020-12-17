//
// Created by 邵军 on 2019/3/21.
//

#include "tcontainer.h"
//#include <iostream>

using namespace std;
int main(int argc, char** argv)
{
    tvector<int> v;
    for (int i = 0; i < 100; ++i) {
        v.push(i);
    }

    for (int j = 0; j < 100; ++j) {
        cout << v[j] << endl;
    }
}