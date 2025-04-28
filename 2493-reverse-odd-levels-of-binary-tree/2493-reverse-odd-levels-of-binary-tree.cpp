#include <queue>
#include <vector>
using namespace std;

class Solution {
public:
    TreeNode* reverseOddLevels(TreeNode* root) {
        if (!root) return root;

        queue<TreeNode*> q;
        q.push(root);
        int levelNo = 0;

        while (!q.empty()) {
            int len = q.size();
            vector<TreeNode*> temp; 

            for (int i = 0; i < len; i++) {
                TreeNode* node = q.front();
                q.pop();
                temp.push_back(node);

                if (node->left) q.push(node->left);
                if (node->right) q.push(node->right);
            }

            if (levelNo % 2 == 1) {
                int n = temp.size();
                for (int i = 0; i < n / 2; i++) {
                    swap(temp[i]->val, temp[n - 1 - i]->val);
                }
            }

            levelNo++; 
        }
        return root;
    }
};
