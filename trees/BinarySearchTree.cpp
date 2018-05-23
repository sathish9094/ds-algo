#include <iostream>

using namespace std;


struct BSNode{
  int data;
  BSNode* left;
  BSNode* right;
};

BSNode* generateNode(int data){
  BSNode *newnode = new BSNode();
  newnode->data = data;
  newnode->left = NULL;
  newnode->right = NULL;
  return newnode;
}

BSNode* Insert(BSNode *root,int data){
  if(root == NULL){
    root = generateNode(data);
  }
  else if(data <= root->data){
    root->left =  Insert(root->left,data);
    }
    else{
    root->right =  Insert(root->right,data);
    }

    return root;
}

bool Search(BSNode *root, int data){
  if(root == NULL){
    return false;
  }
  else if(root->data == data){
    return true;
  }
  else if(root->data > data){
    return Search(root->left,data);
  }else{
    return Search(root->right,data);
  }

}

int main(){

  BSNode *root = NULL;
  root = Insert(root,15);
  root = Insert(root,10);
  root = Insert(root,20);

  if(Search(root,20) == true){
    cout<<"Found";
  }

  //cout<<Search(root,20);

  return 0;
}
