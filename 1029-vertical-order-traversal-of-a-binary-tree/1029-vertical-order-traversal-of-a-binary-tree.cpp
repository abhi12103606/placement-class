class Solution {
public:


void helper(TreeNode *root, int v, int h, map<int, map<int, vector<int>>> &mp)
{
    if (!root)
        return;

    mp[v][h].push_back(root->val);
    helper(root->left, v - 1, h + 1, mp);
    helper(root->right, v + 1, h + 1, mp);
}

vector<vector<int>> verticalTraversal(TreeNode *root)
{
    map<int, map<int, vector<int>>> mp;
    helper(root, 0, 0, mp);
    vector<vector<int>> ans;
    for (auto i : mp)
    {
        vector<int> temp;
        for (auto j : i.second)
        {
            sort(j.second.begin(), j.second.end());
            for (auto x : j.second)
                temp.push_back(x);
        }
        ans.push_back(temp);
    }
    return ans;
}
};