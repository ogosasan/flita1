#include "actions_with_sets.h"

int uniqueItem(Node *set, char *item) {
    bool work = true;
    for (Node *head = set; head != NULL; head = head->next) {
        if (strcmp(item, head->item) == 0) {
            work = false;
            printf("Item is already in array!\n");
            break;
        }
    }
    return work;
}


void push(Node **head) {
    char *element[MAX_LENGTH];
    scanf("%s", &element);
    while (strcmp(element, "end")){
        if(uniqueItem(*head, element)) {
            int size = strlen(element);
            Node *set = malloc(sizeof(Node));
            set->item = malloc(size * sizeof(char));
            strcpy(set->item, element);
            set->next = *head;
            *head = set;
        }
        scanf("%s", &element);
    }
}



char *pop(Node **head) {
    Node *set = *head;
    if(set == NULL){
        puts("No such elements");
        return NULL;
    }
    char *result = set->item;
    *head = set->next;
    free(set);
    return result;
}

void print(Node *set) {
    while (set) {
        printf("%s ", set->item);
        set = set->next;
    }
    putchar('\n');
}
