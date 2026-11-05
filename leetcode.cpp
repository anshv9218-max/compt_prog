// #include <bits/stdc++.h>
// using namespace std;
// struct TreeNode {
//     int val;
//     TreeNode* left;
//     TreeNode* right;

//     TreeNode() : val(0), left(nullptr), right(nullptr) {}

//     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}

//     TreeNode(int x, TreeNode* left, TreeNode* right)
//         : val(x), left(left), right(right) {}
// };



int main() {

    /*
                1
              /   \
             2     3
            / \   / \
           4   5 6   7
          / \
         8   9
    */

    TreeNode* root = new TreeNode(1);

    root->left = new TreeNode(2);
    root->right = new TreeNode(3);

    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);

    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(7);

    root->left->left->left = new TreeNode(8);
    root->left->left->right = new TreeNode(9);

    Solution obj;

    vector<int> result = obj.preorderTraversal(root);

    for (int x : result) {
        cout << x << " ";
    }

    return 0;
}