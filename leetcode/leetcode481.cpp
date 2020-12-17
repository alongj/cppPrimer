//
// Created by 邵军 on 2019/3/27.
//

#include <iostream>
#include <vector>

using namespace std;

int magicalString(int n) {
    vector<int> vec = {1, 2, 2};
    int count = 3;
    int c1 = 1;
    int dx;
    for (int i = 2; i < n; ++i) {
        if (count >= n)
            break;
        dx = (i & 1) + 1;
//        dx = i % 2 == 0 ? 1 : 2;
        vec.push_back(dx);
        if (vec[i] == 2) {
            vec.push_back(dx);
            count = count + 2;
            if (dx == 1 && count > n) {
                c1++;
            } else if(dx == 1) {
                c1 = c1 + 2;
            }
        } else {
            count++;
            if (dx == 1)
                c1++;
        }

    }
    return c1;
}

int main(int argc, char **argv) {

//    cout << magicalString(7) << endl;
    const time_t t = time(NULL);
    tm* current_time = localtime(&t);
    gmtime(&t);
    cout << "current_time=" << t << endl;
//    long begin = currentl
    for (int i = 0; i < 10; ++i) {

        cout << "i="  << i << ", i&1=" << (i&1) << endl;
    }
    return 0;
}