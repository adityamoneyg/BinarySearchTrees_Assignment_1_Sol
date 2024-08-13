// void maxAndmin(TreeNode* root) {
//     int mn = root->val, mx = root->val;
//     TreeNode* temp = root;
//     while(temp->left) {
//         temp = temp->left;
//         mn = temp->val;
//     }
//     while(root->right) {
//         root = root->right;
//         mx = root->val;
//     }
//     cout << mn << " " << mx << "\n";
// }

//       2 Solution => https://leetcode.com/problems/kth-smallest-element-in-a-bst/submissions/1354201611/

//       3 Solution => https://leetcode.com/problems/balance-a-binary-search-tree/submissions/1354202769/

//       4 Solution => https://leetcode.com/problems/range-sum-of-bst/submissions/1354208165/



//                                        Assignment :- 2


//                                     1 Solution

// class Solution {
// public:
//     int ans = 0;
//     bool helper(TreeNode* root, int low, int high) {
//         if (root == NULL) return true;
//         bool l = helper(root->left, low, high);
//         bool r = helper(root->right, low, high);
//             if (l && r && low <= root->val && root->val <= high) {
//             ans++; return true;
//             }
//         return false;
//     }
//     int getCount(TreeNode* root, int low, int high) {
//     int count = 0;
//     helper(root, low, high);
//     return count;
//     }
// };

//                                   2 Solution

// class Solution {
// public:
//     int distanceFromRoot(Treenode* root, int x) {
//         if (root->val == x) return 0;
//         else if (root->val > x) return 1 + distanceFromRoot(root->left, x);
//         else return 1 + distanceFromRoot(root->right, x);
//     }
//     int distance(Treenode* root, int a, int b) {
//         if (!root) return 0;
//         if (root->val > a && root->val > b) return distanceBetween2(root->left, a, b);
//         if (root->val < a && root->val < b) return distanceBetween2(root->right, a, b);
//         // found the LCA
//         if (root->val >= a && root->val <= b) return distanceFromRoot(root, a) +
//         distanceFromRoot(root, b);
//     }
// };