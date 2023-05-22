#include "actions_with_sets.h"

int main() {
    Node *firstArr = NULL;
    Node *secondArr = NULL;
    Node *arrs[2] = {NULL, NULL};
    puts("Fill symbols in first array\nEnter 'end' to stop filling.");
    push(&firstArr);
    arrs[0] = firstArr;
    puts("Fill symbols in second array\nEnter 'end' to stop filling.");
    push(&secondArr);
    arrs[1] = secondArr;
    int operation, arrayNumber;
    bool work = true;
    while (work == true) {
        puts("Choose:\n1. Add items\n2. Delete last item\n3. Show the array\n0. Exit");
        if(scanf("%d", &operation) == 1){
        }
        else{
            puts("Error input!");
            fflush(stdin);
            continue;
        }

        if (operation != 0) {
            puts("1 or 2 array?");
            scanf("%d", &arrayNumber);
        }
        if (arrayNumber == 1 || arrayNumber == 2){
        }
        else{
            puts("Error input. You must choose 1 or 2");
            continue;
        }

        switch (operation) {
            case 1:
                puts("Enter 'end' to stop filling");
                push(&arrs[arrayNumber - 1]);
                break;
            case 2:
                pop(&arrs[arrayNumber - 1]);
                break;
            case 3:
                print(arrs[arrayNumber - 1]);
                break;
            case 0:
                work = false;
                break;
            default:
                printf("Wrong operation. Theres no such an option as %d\n", operation);
                break;
        }
    }
    return 0;
}