#include "function.h"
int main()
{
    system("cls");    /* ************Main menu ***********************  */
    int choice;
    printf("\n\t **** Welcome to Phonebook Management System ****");
    while(1){
    printf("\n\n\n\t\t\tMAIN MENU\n\t\t=====================\n\t\t[1] Add a new Contact\n\t\t[2] List all Contacts\n\t\t[3] Search for contact\n\t\t[4] Edit a Contact\n\t\t[5] Delete a Contact\n\t\t[6] Exit\n\t\t=================\n\t\t");

    printf("\n\t\tEnter the choice: ");

    scanf("%d",&choice);

    switch(choice)
    {
    case 1:
        add_contact();
        break;
    case 2:
        view_contact();
        break;
    case 3:
        search_contact();
        break;
    case 4:
        edit_contact();
        break;
    case 5:
        delete_contact();
        break;
    case 6:
        exit(0);
        break;
    default:
        printf("wrong choice !!!!!!!");
    }
  }
  
}