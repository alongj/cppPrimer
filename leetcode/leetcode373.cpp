//
// Created by 邵军 on 2019/3/26.
//

#include <iostream>
#include <vector>
#include <queue>

using namespace std;


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

vector<pair<int, int>> kSmallestPairs1(vector<int> &nums1, vector<int> &nums2, int k) {
    vector<pair<int, int>> result;
    if (nums1.empty() || nums2.empty() || k <= 0)
        return result;
    auto comp = [&nums1, &nums2](pair<int, int> a, pair<int, int> b) {
        return nums1[a.first] + nums2[a.second] > nums1[b.first] + nums2[b.second];
    };
    priority_queue<pair<int, int>, vector<pair<int, int>>, decltype(comp)> min_heap(comp);
    min_heap.emplace(0, 0);
    while (k-- > 0 && min_heap.size()) {
        auto idx_pair = min_heap.top();
        min_heap.pop();
        result.emplace_back(nums1[idx_pair.first], nums2[idx_pair.second]);
        if (idx_pair.first + 1 < nums1.size())
            min_heap.emplace(idx_pair.first + 1, idx_pair.second);
        if (idx_pair.first == 0 && idx_pair.second + 1 < nums2.size())
            min_heap.emplace(idx_pair.first, idx_pair.second + 1);
    }
    return result;
}

int main(int argc, char **argv) {

    vector<int> nums1 = {-10, -4, 0, 0, 6};
    vector<int> nums2 = {3, 5, 6, 7, 8, 100};

    vector<pair<int, int>> nums = kSmallestPairs1(nums1, nums2, 10);

    cout << "nums.size()=" << nums.size() << endl;
    for (auto &num : nums) {
        cout << "[" << num.first << "," << num.second << "]" << endl;
    }

    cout << "-------------------" << endl;
    nums = kSmallestPairs(nums1, nums2, 10);

    cout << "nums.size()=" << nums.size() << endl;
    for (auto &num : nums) {
        cout << "[" << num.first << "," << num.second << "]" << endl;
    }
}