//
// Created by 邵军 on 2019/3/22.
//
#include <iostream>
#include <vector>

using namespace std;

string convert(string s, int numRows) {
    int dRow = 1;
    int cRow = 0;
//    char result[numRows][s.length()];
    char** result = new char*[numRows];
    for (int i = 0; i < numRows; ++i) {
        result[i] = new char[s.length()];
    }
    for (int i = 0; i < s.length(); ++i) {
        result[cRow][i] = s[i];
        cRow += dRow;
        if(cRow == numRows){
            dRow = -1;
            cRow = cRow-2;
        } else if(cRow == -1)
        {
            dRow = 1;
            cRow = 1;
        }
    }

    char *d = new char[s.length()+1];
    int index = 0;
    for(int r = 0; r < numRows; ++r)
    {
        for (int col = 0; col < s.length(); ++col) {

            cout << result[r][col] << " ";
            if(result[r][col]) {
                d[index++] = result[r][col];
            }
        }

        cout << endl;
    }
    d[s.length()] = '\0';
    for (int i = 0; i < numRows; ++i) {
        delete(result[i]);
    }
    delete[] result;
    return d;
}

string convert1(string s, int numRows) {
    if(numRows==1)
        return s;
    int dRow = 1;
    int cRow = 0;
    vector<char> * result = new vector<char>[numRows];

    for (int i = 0; i < s.length(); ++i) {
        result[cRow].push_back(s[i]);
        cRow += dRow;
        if(cRow == numRows){
            dRow = -1;
            cRow = cRow-2;
        } else if(cRow == -1)
        {
            dRow = 1;
            cRow = 1;
        }
    }

    char *d = new char[s.length()+1];
    int index = 0;
    for(int r = 0; r < numRows; ++r)
    {
        for (int col = 0; col < result[r].size(); ++col) {

            cout << result[r][col] << " ";
            if(result[r][col]) {
                d[index++] = result[r][col];
            }
        }

        cout << endl;
    }
    d[s.length()] = '\0';
    delete[] result;
    string str(d);
    delete[] d;
    return str;
}

string convert2(string s, int numRows) {
    if(numRows==1)
        return s;
    int dRow = 1;
    int cRow = 0;
    string*  result = new string[numRows];

    for (int i = 0; i < s.length(); ++i) {
        result[cRow] = result[cRow] + s[i];
        cRow += dRow;
        if(cRow == numRows || cRow == -1) {
            dRow *= -1;
            cRow = cRow + 2*dRow;
        }
    }

    string str;
    for(int r = 0; r < numRows; ++r)
    {
        str.append(result[r]);
    }

    delete[] result;
    return str;
}

int main()
{
    string s = "PAYPALISHIRING";
    string result = convert2(s,3);

    cout << result << endl;


//    string s = "AB";
//    cout << convert1(s, 1) << endl;
}