//
// Created by Ruizhe Hou on 2020/10/13.
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
    int kthLargest(TreeNode *root, int k) {
        stack<TreeNode *> st;
        int res = 0;
        while (!st.empty() || root != nullptr) {
            while (root != nullptr) {
                st.push(root);
                root = root->right;
            }
            root = st.top();
            k--;
            if (!k) {
                res = root->val;
                break;
            }
            st.pop();
            root = root->left;
        }
        return res;
    }
};