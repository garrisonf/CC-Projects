#include <stdio.h>
#include <stdlib.h>

/*
Garrison Finley
Dr. Abbas Dehkhoda
CS 50
7/15/17
*/

int main() {

    //OPENS AND CHECKS FOR FILES

    FILE *fp1 = fopen("C:\\Users\\G.Finley\\Desktop\\usernames.txt", "r"); //File pointer assigned to file location, set to read
    FILE *fp2 = fopen("C:\\Users\\G.Finley\\Desktop\\passwords.txt", "r");
    FILE *fp3 = fopen("C:\\Users\\G.Finley\\Desktop\\usernamesPasswords.txt" ,"w");

    if (fp1 == NULL || fp2 == NULL) //If the initial files fail to open and or file path is incorrect
    {
        printf("ERROR File(s) Not Found.");
            exit(0);
    }

    if (fp3 != NULL) //If third file is successfully generated
    {
        printf("Generating File...\n");
    }

    char username[50]; //Maximum username/password length is > 25 but doubled just in case
    char password[50];

    // POPULATES

    while(1) // Always true
    {
        if (fscanf(fp1, "%s", username) == EOF) //Since there is an equal amount of usernames to passwords scans until reaches the end of usernames then breaks
        {
            break;
        }
        fscanf(fp2, "%s", password); //While its scanning through username also scans through password the same amount of times

        fprintf(fp3, "%-26s %-26s \r\n", username, password); // Prints both to fp3. spaced to accommodate the largest username.
        // \r\n because CLion doesnt automatically format for Windows OS
    }

    //CLOSE FILES

    fclose(fp1); // Closes usernames
    fclose(fp2); // Closes passwords
    fclose(fp3); // Closes usernamesPasswords


    printf("File Generated\n");

   // ASKS USER IF THEY WANT TO VIEW GENERATED TEXT FILE

    char ans = 'N';
    int c;

    printf("View Generated Text File? (Y/N): ");
        scanf("%c", &ans);

    if (ans == 'y' || ans == 'Y')
    {

        fp3 = fopen("C:\\Users\\G.Finley\\Desktop\\usernamesPasswords.txt" ,"r"); // Reopens usernamePasswords.txt to be read

            while ((c = getc(fp3)) != EOF)
                putchar(c);
    }

    //CLOSE FILE

    fclose(fp3); // Closes usernamePasswords

    return 0;
}