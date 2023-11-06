#include<Stdio.h>
#include<stdlib.h>

struct node{
  int data;
  struct node*left;
  struct node*right;
};

struct node*createnode(int data){
    struct node*newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=data;
    newnode->left=NULL;
    newnode->right=NULL;
    return newnode;
}

void preorder(struct node*root){
    if(root!=NULL)
    {
        printf("%d ",root->data);
        preorder(root->left);
        preorder(root->right);
    }
    }

    void inorder(struct node*root){
        if(root!=NULL)
        {
            inorder(root->left);
            printf("%d",root->data);
            inorder(root->right);
        }
    }

    void postorder(struct node*root){
        if(root!=NULL)
        {
            postorder(root->left);
            postorder(root->right);
            printf("%d",root->data);
        }
    }


int main(){
    
    struct node*p=createnode(1);
    struct node*p1=createnode(2);
    struct node*p2=createnode(3);
    struct node*p3=createnode(4);
    struct node*p4=createnode(5);
    struct node*p5=createnode(6);
    struct node*p6=createnode(8);

    p->left=p1;
    p->right=p2;
    p1->left=p3;
    p1->right=p4;
    p4->left=p5;
    p2->right=p6;

    //preorder(p);
   // inorder(p);
    postorder(p);

    return 0;

}
