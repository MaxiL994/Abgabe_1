#include "../include/developer_group.h"
#include <stdio.h>
#include <stdlib.h>


int main(void) {
    /* Initialize developers */
    developer_t devs[2] = {
        developer_init("Maximilian Liebl", "Maxi"),
        developer_init("Marc Begic", "Embi")
    };

    /* Initialize developer group */
    developer_group_t group = developer_group_init(devs, 2, GROUP_LOGO);

    /* 
    Print menu options for user to choose from.
    */
    int choice;
    do {

        printf("==============================\n");  
        printf("\n");
        printf("List Developers     [1]\n");
        printf("Print Group Logo    [2]\n");
        printf("Print Group         [3]\n");
        printf("Exit                [4]\n");
        printf("\n");
        printf("==============================\n");
        printf("\n");
        printf("Enter your choice: ");
        #

        /*
        Check if input is an integer between 1 and 4, else display error message
        */
        if (scanf("%d", &choice) != 1) {
            printf("Error: Invalid input\n");
            while (getchar() != '\n'); /* Clear input buffer */
            continue;
        }

/*
Switch case for menu options. 
1. List Developers
2. Print Group Logo
3. Print Group
4. Exit
Runs until user presses 4 to exit.
*/

        switch (choice) {
            case 1:
                developer_group_list_developers(&group);
                break;
            case 2:
                developer_group_print_logo(&group);
                break;
            case 3:
                developer_group_print(&group);
                break;
            case 4:
                printf("Exiting...\n");
                break;
            default:
                printf("Error: Invalid choice\n");
        }
    } while (choice != 4);


    return 0;
}