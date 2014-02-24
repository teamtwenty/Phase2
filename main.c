/*equal work was done between all three of the group members

Maxx Rodriguez
Nick Simms
Carlos Lopez

*/




#include "common.h" //Associate this file with common.h
//*****************************************************************************
int main (int argc, const char *argv[])
{
    FILE *source_file;						
    char source_name[MAX_FILE_NAME_LENGTH];	//Array for incoming source code 
    char date[DATE_STRING_LENGTH];		//Array for date
    source_file = init_lister(*argv, source_name , date );	//source file formatted in init_lister	
    int counter = 0;	//counter initialized to zero

    while(get_source_line(source_file, source_name, date)) //repeats until null terminator
    {

    }
    
   /* Missing Code Here */
    return 0; //return zero when loop has exited
}
FILE *init_lister(const char *name, char source_file_name[], char dte[])	//formats incoming source code
{
    FILE *file;
    char source_name = *name;	//pointer
    char date[26];	//sets up date capacity
    int i = 0;		//intialized to 0 for the first element in array
    int x = 10;
    
    //Sets up timer and date
    time_t timer = time(0);		
    struct tm *timevar = localtime(&timer);
    char* itoa(*timevar, date, x);
    while(date[i] != '\0')	//loops to print date and time
    {
    	dte[i] = date[i];
    	i++;
    }
    dte[i] = '\0'; //adds a null terminator once it has finished printing
    
    //printf("%s", ctime(&timer));
    FILE *f = fopen(source_file_name, "w");
    printf("%s", dte);	//print date


    /* Missing Code Here */
    return file;
}
BOOLEAN get_source_line(FILE *src_file, char src_name[], char todays_date[])	//Retrieves source line
{
    char print_buffer[MAX_SOURCE_LINE_LENGTH + 9];	
    char source_buffer[MAX_SOURCE_LINE_LENGTH];		//sets capacity to max length
    static int line_number = 0;		//starts at line 0
    
    if (source_buffer[line_number] != '\0') //This is missing a condition. Prints until the null terminator
    {
	source_buffer[line_number];	
	line_number++;	//increment
	sprintf(line_number, '%d %s', source_buffer[line_number]); //print source code
	print_line(line_number, src_name, todays_date );	//print arguements according to print_line
	
      return (TRUE);	//returns 1 to continue looping
    }
    else
    {
       
	 return (FALSE);	//exits loop and returns 0
    }
}

