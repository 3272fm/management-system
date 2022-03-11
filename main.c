#include <stdio.h>
#include <stdlib.h>



int menu()
{

int action;
    printf("Selected action:\n");

    printf("1. Add a new patron\n");
    printf("2. View patrons\n");
    printf("3. View books\n");
    printf("4. Add a new book\n");
    printf(" Your action:");
    scanf("%d",&action);
    if(action < 1 || action > 4){

    printf("invalid action.Try again\n");

    }
    return action;
}



 void execute_action (int action){
  switch (action){
  case 1:
        printf(" Adding a new patron\n");
        break;
  case 2:
     printf("Here is a list of patrons\n");
     break;
  case 3:
    printf("Here is a list of all books");
    break;
  case 4:
      printf("Adding a new book\n");
      break;
  default:
    printf("invalid action.\n");

    }
 }
int main()
{
    printf("Management System!\n");
    printf("Welcome Fataal Muthoni\n");
    execute_action(menu());
    return 0;
}


