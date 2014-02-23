#include "common.h"

int main (int argc, const char *argv[])
{
    FILE *source_file;
    char source_name[MAX_FILE_NAME_LENGTH];
    char date[DATE_STRING_LENGTH];
    init_lister(char *argv[1], source_name[MAX_FILE_NAME_LENGTH], char date[DATE_STRING_LENGTH]);
    int counter = 0;

    while(BOOLEAN get_source_line(FILE *source_file, source_name, date))
    {

    }
    
   /* Missing Code Here */
    return 0;
}
FILE *init_lister(const char *name, char source_file_name[], char dte[])
{
    FILE *file;
    char source_name = *name;
    char date[26];
    int i = 0;

    time_t timer;
    struct tm *timevar = localtime(&timer);
    itoa(*timevar, date, 10);
    while(date[i] != '\0')
    {
    	dte[i] = date[i];
    	i++;
    }
    dte[i] = '\0';
    //printf("%s", ctime(&timer));
    FILE *f = fopen(source_file_name, "w");
    printf("%s", dte);


    /* Missing Code Here */
    return file;
}
BOOLEAN get_source_line(FILE *src_file, char src_name[], char todays_date[])
{
    char print_buffer[MAX_SOURCE_LINE_LENGTH + 9];
    char source_buffer[MAX_SOURCE_LINE_LENGTH];
    static int line_number = 0;
    
    if (source_buffer[line_number] != '\0') //This is missing a condition
    {
	source_buffer[line_number];
	line_number++;	
	sprintf(line_number, '%d %s', source_buffer[line_number]);
	print_line(source_buffer);
	
      return (TRUE);
    }
    else
    {
       
	 return (FALSE);
    }
}

