/*equal work was done between all three of the group members

Maxx Rodriguez
Nick Simms
Carlos Lopez

*/




#ifndef CSE220_project2_common_h
#define CSE220_project2_common_h
//**********************************************************************
#include <stdio.h>
#include <sys/types.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#include <ctype.h>
//**********************************************************************
#define FORM_FEED_CHAR          '\f'
#define MAX_FILE_NAME_LENGTH    32
#define MAX_SOURCE_LINE_LENGTH  256
#define MAX_PRINT_LINE_LENGTH   80
#define MAX_LINES_PER_PAGE      50
#define DATE_STRING_LENGTH      26
//*********************************************************************
typedef enum {
    FALSE, TRUE,
}BOOLEAN;

FILE *init_lister(const char *, char source_file_name[], char dte[]);
BOOLEAN get_source_line(FILE *, char src_name[], char todays_date[]);
void print_line(char *, char source_name[], char date_to_print[]);

#endif
