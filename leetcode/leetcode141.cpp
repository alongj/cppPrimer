//
// Created by 邵军 on 2019/3/25.
//
#include <iostream>
#include <vector>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;

    ListNode(int x) : val(x), next(NULL) {}
};

bool hasCycle(ListNode *head) {
    if (head == nullptr)
        return false;
    ListNode *oneStep = head;
    ListNode *twoStep = head->next;
    while (true) {
        if (oneStep == nullptr && twoStep == nullptr)
            return false;
        if (oneStep == twoStep)
            return true;
        if (oneStep != nullptr)
            oneStep = oneStep->next;
        if (twoStep != nullptr && twoStep->next != nullptr)
            twoStep = twoStep->next->next;
    }
}

int numRookCaptures(vector<vector<char>> &board) {
    int x = 0, y = 0;
    int px = 0, py = 0;
    for (vector<vector<char>>::iterator i = board.begin(); i != board.end(); ++i) {
        y = 0;
        for (vector<char>::iterator j = (*i).begin(); j < (*i).end(); ++j) {
            if (*j == 'R') {
                px = x;
                py = y;
            }
            ++y;
        }
        ++x;
    }
    int count = 0;
    char tmp;
    for (int i = px; i >= 0; --i) {
        tmp = board[i][py];
        if (tmp == 'p') {
            count++;
            break;
        }
        if (tmp == 'B')
            break;
    }

    for (int i = px; i < 8; ++i) {
        tmp = board[i][py];
        if (tmp == 'p') {
            count++;
            break;
        }
        if (tmp == 'B')
            break;
    }

    for (int j = py; j >= 0; --j) {
        tmp = board[px][j];
        if (tmp == 'p') {
            count++;
            break;
        }
        if (tmp == 'B')
            break;
    }

    for (int j = py; j < 8; ++j) {
        tmp = board[px][j];
        if (tmp == 'p') {
            count++;
            break;
        }
        if (tmp == 'B')
            break;
    }

    return count;

}


vector<pair<int, int>> kSmallestPairs(vector<int> &nums1, vector<int> &nums2, int k) {
    vector<pair<int, int>> vec;
    if (nums1.size() == 0 || nums2.size() == 0)
        return vec;
    int i = 0, i1 = 0, j1 = i1 + 1, j2 = 0, i2 = j2 + 1;
    int v, v1, v2;
    while (vec.size() < k) {
        if (i >= nums1.size() || i >= nums2.size()) {
            v = INT_MAX;
        } else {
            v = nums1[i] + nums2[i];
        }
        if (i1 >= nums1.size()) {
            v1 = INT_MAX;
        } else if (j1 >= nums2.size()) {
            i1++;
            if (i1 >= nums1.size() || i1 + 1 >= nums2.size()) {
                v1 = INT_MAX;
            } else {
                j1 = i1 + 1;
                v1 = nums1[i1] + nums2[j1];
            }
        } else {
            v1 = nums1[i1] + nums2[j1];
        }

        if (j2 >= nums2.size()) {
            v2 = INT_MAX;
        } else if (i2 >= nums1.size()) {
            j2++;
            if (j2 >= nums2.size() || j2 + 1 >= nums1.size()) {
                v2 = INT_MAX;
            } else {
                i2 = j2 + 1;
                v2 = nums1[i2] + nums2[j2];
            }
        } else {
            v2 = nums1[i2] + nums2[j2];
        }

        if (v == INT_MAX && v1 == INT_MAX && v2 == INT_MAX)
            break;

        if (v <= v1 && v <= v2) {
            vec.push_back(pair<int, int>(nums1[i], nums2[i]));
            i++;
        }
        if (v1 < v && v1 <= v2) {
            vec.push_back(pair<int, int>(nums1[i1], nums2[j1]));
            j1++;
        }
        if (v2 < v && v2 < v1) {
            vec.push_back(pair<int, int>(nums1[i2], nums2[j2]));
            i2++;
        }
    }

    return vec;
}

int main(int argc, char **argv) {
//    vector<vector<char>> vec;
//    char data[8][8] = {{'.', '.', '.', '.', '.', '.', '.', '.'},
//                       {'.', '.', '.', 'p', '.', '.', '.', '.'},
//                       {'.', '.', '.', 'R', '.', '.', '.', 'p'},
//                       {'.', '.', '.', '.', '.', '.', '.', '.'},
//                       {'.', '.', '.', '.', '.', '.', '.', '.'},
//                       {'.', '.', '.', 'p', '.', '.', '.', '.'},
//                       {'.', '.', '.', '.', '.', '.', '.', '.'},
//                       {'.', '.', '.', '.', '.', '.', '.', '.'}};
//
//
//    for (int i = 0; i < 8; ++i) {
//        vector<char> v;
//        for (int j = 0; j < 8; ++j) {
//            v.push_back(data[i][j]);
//        }
//        vec.push_back(v);
//    }
//
//    cout << vec[1][1] << endl;
//    cout << numRookCaptures(vec) << endl;

    vector<int> nums1 = {-10, -4, 0, 0, 6};
    vector<int> nums2 = {3, 5, 6, 7, 8, 100};

    vector<pair<int, int>> nums = kSmallestPairs(nums1, nums2, 10);

    cout << "nums.size()=" << nums.size() << endl;
    for (int i = 0; i < nums.size(); i++) {
        cout << "[" << nums[i].first << "," << nums[i].second << "]" << endl;
    }
}