#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node *create(int d)
{
    struct node *n = (struct node *)malloc(sizeof(struct node));
    n->data = d;
    n->right = NULL;
    n->left = NULL;

    return n;
}

// Traversal

void pre_order(struct node *root)
{
    if (root != NULL)
    {
        printf("%d ", root->data);
        pre_order(root->left);
        pre_order(root->right);
    }
}

void post_order(struct node *root)
{
    if (root != NULL)
    {
        post_order(root->left);
        post_order(root->right);
        printf("%d ", root->data);
    }
}

void in_order(struct node *root)
{
    if (root != NULL)
    {
        in_order(root->left);
        printf("%d ", root->data);
        in_order(root->right);
    }
}

int main()
{
    struct node *root = create(8);
    struct node *p3 = create(3);
    struct node *p10 = create(10);
    struct node *p1 = create(1);
    struct node *p6 = create(6);
    struct node *p14 = create(14);
    struct node *p4 = create(4);
    struct node *p7 = create(7);
    struct node *p13 = create(13);

    // level 0
    root->left = p3;
    root->right = p10;
    // level 1
    p3->left = p1;
    p3->right = p6;
    p10->right = p14;
    // level 2
    p6->left = p4;
    p6->right = p7;
    p14->left = p13;

    printf("Pre-Order Traversal: ");
    pre_order(root);
    printf("\n");
    printf("Post-Order Traversal: ");
    post_order(root);
    printf("\n");
    printf("In-Order Traversal: ");
    in_order(root);
    printf("\n");

    return 0;
}
