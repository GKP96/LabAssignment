#include<bits/stdc++.h>
using namespace std;
struct Node{
int data;
Node *left;
Node *right;
Node(int d){
    data = d;
    left = NULL;
    right = NULL;
}
};
Node *insertBST(Node *root,int val){
	// root ka value null to nahi hai.
    if(root==NULL){
        root = new Node(val);
        return root ;
    }
    if(root->data>val){
        root->left = insertBST(root->left,val);
    }
    // root->data se jayda hai
    else{
        root->right = insertBST(root->right,val);

    }
    return root;
}
void inorder(Node *root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
void preOrder(Node *root){
	if(root==NULL){
		return;
	}
	cout<<root->data<<" ";
	preOrder(root->left);
	preOrder(root->right);
}
void postorder(Node *root){
	if(root==NULL){
		return;
	}
	postorder(root->left);
	postorder(root->right);
	cout<<root->data<<" ";
}
Node * searchInBST(Node *root,int key){
	if(root==NULL){
		return NULL;
	}
	if(root->data==key){
		return root;
	}
	if(root->data >key){
 	return searchInBST(root->left,key);
	}
	else{
	return	searchInBST(root->right ,key);
	}
	
}
Node* inorderSucc(Node *root){
	Node *curr = root;
	while(curr&&curr->left!=NULL){
		curr = curr->left;
	}
	return curr;
}
Node *deleteInBST(Node *root,int key){
	// Find where key is present.
	if(root==NULL){
		return root;
	}
	if(root->data >key){
		// left me jao.
		root->left = deleteInBST(root->left,key);
	}
	else if(key>root->data){
		// right me jao.
		root->right = deleteInBST(root->right,key);
	}
	// delete karo.
	else{
		// o child
		if(root->right==NULL&& root->left==NULL){
			delete root;
			return NULL;
		}
		// 1 child.
		if(root->left !=NULL && root->right ==NULL){
			Node *temp = root->left;
			delete root;
			return temp;
		}
		if(root->left==NULL&&root->right!=NULL){
			Node *temp = root->right;
			delete root;
			return temp;
		}
		// 2 child.
		if(root->left!=NULL&&root->right!=NULL){
			// yahi nikal bhi layega min value ko.
			int min = inorderSucc(root->right)->data;
			root->data = min;
			deleteInBST(root->right,min);
			return root;
		}
	}
}
 level order traversal.
void levelorder(Node *root){
	if(root==NULL){
		return;
	}
	queue<Node *> q ;
	q.push(root);
	while(!q.empty()){
		int len = q.size();
		for(int i = 0;i<len;i++){
			Node *curr = q.pop();
			cout<<curr->data+" ";
			if(curr->left!=NULL){
				q.push(curr->left);			}
			if(curr->right!=NULL){
				q.push(curr->right);
			}
		}
		cout<<endl;
	}
}

int main()
{
Node *root = NULL;
// 5,1 , 3 , 4 , 2, 7.
// An array given to us.
int arr[] = {5,1,3,4,2,7};
for(int i = 0;i<6;i++){
	root = insertBST(root,arr[i]);
}
// It shows inorder traversal of BST gives sorted data.
inorder(root);
cout<<"\n";
preOrder(root);
cout<<"\n";
postorder(root);
cout<<"\n";
deleteInBST(root,4);
inorder(root);


return 0;
}
