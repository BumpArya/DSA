#include <stdio.h>
#include <stdlib.h>

int max(int a, int b) { return a > b ? a : b; }

struct node
{
    int data;
    struct node *right;
    struct node *left;
    int height;
};

struct node *create(int d)
{
    struct node *n = (struct node *)malloc(sizeof(struct node));
    n->data = d;
    n->right = NULL;
    n->left = NULL;
    n->height = 1;

    return n;
}

int height(struct node *n)
{
    if (n == NULL)
        return 0;
    return n->height;
}

int BF(struct node *n)
{
    if (n == NULL)
        return 0;
    return height(n->left) - height(n->right);
}

struct node *LRotate(struct node *x)
{
    struct node *y = x->right;
    struct node *T2 = y->left;

    y->left = x;
    x->right = T2;

    x->height = max(height(x->right), height(x->left) + 1);
    y->height = max(height(y->right), height(y->left) + 1);

    return y;
}

struct node *RRotate(struct node *y)
{
    struct node *x = y->left;
    struct node *T2 = x->right;

    x->right = y;
    y->left = T2;

    x->height = max(height(x->right), height(x->left) + 1);
    y->height = max(height(y->right), height(y->left) + 1);

    return x;
}

struct node *insert(struct node *n, int key)
{
    if (n == NULL)
    {
        return create(key);
    }

    if (key < n->data)
    {
        n->left = insert(n->left, key);
    }
    else if (key > n->data)
    {
        n->right = insert(n->right, key);
    }

    n->height = 1 + max(height(n->left), height(n->right));
    int bf = BF(n);

    if (bf > 1 && key < n->left->data)
    {
        return RRotate(n);
    }
    if (bf < -1 && key > n->right->data)
    {
        return LRotate(n);
    }
    if (bf > 1 && key > n->left->data)
    {
        n->left = LRotate(n->left);
        return RRotate(n);
    }
    if (bf < -1 && key < n->right->data)
    {
        n->right = RRotate(n->left);
        return LRotate(n);
    }

    return n;
}

int main()
{
    struct node *root = create(15);
    struct node *p10 = create(10);
    struct node *p20 = create(20);
    struct node *p4 = create(4);
    struct node *p12 = create(12);
    struct node *p17 = create(17);
    struct node *p23 = create(23);
    struct node *p11 = create(11);
    struct node *p13 = create(13);

    root->left = p10;
    root->right = p20;
    p10->left = p4;
    p10->right = p12;
    p20->left = p17;
    p20->right = p23;
    p12->left = p11;
    p12->right = p13;

    root = insert(root, 8);
    root = insert(root, 9);

    return 0;
}
