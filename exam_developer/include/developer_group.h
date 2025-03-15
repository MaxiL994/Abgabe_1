#ifndef DEVELOPER_GROUP_H_asdfa234
#define DEVELOPER_GROUP_H_asdfa234

#include "developer.h"
#include <stddef.h>

/*Array with ASCII art in lines*/
#define GROUP_LOGO
/* Ascii art pending

XXXXXXXXXXX

*/

/* Max number of developers in the group */
#define MAX_DEVELOPERS 2  

/* Structure representing a developer group */
typedef struct {
    developer_t developers[MAX_DEVELOPERS]; /* Array of developers */
    size_t num_developers;                  /* Number of developers in the group */
    const char *logo;
    const char *group_name;
} developer_group_t;