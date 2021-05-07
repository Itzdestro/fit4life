#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    char fname[20];
    char name[100];
    char message[200];
    char rem[100];
    int age, choice;
    char array[25] = " ";

   strcpy( rem, "LONG LIFE AND PROSPERITY.");
   strcat(name, rem);





    printf("WELCOME TO ORIGAMI BIRTHDAY SERVICES \n");
    printf("%s\n", array);

    printf("Please enter your name \n");
    gets(fname);
    printf("%s\n",array);

    printf("Please enter the celebrants name \n");
    gets(name);
    printf("%s\n", array);

    printf("Please enter the age of the celebrant \n");
    scanf("%d", &age);
    printf("%s\n", array);




    system("cls");

    printf(" Please pick an option");
    printf("\t                       ORIGAMI BIRTHDAY SERVICES                       \n");
    printf("\t||===================================================================||\n");
    printf("\t||                                                               %s  ||\n", array);
    printf("\t||         1- Do you want to send a special ORIGAMI birthday wish    ||\n");
    printf("\t||                                                               %s  ||\n", array);
    printf("\t||         2- Do you want to send a special birthday wish            ||\n");
    printf("\t||                                                               %s  ||\n", array);
    printf("\t||===================================================================||\n");
    printf("%s\n", array);
    printf("%s\n", array);

    printf("Enter your choice: ");
    scanf("%d", &choice);


    system("cls");


    if (choice == 1){

        printf("**********************************************************************************************\n");
        printf("* DEAR      %s                                                                               *");
        puts(name );
        printf("*                                                                                     *\n", array);
        printf("* Happy birthday! Many happy return of the                                                   *\n");
        printf("* day to my lovely friend. you are now %d years                                              *\n", age);
        printf("* old. you shine so much brightness and joy into                                             *\n");
        printf("* the lives of everyone around you thanks for                                                *\n");
        printf("* being such an amazing person and best friend                                               *\n");
        printf("* and i hope that today on your birthday some of                                             *\n");
        printf("* that brightness shine right back at you.                |!.....................!|          *\n");
        printf("* you are crazy, fun, and fabulous! i love you            |!  HAPPY              !|          *\n");
        printf("* to the moon and back and am so grateful for             |!      BIRTHDAY       !|          *\n");
        printf("* your friendship and all the fun times we have.          |!           %s        !|      *\n", name);
        printf("* shared this year it was really wonderful                |!                     !|          *\n");
        printf("* has anyone told you how great you are?                  |!                     !|          *\n");
        printf("* because i think you are the bee's knees, the            |!.....................!|          *\n");
        printf("* greatest thing since slice bread, out of this                                              *\n");
        printf("* world..... basically i think you are the best                                              *\n");
        printf("* have a great birthday and a great day!                                                     *\n");
        printf("*      %s                                                                                     *\n", array);
        printf("*      %s                                                                                     *\n", array);
        printf("* FROM                                                                                       *\n");
        puts(fname );
        printf("**********************************************************************************************\n");

    }
    else if (choice == 2){
        printf("HAPPY BIRTHDAY ", rem);
        puts(name);
        puts(rem);
        printf(rem,"LONG LIFE AND PROSPERITY ");
        printf("%s", array);
        printf("As you turn  %d years old i pray that all your wishes would be fulfilled \n", age);
        printf("Thanks for being such an amazing friend i hope that today on your birthday \n");
        printf("brightness will shine right back at you. You are crazy, fabulous! and fun to be \n");
        printf("around i love you to the moon and back and am so grateful for your friendship \n");
        printf("and all the fun times we have shared this year it was really wonderfull \n");
        printf("%s", array);
        printf("\t\t\t\t         FROM ");
        puts(fname);


























    }
    else{
        printf("invalid input ");
    }






    return 0;

}
