//
// Created by 邵军 on 2019/3/22.
//

#include <iostream>
#include <vector>
using namespace std;

int wiggleMaxLength(vector<int> &nums)
{
    if(nums.size()< 2){
        return nums.size();
    }

    if(nums.size()==2 && nums[1] == nums[0]){
        return 1;
    }

    int sign = nums[1] - nums[0] ;
    int count = sign==0?1:2;
    for (int i = 1; i < nums.size() - 1; ++i) {
        if(sign >= 0  && nums[i+1] < nums[i])
        {
            sign = -1;
            count++;
        }  else if(sign <= 0 && nums[i +1] > nums[i]) {
            sign = 1;
            count ++;
        }
    }
    return count;
}



int main(){
//    vector<int> vec = {3,3,3,2,5};

//    cout << wiggleMaxLength(vec) << endl;

//    vector<int> s;
    vector<int> s(1);
    vector<int> s0{1};
    vector<int> s1({1,2,3,4});
    vector<int> s2 = {5,6,7,8};
    cout << s0[0] << endl;
    cout << s1[1] << endl;
//    vector<int> s2(123);
//    vector<int> s();
//
//    s();

    return 0;
}

vector<int> s(){
    cout <<  "this is bug" << endl;
}