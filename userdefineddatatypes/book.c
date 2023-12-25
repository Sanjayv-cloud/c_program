#include <stdio.h>
#include <string.h>
#define max 50

// structure for book inventory
struct book
{
    char title[max];
    char author[max];
    char isbn[max];
    float price;
};
void addbook(struct book inventory[], int *count) // adding new book to inventory
{
    struct book newbook;
    if (*count < 100) // limit for the inventory
    {
        printf("Enter the title of book:");
        getchar();
        fgets(newbook.title, 50, stdin);
        newbook.title[strcspn(newbook.title, "\n")] = '\0'; // remove new line char
        
        printf("\nEnter the author of book:");
        getchar();
        fgets(newbook.author, 50, stdin);
        newbook.author[strcspn(newbook.author, "\n")] = '\0'; // remove new line char

        printf("\nEnter the isbn of book:");
        getchar();
        fgets(newbook.isbn, 50, stdin);
        newbook.isbn[strcspn(newbook.isbn, "\n")] = '\0'; // remove new line char

        printf("\nenter the price of the book");
        scanf("%f", &newbook.price);
        inventory[*count] = newbook;
        (*count)++;

        printf("\nBook added to inventory successfull");
    }
    else
        printf("something went wrong");
}

void removebook(struct book inventory[], int *count, char isbntodelete[]) // remove the detail of book from inv
{
    for (int i = 0; i < *count; i++)
        if (strcmp(inventory[i].isbn, isbntodelete) == 0)
            for (int j = i; j < *count; j++)
            {
                inventory[j] = inventory[j + 1]; // replaceing the count
            }
    (*count)--;
    printf("Book with ISBN %s deleted from the inventory.\n", isbntodelete);
    return;
}
// Function to search for a book by ISBN
void searchBook(struct book inventory[], int count, char isbnToSearch[])
{
    for (int i = 0; i < count; i++)
    {
        if (strcmp(inventory[i].isbn, isbnToSearch) == 0)
        {
            printf("Book found:\n");
            printf("Title: %s\n", inventory[i].title);
            printf("Author: %s\n", inventory[i].author);
            printf("ISBN: %s\n", inventory[i].isbn);
            printf("Price: $%.2f\n", inventory[i].price);
            return;
        }
    }
    printf("Book with ISBN %s not found in the inventory.\n", isbnToSearch);
}
int main()           
{           
    struct book inventory[100];           
    int count = 0;           
    while (1)           
    {
        printf("[1] add new book\n");           
        printf("[2] delete a book\n");           
        printf("[3] search the book\n");           
        printf("[4] exist\n");

        printf("enter your choice:");
        int choice;
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            // add new book to inventory
            addbook(inventory, &count);
            break;
        case 2:
            // remove book from inventory
            if (count > 0)
            {
                char isbntodelete[20];
                printf("Enter the isbn code to delete:");
                scanf("%s", isbntodelete);
                removebook(inventory, &count, isbntodelete);
            }
            else
            {
                printf("\ngiven isbn no is invalid");
            }
            break;
        case 3:
            if (count > 0)
            {
                char isbnToSearch[20];
                printf("\nEnter ISBN of the book to search: ");
                scanf("%s", isbnToSearch);
                searchBook(inventory, count, isbnToSearch);
            }
            else
            {
                printf("\nInventory is empty. Cannot search for books.\n");
            }
            break;
        case 4:
            printf("\ngood bye");

        default:
            break;
        }
    }
}