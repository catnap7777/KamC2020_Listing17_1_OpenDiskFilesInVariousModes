//Listing 17.1 Open disk files in various modes; page 421


//******* THIS PROGRAM DOES NOT WORK... NEED TO FIX

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE *fp;

    char *ch, filename[40], mode[4];

    while(1)
    {
        //input filename and mode
        puts("\nEnter a filename: ");
        gets(filename);
        puts("\nEnter a mode (max 3 characters): ");
        gets(mode);

        //try to open the file
        if ((fp = fopen(filename, mode)) != NULL)
        {
            printf("\nSuccessful opening %s in mode %s.\n",filename,mode);
            fclose(fp);
            puts("Enter x to exit, any other to continue.");
            if((ch = getc(stdin)) == 'x')
                break;
            else
                continue;
        }
        else
            {
                fprintf(stderr, "\nError opening file %s in mode %s.\n",filename,mode);
                puts("Enter x to exit, any other to try again.");
                if ((ch = getc(stdin)) == 'x')
                    break;
                else
                    continue;
            }
    }
    //return;
}
