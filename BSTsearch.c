BST search
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
struct TreeNode* searchBST(struct TreeNode* root, int val) {
    
    if(root!=NULL){
        int data=root->val;
        if(val==data){
            return root;
        }
        else if(val<data){
            return searchBST(root->left,val);
        }
        else 
            return searchBST(root->right,val);
    }
    else{
        return NULL;
    }       
}

