//
// Created by 邵军 on 2019/3/16.
//
#include <iostream>
#include <vector>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

bool equals(TreeNode *left,  TreeNode *right) {
    if(NULL == left && NULL == right)
        return true;
    if(NULL == left || NULL == right)
        return false;
    return  equals(left->left, right->right) && equals(left->right, right->left);
}

bool isSymmetric(TreeNode *root) {
    if(NULL == root)
    {
        return false;
    }
    return equals(root->left, root->right);
}



void minimumBribes(vector<int> q) {
    vector<int>::reverse_iterator r;
    vector<int> result;
    int count = 0;
    r=q.rbegin();
    int third = *r;
    int second = *(r+1);
    int first;
    for (; (r+2) != q.rend() ; ++r) {
        first = *(r+2);
        if(third > second && third > first)
        {
            result.push_back(third);
            third = second;
            second = first;
        } else if(second > third && second >first) {
            count = count + 1;
            result.push_back(second);
            second = first;
        } else if (first > third &&  first > second){
            count = count + 2;
            result.push_back(first);
        }
    }

    if(second > third){
        count = count + 1;
        result.push_back(second);
        result.push_back(third);
    } else {
        result.push_back(third);
        result.push_back(second);
    }



    for(vector<int>::iterator r1 = result.begin(); (r1+1) != result.end(); ++r1)
    {
        if(*r1 < *(r1+1)) {
            cout << "Too chaotic" << endl;
            return;
        }
    }

    cout << "count=" << count << endl;

}


void minimumBribes1(vector<int> q) {
    vector<int>::iterator r;
    int position = 1;
    int count = 0;
    for (r=q.begin(); r != q.end() ; ++r, ++position) {
        int d = position - *r;
        if(d < -2) {
            cout << "Too chaotic" << endl;
            return;
        }
        count = count + ((d > 0) ? d : 0);
    }
    cout << count << endl;
}

int main(int argc, char **argv) {
    vector<int> vec = {2,1,5,3,4};
    minimumBribes(vec);

    vector<int> vec1 = {1, 2, 5, 3, 7, 8, 6, 4};

    minimumBribes(vec1);

    vector<int>::iterator itor;
    vec.erase(itor);
//    minimumBribes1(vec1);
}