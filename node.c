#include <stdio.h>
#include <stdlib.h>

struct node 
{
  int data;
  struct node* left;
  struct node* right;
};

struct node* make_node(int data)
{
  struct node* n;
  n->data = data;
  n->left = NULL;
  n->right = NULL;

  return n;
}

int main()
{
  struct node* n;

  // Gotta add the address operator when declaring structs with compoint literals
  n = &(struct node){.data = 1, .left = NULL, .right = NULL};
  printf("%d\n", n->data);

  return 0;
}
