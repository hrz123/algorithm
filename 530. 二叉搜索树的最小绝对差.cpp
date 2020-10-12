//
// Created by Ruizhe Hou on 2020/10/12.
//
#include <stack>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    int getMinimumDifference(TreeNode *root) {
        int res = INT_MAX, pre = -1e9;
        stack<TreeNode *> st;
        while (!st.empty() || root) {
            while (root) {
                st.push(root);
                root = root->left;
            }
            root = st.top();
            st.pop();
            res = min(root->val - pre, res);
            pre = root->val;
            root = root->right;
        }
        return res;
    }
};