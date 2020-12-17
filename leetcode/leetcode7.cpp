//
// Created by 邵军 on 2019/3/24.
//

#include <iostream>

using namespace std;

int reverse(int x) {
    int sign = x >= 0 ? 1 : -1;
    int dx = abs(x);
    int r[10];
    int i = 0;
    while (dx > 0) {
        r[i++] = dx % 10;
        dx /= 10;
    }
    int result = 0;
    for (int j = 0; j <= i - 1; ++j) {
        cout << r[j] << endl;
        result = result * 10 + r[j];
    }
    result *= sign;
    return result;
}

int reverse1(int x) {
    int sign = x >= 0 ? 1 : -1;
    int dx = x * sign;
    int result = 0;
    while (dx > 0) {
        if (result * 10 > INT_MAX) {
            if (sign > 0)
                return INT_MAX;
            else
                return INT_MIN;
        }

        result = result * 10 + (dx % 10);
        dx /= 10;
    }
    result *= sign;
    return result;
}

int reverse2(int x) {
    long long res = 0;
    while (x) {
        res = res * 10 + x % 10;
        x /= 10;
    }
    return (res < INT_MIN || res > INT_MAX) ? 0 : res;
}

int myAtoi(string str) {
        int sign = 1;
        long result = 0;
        int start = -1;
        for (int i = 0; i < str.length(); ++i) {
            if(str[i] == 32 && start == -1)
                continue;
            else if(start == -1 && (str[i] == '-' || str[i]== '+' || (str[i]>=48&& str[i]<58))){
                start = i;
                if(str[i] == '-'){
                    sign = -1;
                    continue;
                } else if(str[i] == '+')
                {
                    continue;
                }
            } else if (start==-1 && (str[i] <48 || str[i]>=58))
            {
                return 0;
            }

            else if((str[i] == '-'|| str[i]=='+' )&& start != -1)
            {
                return result;
            } else if(start!=-1 && (str[i] == 32 || str[i] == 46))
            {
                return result;
            }
            if(result==0 && str[i] == 48)
                continue;
            else if(str[i] <48 || str[i]>=58)
                return result;
            result = result*10 + sign*(str[i]-48);
            if(result >= INT_MAX )
               return INT_MAX;
            if(result <= INT_MIN)
                return INT_MIN;
        }
        return result;
}


int main(int argc, char **argv) {

//    cout << reverse1(1534236469) << endl;
//    cout << reverse1(-123);
//    cout << reverse2(-2147483648);

    cout<< myAtoi("  -0012a42") << endl;
    return 0;
}