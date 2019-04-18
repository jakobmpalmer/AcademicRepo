 /* This problem uses multiple processes and a stored file of information to address two questions about gemstones.

    Given a color, select all gemstones of the given color, and print them in alphabetical order by gemstone name.

    Print all gemstones, whose hardness and specific gravity values are within specified ranges.
*/

#include <stdio.h>
#include <stdlib.h>







int main()
{


}


void readFile()
{
    FILE *fptr;
    char filename[15];
    char ch;

    printf("Enter file in assets of gem data\n");

    if ((fptr = fopen("C:\\program.txt","r")) == NULL){
       printf("Error! opening file");

       // Program exits if the file pointer returns NULL.
       exit(1);
   }

    scanf("%s", filename);
    printf("Opening: " + "%s", filename);
    fscanf(fptr, "%d");

    fclose();

}

//5 programs
//read file with cat

//