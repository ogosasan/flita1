#ifndef FLITA1_ACTIONS_WITH_SETS_H
#define FLITA1_ACTIONS_WITH_SETS_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <inttypes.h>
#define MAX_LENGTH 256

typedef struct Node {
    char *item;
    struct Node *next;
} Node;
int uniqueItem(Node *set, char *item);
void push(Node **head);
char *pop(Node **head);
void print(Node *set);

#endif
