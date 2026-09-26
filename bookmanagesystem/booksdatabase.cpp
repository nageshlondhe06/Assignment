#include <stdio.h>
#include <string.h>

#define MAX_BOOKS 100

struct book {
    int id;
    char name[50];
    char author[50];
    char category[50];
    float price;
    float rating;
};

struct book books[MAX_BOOKS];
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

void addbook() {
    if (bookcount < MAX_BOOKS) {
        printf("Enter book id: ");
        scanf("%d", &books[bookcount].id);
        getchar(); 

        printf("Enter book name: ");
        scanf(" %[^\n]", books[bookcount].name);

        printf("Enter author name: ");
        scanf(" %[^\n]", books[bookcount].author);

        printf("Enter category: ");
        scanf(" %[^\n]", books[bookcount].category);

        printf("Enter price: ");
        scanf("%f", &books[bookcount].price);

        printf("Enter rating: ");
        scanf("%f", &books[bookcount].rating);

        bookcount++;
        printf("Book added successfully!\n");
    } else {
        printf("Database full!\n");
    }
}

void removebook() {
    int id;
    printf("Enter book id to remove: ");
    scanf("%d", &id);
    for (int i = 0; i < bookcount; i++) {
        if (books[i].id == id) {
            for (int j = i; j < bookcount - 1; j++) {
                books[j] = books[j + 1];
            }
            bookcount--;
            printf("Book removed successfully!\n");
            return;
        }
    }
    printf("Book not found!\n");
}

void searchbyid() {
    int id;
    printf("Enter book id: ");
    scanf("%d", &id);
    for (int i = 0; i < bookcount; i++) {
        if (books[i].id == id) {
            printf("Book found: %s by %s | Category: %s | Price: %.2f | Rating: %.1f\n",
                   books[i].name, books[i].author, books[i].category,
                   books[i].price, books[i].rating);
            return;
        }
    }
    printf("Book not found!\n");
}

void searchbyname() {
    char name[50];
    printf("Enter book name: ");
    getchar(); 
    scanf(" %[^\n]", name);
    for (int i = 0; i < bookcount; i++) {
        if (strcmp(books[i].name, name) == 0) {
            printf("Book found: ID %d, Author %s | Category %s | Price: %.2f | Rating: %.1f\n",
                   books[i].id, books[i].author, books[i].category,
                   books[i].price, books[i].rating);
            return;
        }
    }
    printf("Book not found!\n");
}

void showauthorbooks() {
    char author[50];
    printf("Enter author name: ");
    getchar();
    scanf(" %[^\n]", author);
    printf("Books by %s:\n", author);
    for (int i = 0; i < bookcount; i++) {
        if (strcmp(books[i].author, author) == 0) {
            printf("%s (ID %d)\n", books[i].name, books[i].id);
        }
    }
}

void showcategorybooks() {
    char category[50];
    printf("Enter category: ");
    getchar();
    scanf(" %[^\n]", category);
    printf("Books in category %s:\n", category);
    for (int i = 0; i < bookcount; i++) {
        if (strcmp(books[i].category, category) == 0) {
            printf("%s by %s\n", books[i].name, books[i].author);
        }
    }
}

void updatebook() {
    int id;
    float newprice, newrating;
    printf("Enter book id to update: ");
    scanf("%d", &id);
    for (int i = 0; i < bookcount; i++) {
        if (books[i].id == id) {
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

void displayallbooks() {
    printf("\nAll books in database:\n");
    for (int i = 0; i < bookcount; i++) {
        printf("ID %d | Name %s | Author %s | Category %s | Price %.2f | Rating %.1f\n",
               books[i].id, books[i].name, books[i].author,
               books[i].category, books[i].price, books[i].rating);
    }
}

void sortbyprice() {
    for (int i = 0; i < bookcount - 1; i++) {
        for (int j = 0; j < bookcount - i - 1; j++) {
            if (books[j].price > books[j + 1].price) {
                struct book temp = books[j];
                books[j] = books[j + 1];
                books[j + 1] = temp;
            }
        }
    }
    printf("Books sorted by price!\n");
}

void sortbyrating() {
    for (int i = 0; i < bookcount - 1; i++) {
        for (int j = 0; j < bookcount - i - 1; j++) {
            if (books[j].rating < books[j + 1].rating) {
                struct book temp = books[j];
                books[j] = books[j + 1];
                books[j + 1] = temp;
            }
        }
    }
    printf("Books sorted by rating!\n");
}

void top3byprice() {
    sortbyprice();
    int limit = (bookcount < 3) ? bookcount : 3;
    printf("\nTop %d Books by Price:\n", limit);
    for (int i = bookcount - 1; i >= bookcount - limit; i--) {
        printf("%s (%.2f)\n", books[i].name, books[i].price);
    }
}

void top3byrating() {
    sortbyrating();
    int limit = (bookcount < 3) ? bookcount : 3;
    printf("\nTop %d Books by Rating:\n", limit);
    for (int i = 0; i < limit; i++) {
        printf("%s (%.1f)\n", books[i].name, books[i].rating);
    }
}

int main() {
    int choice;
    do {
        printf("\n--- Book Management System ---\n");
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

        switch (choice) {
            case 1: addbook(); break;
            case 2: removebook(); break;
            case 3: searchbyid(); break;
            case 4: searchbyname(); break;
            case 5: showauthorbooks(); break;
            case 6: showcategorybooks(); break;
            case 7: updatebook(); break;
            case 8: displayallbooks(); break;
            case 9: sortbyprice(); displayallbooks(); break;
            case 10: sortbyrating(); displayallbooks(); break;
            case 11: top3byprice(); break;
            case 12: top3byrating(); break;
            case 0: printf("Exiting...\n"); break;
            default: printf("Invalid choice!\n");
        }
    } while (choice != 0);

    return 0;
}
