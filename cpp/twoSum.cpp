#include <iostream>
#include <vector>
#include <set>

using namespace std;
using std::set;

vector<int> twoSum(vector<int> &nums, int target) {
    for (int i = 0; i < nums.size(); i++) {
        for (int j = i; j < nums.size(); j++) {
            int sum = nums[i] + nums[j];
            if (sum == target)
                return vector<int>{i, j};
        }
    }
    return vector<int>{-1, -1};
}

int uniquePathsWithObstacles(vector<vector<int>> &obstacleGrid) {
    vector<vector<int>> dist(100, vector<int>(100)); //= vector<vector<int>>
    dist[0][0] = 1;
    for (int i = 0; i < obstacleGrid.size(); ++i) {
        for (int j = 0; j < obstacleGrid[i].size(); ++j) {
            if (obstacleGrid[i][j] == 0) {
                if (i > 0) dist[i][j] += dist[i - 1][j];
                if (j > 0) dist[i][j] += dist[i][j - 1];
            } else {
                dist[i][j] = 0;
            }
        }
    }
    long m = obstacleGrid.size();
    long n = obstacleGrid[m - 1].size();

    return dist[m - 1][n - 1];
}


struct ListNode {
    int val;
    ListNode *next;

    ListNode(int x) : val(x), next(NULL) {}
};

ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) {
    int a = l1 ? l1->val : 0;
    int b = l2 ? l2->val : 0;
    int t = a + b;
    int c = t > 9 ? 1 : 0;
    t = t % 10;
    ListNode *result = new ListNode(t);
    l1 = l1->next;
    l2 = l2->next;
    ListNode *temp = result;
    while (l1 || l2 || c) {
        a = l1 ? l1->val : 0;
        b = l2 ? l2->val : 0;
        t = a + b + c;
        c = t > 9 ? 1 : 0;
        t = t % 10;
        temp->next = new ListNode(t);
        temp = temp->next;
        if (l1) l1 = l1->next;
        if (l2) l2 = l2->next;
    }
    return result;
}

ListNode *addTwoNumbers1(ListNode *l1, ListNode *l2) {
    int a = l1 ? l1->val : 0;
    int b = l2 ? l2->val : 0;
    int t = a + b;
    int c = t > 9 ? 1 : 0;
    t = t % 10;
    ListNode *result = new ListNode(t);
    l1 = l1->next;
    l2 = l2->next;
    ListNode *temp = result;
    while (l1 || l2 || c) {
        a = l1 ? l1->val : 0;
        b = l2 ? l2->val : 0;
        t = a + b + c;
        c = t > 9 ? 1 : 0;
        t = t % 10;
        temp->next = new ListNode(t);
        temp = temp->next;

        if (!l1 && l2 && c == 0) {
            temp->next = l2->next;
            break;
        }
        if (!l2 && l1 && c == 0) {
            temp->next = l1->next;
            break;
        }

        if (l1) l1 = l1->next;
        if (l2) l2 = l2->next;
    }
    return result;
}

ListNode *createListNode(vector<int> v) {
    vector<int>::iterator i = v.begin();
    ListNode *result = new ListNode(*i);
    ListNode *temp = result;
    i++;
    for (; i < v.end(); i++) {
        temp->next = new ListNode(*i);
        temp = temp->next;
    }
    temp->next = NULL;
    return result;
}

int lengthOfLongestSubstring(string s) {
    int max = 0;
    for (int i = 0; i < s.length(); ++i) {
        set<char> cset;
        cset.insert(s[i]);
        for (int j = i + 1; j < s.length(); ++j) {
            if (cset.find(s[j]) == cset.end()) {
                cset.insert(s[j]);
            } else {
                break;
            }
        }
        if (cset.size() > max) {
            max = cset.size();
        }
        cset.clear();
        if (max < 1) max = 1;
        if (max > s.length() - i)
            break;
    }
    return max;
}

double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2) {
    long m1 = nums1.size();
    long m2 = nums2.size();
    long total = m1 + m2;
    long size = total / 2 + 1;

    vector<int> nums;
    int i1 = 0, i2 = 0;
    for (int i = 0; i < size; ++i) {
        if (i1 >= m1) {
            nums.push_back(nums2[i2]);
            i2++;
            continue;
        }

        if (i2 >= m2) {
            nums.push_back(nums1[i1]);
            i1++;
            continue;
        }

        if (nums1[i1] <= nums2[i2]) {
            nums.push_back(nums1[i1]);
            i1++;
        } else {
            nums.push_back(nums2[i2]);
            i2++;
        }
    }

    if (total % 2 == 0) {
        return (float) (nums[size - 2] + nums[size - 1]) / 2;
    } else {
        return nums[size - 1];
    }
}

string longestPalindrome(string s) {
    long max = 0;
    string result;
    string temp;
    for (int i = 0; i < s.length(); ++i) {
        if(i + max/2 >= s.length())
            break;
        if (i + 1 < s.length() && s[i] == s[i + 1]) {
            temp.append(1, s[i]).append(1, s[i + 1]);
            for (size_t j = 1; j <= i && i + 1 + j <= s.length(); ++j) {
                if (s[i - j] == s[i + 1 + j]) {
                    temp.insert(0, 1, s[i - j]);
                    temp.append(1, s[i + 1 + j]);
                } else {
                    break;
                }
            }
            max = max > temp.length() ? max : temp.length();
            result = max > temp.length() ? result : temp;
            temp.clear();
        }

        if (i + 1 < s.length() && s[i-1] == s[i + 1]) {
            temp.append(1, s[i-1]).append(1, s[i]).append(1, s[i + 1]);
            for (size_t j = 2; j <= i && i + j <= s.length(); ++j) {
                if (s[i - j] == s[i + j]) {
                    temp.insert(0, 1, s[i - j]);
                    temp.append(1, s[i + j]);
                } else {
                    break;
                }
            }
            max = max > temp.length() ? max : temp.length();
            result = max > temp.length() ? result : temp;
            temp.clear();
        }
    }
    if(max <= 1) {
        result.clear();
        result.append(1, s[s.length()-1]);
    }
    return result;
}


string longestPalindrome1(string s) {
    long max = 0;
    string result;
    string temp;
    size_t midPosition = s.length()/2;
    for (size_t k = 0, i; k <= midPosition; ++k) {
        if(midPosition + k + max/2 > s.length() || midPosition - k - max/2 < 0)
            break;
        i = midPosition + k;
        if (s[i] == s[i + 1]) {
            temp.append(1, s[i]).append(1, s[i + 1]);
            for (size_t j = 1; j <= i && i + 1 + j <= s.length(); ++j) {
                if (s[i - j] == s[i + 1 + j]) {
                    temp.insert(0, 1, s[i - j]);
                    temp.append(1, s[i + 1 + j]);
                } else {
                    break;
                }
            }
            max = max > temp.length() ? max : temp.length();
            result = max > temp.length() ? result : temp;
            temp.clear();
        }

        if (i + 1 < s.length() && s[i-1] == s[i + 1]) {
            temp.append(1, s[i-1]).append(1, s[i]).append(1, s[i + 1]);
            for (size_t j = 2; j <= i && i + j <= s.length(); ++j) {
                if (s[i - j] == s[i + j]) {
                    temp.insert(0, 1, s[i - j]);
                    temp.append(1, s[i + j]);
                } else {
                    break;
                }
            }
            max = max > temp.length() ? max : temp.length();
            result = max > temp.length() ? result : temp;
            temp.clear();
        }
        i = midPosition - k;
        if (s[i] == s[i + 1]) {
            temp.append(1, s[i]).append(1, s[i + 1]);
            for (size_t j = 1; j <= i && i + 1 + j <= s.length(); ++j) {
                if (s[i - j] == s[i + 1 + j]) {
                    temp.insert(0, 1, s[i - j]);
                    temp.append(1, s[i + 1 + j]);
                } else {
                    break;
                }
            }
            max = max > temp.length() ? max : temp.length();
            result = max > temp.length() ? result : temp;
            temp.clear();
        }

        if (i + 1 < s.length() && s[i-1] == s[i + 1]) {
            temp.append(1, s[i-1]).append(1, s[i]).append(1, s[i + 1]);
            for (size_t j = 2; j <= i && i + j <= s.length(); ++j) {
                if (s[i - j] == s[i + j]) {
                    temp.insert(0, 1, s[i - j]);
                    temp.append(1, s[i + j]);
                } else {
                    break;
                }
            }
            max = max > temp.length() ? max : temp.length();
            result = max > temp.length() ? result : temp;
            temp.clear();
        }
    }
    if(max <= 1) {
        result.clear();
        result.append(1, s[s.length()-1]);
    }
    return result;
}

int palindromeByStartIndex(string s, size_t i);

string longestPalindrome2(string s) {
    string result;
    size_t centerIndex = 0;
    size_t max = 0;
    int t;
    size_t midPosition = s.length()/2;
    for (size_t k = 0, i; k <= midPosition; ++k) {
        if(midPosition + k + max/2 > s.length() || midPosition - k - max/2 < 0)
            break;

        i = midPosition - k;
        t = palindromeByStartIndex(s, i);
        if(t!= 0) {
            centerIndex = max > t ? centerIndex : (max == t && centerIndex > i? centerIndex : i);
            max = max > t ? max : t;
        }
        i = midPosition + k;
        t = palindromeByStartIndex(s, i);
        if (t != 0) {
            centerIndex = max > t ? centerIndex : (max == t && centerIndex > i? centerIndex : i);
            max = max > t ? max : t;
        }

    }
    if(max <= 1) {
        result.append(1, s[s.length()-1]);
    } else if(max%2==0)
    {
        result = s.substr(centerIndex - max / 2 + 1  , max);
    } else
    {
        result = s.substr(centerIndex - max / 2  , max);
    }

    return result;
}

int palindromeByStartIndex(string s, size_t i)
{
    int t1 = 0, t2 = 0;
    if (i + 1 < s.length() && s[i] == s[i + 1]) {
        t1 = 2;
        for (size_t j = 1; j <= i && i + 1 + j <= s.length(); ++j) {
            if (s[i - j] == s[i + 1 + j]) {
               t1 += 2;
            } else {
                break;
            }
        }
    }

    if (i + 1 < s.length() && s[i-1] == s[i + 1]) {
        t2 = 3;
        for (size_t j = 2; j <= i && i + j <= s.length(); ++j) {
            if (s[i - j] == s[i + j]) {
               t2 += 2;
            } else {
                break;
            }
        }
    }

    return  t1 > t2 ? t1 : t2;
}

string convert(string s, int numRows) {
}

int main() {
//    vector<int > nums = vector<int> {2, 7, 11, 15};
//    vector<int> result = twoSum(nums,18);
//
//    cout << "index1=" << result[0] << "index2=" << result[1] << endl;

//    vector<vector<int>> grid = {
//            {0, 0, 0},
//            {0, 1, 0},
//            {0, 0, 0}};
//    cout << "result=" << uniquePathsWithObstacles(grid) << endl;

//    ListNode * l1 = createListNode(vector<int>{2,4,3});
//    ListNode * l2 = createListNode(vector<int>{5,6,4});
//    ListNode * result = addTwoNumbers1(l1,l2);
//
//    while(result)
//    {
//        cout << "result=" << result->val << endl;
//        result = result->next;
//    }
//
//    delete l1;
//    delete l2;
//    delete result;

//    string test = "au";
//    cout << "count=" << lengthOfLongestSubstring(test) << endl;

//    vector<int> v1 = {1, 2};
//    vector<int> v2 = {3, 4};
//    cout << findMedianSortedArrays(v1, v2) << endl;

    cout << "result=" << longestPalindrome2("bb") << endl;
    cout << "result=" << longestPalindrome2("babad") << endl;
    cout << "result=" << longestPalindrome2("aaaa") << endl;
}