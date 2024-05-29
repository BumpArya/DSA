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

// check BST

int isBST(struct node *root)
{
    static struct node *prev = NULL;
    if (root != NULL)
    {
        if (!isBST(root->left))
        {
            return 0;
        }
        if (prev != NULL && root->data <= prev->data)
        {
            return 0;
        }
        prev = root;
        return isBST(root->right);
    }
    else
    {
        return 1;
    }
}

// Searching

struct node *search_recur(struct node *root, int key)
{
    if (root == NULL)
    {
        printf("Key not found\n");
        return NULL;
    }
    if (root->data == key)
    {
        return root;
    }
    else if (root->data > key)
    {
        return search_recur(root->left, key);
    }
    else if (root->data < key)
    {
        return search_recur(root->right, key);
    }
}

struct node *search_iter(struct node *root, int key)
{
    while (root != NULL)
    {
        if (root->data == key)
        {
            return root;
        }
        else if (root->data > key)
        {
            root = root->left;
        }
        else if (root->data < key)
        {
            root = root->right;
        }
    }
    printf("Key not found\n");
    return NULL;
}

// Insertion

void insert(struct node *root, int key)
{
    struct node *prev;
    while (root != NULL)
    {
        prev = root;
        // printf("prev: %d\n", prev->data);
        if (root->data > key)
        {
            root = root->left;
        }
        else if (root->data < key)
        {
            root = root->right;
        }
        else if (root->data == key)
        {
            printf("Duplicate key\n");
            return;
        }
        // printf("root: %d\n", root == NULL ? -1 : root->data);
        // printf("\n");
    }
    struct node *new = create(key);
    if (key < prev->data)
    {
        prev->left = new;
    }
    else if (key > prev->data)
    {
        prev->right = new;
    }
}

// Deletion in BST

struct node *delete(struct node *root, int key)
{
    if (root == NULL)
    {
        return NULL;
    }
    if (key < root->data)
    {
        root->left = delete (root->left, key);
        return root;
    }
    else if (key > root->data)
    {
        root->right = delete (root->right, key);
        return root;
    }

    if (root->left == NULL)
    {
        struct node *temp = root->right;
        free(root);
        return temp;
    }
    else if (root->right == NULL)
    {
        struct node *temp = root->left;
        free(root);
        return temp;
    }

    struct node *i_pos = root->right;
    struct node *i_pos_par = root;

    int i_pos_par_is_root = 1;
    while (i_pos->left != NULL)
    {
        i_pos_par = i_pos;
        i_pos = i_pos->left;
        i_pos_par_is_root = 0;
    }

    root->data = i_pos->data;

    if (i_pos_par_is_root)
    {
        i_pos_par->right = i_pos->right;
    }
    else
    {
        i_pos_par->left = i_pos->right;
    }
    free(i_pos);
    return root;
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

    if (isBST(root))
    {
        printf("It is a BST\n");
    }
    else
    {
        printf("It is not a BST\n");
    }

    int key = 10;
    struct node *ptr = search_recur(root, key);
    ptr = search_iter(root, key);
    printf("Searching for key %d, p%d\n", key, ptr == NULL ? -1 : ptr->data);

    insert(root, 2);
    insert(root, 11);
    insert(root, 17);
    insert(root, 5);

    delete (root, 3);

    return 0;
}
