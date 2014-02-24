#include "common.h"
//*********************************************************************************
static void print_page_header(char source_name[], char date[]);

void print_line(char line[], char source_name_to_print[], char date_to_print[]) //Formats printing
{
    char save_ch;
    char *save_chp = NULL;
    static int line_count = MAX_LINES_PER_PAGE;
    
    if (++line_count > MAX_LINES_PER_PAGE) //Creates new page if max lines are exceeded
    {
        print_page_header(source_name_to_print, date_to_print);
    }
    if (strlen(line) > MAX_PRINT_LINE_LENGTH) //truncates line if max length is exceeded
    {
        save_chp = (line + MAX_PRINT_LINE_LENGTH);
        save_ch = *save_chp;
        *save_chp = '\0';
        
    }
    if (save_chp) //prints normally if no alteration are needed
    {
        printf("%s",line);
        *save_chp = save_ch;    //pointer points to save_ch value
        /* Missing Code Here */
    }
    /* Missing Code Here */
   /* if (save_chp)
    {
         Missing Code Here
    } */
}
static void print_page_header(char source_name[], char date[]) //prints the header
{
    static int page_number = 1;
    
    printf("%s", source_name, date);
    
}
