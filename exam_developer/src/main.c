#include "developer_group.h"
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
        
        if (scanf("%d", &choice) != 1) {
            printf("Error: Invalid input\n");
            while (getchar() != '\n'); /* Clear input buffer */
            continue;
        }
