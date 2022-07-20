 void sum(TreeNode* root ,int curr,int &total)
    {
        if(root==NULL)
            return;
        curr=curr*2+root->val;
        if(root->left==NULL && root->right==NULL)
        {
            total=total+curr;
            return;
        }
        sum(root->left,curr,total);
        sum(root->right,curr,total);
        
    }
    int sumRootToLeaf(TreeNode* root) {
        int curr=0;
        int total=0;
        sum(root,curr,total);
        return total;
    }