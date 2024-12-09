#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node *left;
struct node *right;
};
struct node* createNode()
{
struct node *root;
int choice;
printf("\n Choose 1 to CREATE Node or Choose 0 to CANCEL ");
printf("\n Choice : ");
scanf("%d",&choice);
if(choice==0)
return NULL;
else{
root=malloc(sizeof(struct node));
printf("\n Enter Value of Node : ");
scanf("%d",&root->data);
printf("\n Create LEFT CHILD Node of %d ",root->data);
root->left=createNode();
printf("\n Create RIGHT CHILD Node of %d ",root->data);
root->right=createNode();
return root;
}
}
void inOrderDisplay(struct node *root){
if(root!=NULL){
inOrderDisplay(root->left);
printf(" %d ",root->data);
inOrderDisplay(root->right);
}
}
void preOrderDisplay(struct node *root){
if(root!=NULL){
printf(" %d ",root->data);
preOrderDisplay(root->left);
preOrderDisplay(root->right);
}
}
void postOrderDisplay(struct node *root){
if(root!=NULL){
postOrderDisplay(root->left);
postOrderDisplay(root->right);
printf(" %d ",root->data);
}
}
int main(){
struct node *root;
root=createNode();
if(root==NULL)
printf("Tree is Empty");
else{
printf("\n Inorder Travesal :");
inOrderDisplay(root);
printf("\n Preorder Travesal :");
preOrderDisplay(root);
printf("\n Postorder Travesal :");
postOrderDisplay(root);
}
}