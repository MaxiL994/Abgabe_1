#include "../include/developer_group.h"
#include <stdio.h>
#include <string.h>



/* Initialize a developer group with developers and a logo */
developer_group_t developer_group_init(const developer_t *developers, size_t num_devs, const char *logo) {
    developer_group_t group = { .num_developers = 0, .logo = logo };
    
    if (developers == NULL || num_devs > MAX_DEVELOPERS || logo == NULL) {
        printf("Error: Invalid initialization data\n");
        return group;
    }
    
    for (size_t i = 0; i < num_devs; i++) {
        group.developers[i] = developers[i];
    }
    group.num_developers = num_devs;
    return group;
}
