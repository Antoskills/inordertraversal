// #include <stdio.h>
// #include <stdlib.h>

// struct node
// {
//   int data;
//   struct node *left;
//   struct node *right;
// };
// struct node *createnode(int data)
// {
//   struct node *n;
//   n=malloc(sizeof(struct node));
//   n->data=data;
//   n->left=NULL;
//   n->right=NULL;/
// }

// void inorder(struct node *root)
// {
//   if(root!=NULL)
//   {
//     inorder(root->left);
//     printf("%d",root->data);
//     inorder(root->right);
//   }
// }

// // int main()
// // {
// //   struct node *p=createnode(40);
// //   struct node *p1=createnode(16);
// //   struct node *p2=createnode(20);
// //   struct node *p3=createnode(30);
  
// //   p->left=p1;
// //   p->right=p2;
// //   p1->left=p3;
// //   inorder(p);
// //   return 0;

// //clear testand try

