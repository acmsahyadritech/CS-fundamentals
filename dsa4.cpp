#include <bits/stdc++.h>

using namespace std;

class node{
    public:
          int data;
          node* left;
          node* right;
          
          node(int d){
              data=d;
              left=NULL;
              right=NULL;
          }
};

node* buildBST(node* root,int data){
    if(root==NULL){
        return new node(data);
    }
    else if(data<root->data){
        root->left = buildBST(root->left,data);
    }
    else{
        root->right = buildBST(root->right,data);
    }
    return root;
}

void printLevelOrderNormal(node* root){
    queue<node*>q;
    q.push(root);
    
    
    while(!q.empty()){
        node* temp = q.front();
        cout<<temp->data<<" ";
        q.pop();
        
        if(temp->left){
            q.push(temp->left);
        }
        if(temp->right){
            q.push(temp->right);
        }
        
    }
    #include <bits/stdc++.h>

using namespace std;

struct Item{
    int value;
    int weight;
};

//Comparator funtion to return the descending fractional numbers

bool comp(Item item1,Item item2){
    double r1 = (double)item1.value/(double)item1.weight;
    double r2 =(double)item2.value/(double)item2.weight;
    return r1>r2;
}
}
