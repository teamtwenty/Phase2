#include "common.h"

int main (int argc, const char *argv[])
{
    FILE *source_file;
    char source_name[MAX_FILE_NAME_LENGTH];
    char date[DATE_STRING_LENGTH];
    init_lister(char *argv[1], source_name[MAX_FILE_NAME_LENGTH], char date[DATE_STRING_LENGTH]);
    int counter = 0;

    while(counter <= 50)
    {
    	BOOLEAN get_source_line(FILE *source_file, source_name[MAX_FILE_NAME_LENGTH], date[DATE_STRING_LENGTH];);
    	counter++;
    }
    
   /* Missing Code Here */
    return 0;
}
FILE *init_lister(const char *name, char source_file_name[], char dte[])
{
    FILE *file;

    source_name = *name;

    time_t timer;
    time(&timer);
    printf("%s", ctime(&timer));


    /* Missing Code Here */
    return file;
}
/BOOLEAN get_source_line(FILE *src_file, char src_name[], char todays_date[])
{
    char print_buffer[MAX_SOURCE_LINE_LENGTH + 9];
    char source_buffer[MAX_SOURCE_LINE_LENGTH];
    static int line_number = 0;
    
    if (1) //This is missing a condition
    {
	source_buffer[line_number];
	line_number++;	/*  Missing Code Here **/
      return (TRUE);
    }
    else
    {
       
	 return (FALSE);
    }
}

