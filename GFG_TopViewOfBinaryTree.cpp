/*
struct Node
{
    int data;
    Node* left;
    Node* right;
};
*/
class Solution
{
    public:
    //Function to return a list of nodes visible from the top view 
    //from left to right in Binary Tree.
    vector<int> topView(Node *root)
    {
        //Your code here
        vector<int> result;
        map<int, int> mp;
        queue< pair<Node*, int> > q;
        q.push({root, 0});
        
        while( !q.empty() ) {
            auto top = q.front();
            q.pop();
            Node* node = top.first;
            int level = top.second;
            
            if(mp.find(level) == mp.end() )
                mp[level] = node->data;
            
            if(node->left)
                q.push({node->left, level - 1});
            
            if(node->right)
                q.push({node->right, level + 1});
            
        }
        
        for(auto &i : mp)
            result.emplace_back(i.second);
        
        return result;
    }

};
