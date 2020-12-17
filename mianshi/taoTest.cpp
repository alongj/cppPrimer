//
// Created by 邵军 on 2019/5/6.
//
#include <iostream>

using namespace std;

int func(int n){
    if(n==5)
    {
        return 1020;
    } else
    {
        return func(n+1)*5/4 + 1;
    }
}

int main(int argc, char** argv)
{
    cout << "count=" <<  func(0) << endl;

    return 0;
}