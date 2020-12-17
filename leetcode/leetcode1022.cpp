//
// Created by 邵军 on 2019/5/14.
//
#include <iostream>
#include <queue>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

int sumNode(TreeNode* node, int v)
{
    if(node == NULL)
        return 0;

    int current = (v<<1) + node->val;
    if(node->left == NULL && node ->right == NULL)
        return current;
    return sumNode(node->left, current) + sumNode(node->right, current);
}

int sumRootToLeaf(TreeNode *root) {
    if(root == NULL)
        return 0;

    return sumNode(root, 0);

}

TreeNode* createTree(){
    int a[] = {1,0,1,0,1,0,1};

    TreeNode* tree[7];
    TreeNode* root = new TreeNode(a[0]);
    tree[0] = root;
    int m;
    for (int i = 0; i < 7; ++i) {
        m = i+1;
        if(2*m-1 < 7)
        {
            tree[i]->left = new TreeNode(a[2*m-1]);
            tree[2*m-1] = tree[i]->left;
        }
        if(2*m < 7)
        {
            tree[i]->right = new TreeNode(a[2*m]);
            tree[2*m] = tree[i]->right;;
        }

        if(2*m > 7 || 2*m+1>7)
        {
            break;
        }
    }
    return root;

}

int main()
{
    TreeNode* root = createTree();
    int count = sumRootToLeaf(root);
    cout << "count=" << count << endl;
}

