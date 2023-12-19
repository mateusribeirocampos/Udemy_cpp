#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Open the file for writing
    FILE *fp = fopen("open-brave.bat", "w");
    
    // Write the command to open Brave to the file
    fprintf(fp, "@echo off\nstart \"\" \"C:\\Program Files\\BraveSoftware\\Brave-Browser\\Application\\brave.exe\" %%*\n");
    
    // Close the file
    fclose(fp);
    
    // Run the batch file using the system() function
    system("open-brave.bat");
    
    return 0;
}
