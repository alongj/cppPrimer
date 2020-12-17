//
// Created by 邵军 on 2019/3/19.
//
#include <iostream>
#include <map>
#include <vector>

using namespace std;

bool equal(map<char, int> &map1, map<char, int> &map2) {
    for(map<char, int>::iterator iter = map1.begin(); iter!=map1.end(); ++iter)
    {
        if(map2[iter->first] != iter->second)
            return false;
    }

    for(map<char, int>::iterator iter = map2.begin(); iter!=map2.end(); ++iter)
    {
        if(map1[iter->first] != iter->second)
            return false;
    }

    return true;
}

vector<int> findAnagrams(string s, string p) {
    vector<int> vec;
    if(s.length() < p.length())
        return vec;
    map<char, int> pMap;
    map<char, int> sMap;

    for (int i = 0; i < p.length(); ++i) {
        char c = p[i];
        pMap[c] = pMap[c] + 1;
        char c1 = s[i];
        sMap[c1] = sMap[c1] + 1;
    }

    int skipIndex = -1;
    for(int i = 0; i < p.length(); ++i){
        if(pMap[s[i]] == 0)
            skipIndex = i;
    }
    for (int i = 0; i < s.length() - p.length() + 1; ++i) {
        if(i <= skipIndex){
            sMap[s[i]] = sMap[s[i]] - 1;
            sMap[s[i+p.length()]] = sMap[s[i+p.length()]] + 1;
            continue;
        }
        if(pMap[s[i + p.length()-1]] == 0){
            skipIndex = i + p.length();
            sMap.clear();
        }
        if(equal(pMap, sMap))
            vec.push_back(i);
        sMap[s[i]] = sMap[s[i]] - 1;
        sMap[s[i+p.length()]] = sMap[s[i+p.length()]] + 1;
      }
    return vec;
}



int main(int argc, char **argv) {
//    map<char, int> map1;
//    map1.insert(pair<char,int>('a', 1));
//    map1['b'] = 2;
//
//    cout << map1['a'] << endl;
//
//    cout << map1['c'] << endl;
//
//    vector<int> v = {1,2,3,4};
//    string s = "sjksjks";
//    cout << "s[-1]=" << s[-1] << endl;
//    cout << "s[0]=" << s[0] << endl;

//    vector<int> vec = findAnagrams("cbaebabacd",  "abc");
    vector<int> vec = findAnagrams("abab",  "ab");
    for (int i = 0; i < vec.size(); ++i) {
        cout <<  vec[i] << "," ;
    }

}
