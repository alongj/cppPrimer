//
// Created by 邵军 on 2019/3/20.
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

int currentVal = 0;
int currentCount = 0;
int maxCount = 0;

vector<int> result;

void inorder(TreeNode *root) {
    if (!root)
        return;
    inorder(root->left);
    if (currentVal == root->val) {
        currentCount++;
    } else {
        currentVal = root->val;
        currentCount = 1;
    }
    if (currentCount > maxCount) {
        maxCount = currentCount;
        result.clear();
        result.push_back(currentVal);
    } else if (currentCount == maxCount) {
        result.push_back(currentVal);
    }
    inorder(root->right);
}

vector<int> findMode(TreeNode *root) {
    inorder(root);
    return result;
}

void beforeOrder(TreeNode *root) {
    if (!root)
        return;
    cout << root->val;
    beforeOrder(root->left);
    beforeOrder(root->right);
}

void midOrder(TreeNode *root) {
    if (!root)
        return;
    beforeOrder(root->left);
    cout << root->val;
    beforeOrder(root->right);
}

void endOrder(TreeNode *root) {
    if (!root)
        return;
    endOrder(root->left);
    endOrder(root->right);
    cout << root->val;
}


//int main(int argc, char **argv) {
//    TreeNode *root = new TreeNode(1);
////    TreeNode *l1 = new TreeNode(0);
////    root->left = l1;
//    TreeNode *r1 = new TreeNode(2);
//    root->right = r1;
////    TreeNode *r1_l = new TreeNode(2);
////    r1->left = r1_l;
//
//    vector<int> vec = findMode(root);
//
//    for (vector<int>::iterator iter = vec.begin(); iter != vec.end(); ++iter) {
//        cout << *iter << ",";
//    }
//
////    delete (r1_l);
////    delete (r1);
//    delete (root);
//
//    return 0;
//}

class base {
private:
    int m_i;
    int m_j;
public:
    base(int i) : m_j(i), m_i(m_j) {}

    base() : m_j(0), m_i(m_j) {}

    int get_i() { return m_i; }

    int get_j() { return m_j; }
};

int main(int argc, char** argv) {
//    base* obj = new base(98);
//    base* obj = static_cast<base *>(malloc(sizeof(base)));
//    memset(obj,0, sizeof(base));
//    base* obj = static_cast<base *>(calloc(1, sizeof(base)));
    base* obj = static_cast<base *>(alloca(sizeof(base)));
//    memset(obj,0, sizeof(base));

    cout << obj->get_i()
    << "," << obj->get_j() << endl;
}

//class child : public base {
//public:
//    child(int i) : base(i){}
//    child():base(){ }
//    int get_i(){ return 2;};
//};


//#include <cstddef>
//#include <iostream>
//
//void f(int *pi) {
//    std::cout << "Pointer to integer overload\n";
//}
//
//void f(double *pd) {
//    std::cout << "Pointer to double overload\n";
//}
//
//void f(std::nullptr_t nullp) {
//    std::cout << "null pointer overload\n";
//}
//
//int main() {
//    int *pi;
//    double *pd;
//    f(pi);
//    f(pd);
//    f(nullptr);// would be ambiguous without void f(nullptr_t)// f(NULL); // ambiguous overload: all three functions are candidates
//}