//
// Created by 邵军 on 2019/3/9.
//
#include <iostream>

using namespace std;
int mystrlen(char* buf, int N)
{
    cout << "N=" << N << endl;
    if(buf[0] == 0 || N == 0)
    {
        return 0;
    } else if(N==1)
    {
        return 1;
    }

    int t = mystrlen(buf, N/2);
    cout << "t=" << t << ",N=" << N << endl;
    if(t<N/2){
        return t;
    } else{
        return (t + mystrlen(buf+N/2, (N+1)/2));
    }
}

int main()
{
    char buf[] = {'a', 'b', 'c', 'd', 'e', 'f', '\0', 'x', 'y', 'z'};
    int k;
    k = mystrlen(buf, 9);

    cout << k << endl;

    return 0;
}
