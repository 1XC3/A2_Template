#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node {
    char *name;
    char *tea;
    struct node *left;
    struct node *right;
};

typedef struct node Node;

int depth(struct node *root);
int dfs(struct node *root, char *tok);

