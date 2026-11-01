#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct book
{
    int id;
    char name[50];
    char author[50];
    char category[50];
    float price;
    float rating;
};

struct book *books = NULL;
int bookcount = 0;
void addbook();
void removebook();
void searchbyid();
void searchbyname();
void showauthorbooks();
void showcategorybooks();
void updatebook();
void displayallbooks();
void sortbyprice();
void sortbyrating();
void top3byprice();
void top3byrating();



void addbook()
{
    struct book *temp;
    int id;
    printf("enter book id: ");
    scanf("%d",&id);
	    //duplicate
    for(int i=0;i<bookcount;i++){
    	if(books[i].id==id){
    		printf("book id already exists! enter a different id.\n");
    		return;
		}
	}

    if (bookcount == 0)
    {
        
        books = (struct book *)malloc(sizeof(struct book));

        if (books == NULL)
        {
            printf("Memory allocation failed!\n");
            return;
        }
    }
    else
    {
    
        temp = (struct book *)realloc( books,
            (bookcount + 1) * sizeof(struct book)
        );

        if (temp == NULL)
        {
            printf("Memory reallocation failed!\n");
            return;
        }

        books = temp;
    }

    printf("\nEnter book id: ");
    scanf("%d", &books[bookcount].id);

    getchar();

    printf("Enter book name: ");
    scanf(" %[^\n]", books[bookcount].name);

    printf("Enter author name: ");
    scanf(" %[^\n]", books[bookcount].author);

    printf("Enter category: ");
    scanf(" %[^\n]", books[bookcount].category);
    do{
	
    printf("Enter price must be greater than 0 ");
    scanf("%f", &books[bookcount].price);
    
    if(books[bookcount].price<=0 ){
    	printf("invalid price! price must be greater than 0\n");
	}
}while (books[bookcount].price<=0);
    do{
	
    printf("Enter rating(0 to 5): ");
    scanf("%f", &books[bookcount].rating);
    
    if(books[bookcount].rating <0 ||books[bookcount].rating >5){
    	printf("invalid rating! please enter rating between 0 and 5\n");
	}
}while (books[bookcount].rating <0||books[bookcount].rating >5);
    bookcount++;

    printf("\nBook added successfully!\n");
}



void removebook()
{
    int id;

    printf("Enter book id to remove: ");
    scanf("%d", &id);

    for (int i = 0; i < bookcount; i++)
    {
        if (books[i].id == id)
        {
            
            for (int j = i; j < bookcount - 1; j++)
            {
                books[j] = books[j + 1];
            }

            bookcount--;

            if (bookcount == 0)
            {
                free(books);
                books = NULL;
            }
            else
            {
                struct book *temp;

                temp = (struct book *)realloc(  books, bookcount * sizeof(struct book)
                );

                if (temp != NULL)
                {
                    books = temp;
                }
            }

            printf("Book removed successfully!\n");
            return;
        }
    }

    printf("Book not found!\n");
}


void searchbyid()
{
    int id;

    printf("Enter book id: ");
    scanf("%d", &id);

    for (int i = 0; i < bookcount; i++)
    {
        if (books[i].id == id)
        {
            printf("\nBook found:\n");
            printf("ID       : %d\n", books[i].id);
            printf("Name     : %s\n", books[i].name);
            printf("Author   : %s\n", books[i].author);
            printf("Category : %s\n", books[i].category);
            printf("Price    : %.2f\n", books[i].price);
            printf("Rating   : %.1f\n", books[i].rating);

            return;
        }
    }

    printf("Book not found!\n");
}


void searchbyname()
{
    char name[50];

    printf("Enter book name: ");
    getchar();
    scanf(" %[^\n]", name);

    for (int i = 0; i < bookcount; i++)
    {
        if (strcmp(books[i].name, name) == 0)
        {
            printf("\nBook found:\n");
            printf("ID       : %d\n", books[i].id);
            printf("Author   : %s\n", books[i].author);
            printf("Category : %s\n", books[i].category);
            printf("Price    : %.2f\n", books[i].price);
            printf("Rating   : %.1f\n", books[i].rating);

            return;
        }
    }

    printf("Book not found!\n");
}


void showauthorbooks()
{
    char author[50];
    int found = 0;

    printf("Enter author name: ");
    getchar();
    scanf(" %[^\n]", author);

    printf("\nBooks by %s:\n", author);

    for (int i = 0; i < bookcount; i++)
    {
        if (strcmp(books[i].author, author) == 0)
        {
            printf("ID: %d | %s\n",
                   books[i].id,
                   books[i].name);

            found = 1;
        }
    }

    if (!found)
    {
        printf("No books found for this author.\n");
    }
}


void showcategorybooks()
{
    char category[50];
    int found = 0;

    printf("Enter category: ");
    getchar();
    scanf(" %[^\n]", category);

    printf("\nBooks in category %s:\n", category);

    for (int i = 0; i < bookcount; i++)
    {
        if (strcmp(books[i].category, category) == 0)
        {
            printf("%s by %s\n",
                   books[i].name,
                   books[i].author);

            found = 1;
        }
    }

    if (!found)
    {
        printf("No books found in this category.\n");
    }
}


void updatebook()
{
    int id;
    float newprice, newrating;

    printf("Enter book id to update: ");
    scanf("%d", &id);

    for (int i = 0; i < bookcount; i++)
    {
        if (books[i].id == id)
        {
            printf("Enter new price: ");
            scanf("%f", &newprice);

            printf("Enter new rating: ");
            scanf("%f", &newrating);

            books[i].price = newprice;
            books[i].rating = newrating;

            printf("Book updated successfully!\n");
            return;
        }
    }

    printf("Book not found!\n");
}


void displayallbooks()
{
    if (bookcount == 0)
    {
        printf("\nNo books available.\n");
        return;
    }

    printf("\n---- ALL BOOKS -------\n");

    for (int i = 0; i < bookcount; i++)
    {
        printf("\nID       : %d\n", books[i].id);
        printf("Name     : %s\n", books[i].name);
        printf("Author   : %s\n", books[i].author);
        printf("Category : %s\n", books[i].category);
        printf("Price    : %.2f\n", books[i].price);
        printf("Rating   : %.1f\n", books[i].rating);
    }
}


void sortbyprice()
{
    struct book temp;

    for (int i = 0; i < bookcount - 1; i++)
    {
        for (int j = 0; j < bookcount - i - 1; j++)
        {
            if (books[j].price > books[j + 1].price)
            {
                temp = books[j];
                books[j] = books[j + 1];
                books[j + 1] = temp;
            }
        }
    }

    printf("Books sorted by price!\n");
}


void sortbyrating()
{
    struct book temp;

    for (int i = 0; i < bookcount - 1; i++)
    {
        for (int j = 0; j < bookcount - i - 1; j++)
        {
            if (books[j].rating < books[j + 1].rating)
            {
                temp = books[j];
                books[j] = books[j + 1];
                books[j + 1] = temp;
            }
        }
    }

    printf("Books sorted by rating!\n");
}



void top3byprice()
{
    int limit;

    if (bookcount == 0)
    {
        printf("No books available.\n");
        return;
    }

    sortbyprice();

    limit = (bookcount < 3) ? bookcount : 3;

    printf("\nTop %d Books by Price:\n", limit);

    for (int i = bookcount - 1;  i >= bookcount - limit; i--)
    {
        printf("%s - %.2f\n",
               books[i].name,
               books[i].price);
    }
}

void top3byrating()
{
    int limit;

    if (bookcount == 0)
    {
        printf("No books available.\n");
        return;
    }

    sortbyrating();

    limit = (bookcount < 3) ? bookcount : 3;

    printf("\nTop %d Books by Rating:\n", limit);

    for (int i = 0; i < limit; i++)
    {
        printf("%s - %.1f\n",
               books[i].name,
               books[i].rating);
    }
}


int main()
{
    int choice;

    do
    {
        printf("\n========== BOOK MANAGEMENT SYSTEM ==========\n");
        printf("1. Add Book\n");
        printf("2. Remove Book\n");
        printf("3. Search Book by ID\n");
        printf("4. Search Book by Name\n");
        printf("5. Show Author's Books\n");
        printf("6. Show Category's Books\n");
        printf("7. Update Book Data\n");
        printf("8. Display All Books\n");
        printf("9. Display Sorted Books by Price\n");
        printf("10. Display Sorted Books by Rating\n");
        printf("11. Top 3 Books by Price\n");
        printf("12. Top 3 Books by Rating\n");
        printf("0. Exit\n");

        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                addbook();
                break;

            case 2:
                removebook();
                break;

            case 3:
                searchbyid();
                break;

            case 4:
                searchbyname();
                break;

            case 5:
                showauthorbooks();
                break;

            case 6:
                showcategorybooks();
                break;

            case 7:
                updatebook();
                break;

            case 8:
                displayallbooks();
                break;

            case 9:
                sortbyprice();
                displayallbooks();
                break;

            case 10:
                sortbyrating();
                displayallbooks();
                break;

            case 11:
                top3byprice();
                break;

            case 12:
                top3byrating();
                break;

            case 0:
                printf("Exiting program...\n");
                break;

            default:
                printf("Invalid choice!\n");
        }

    } while (choice != 0);

    free(books);
    books = NULL;

    return 0;
}
