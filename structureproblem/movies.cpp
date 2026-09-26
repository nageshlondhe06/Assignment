#include <stdio.h>
#include <string.h>

struct movie {
    char title[50];
    char director[50];
    int releaseyear;
    char genre[30];
};

void addmovie(struct movie movies[], int *count) {
    printf("Enter movie title: ");
    scanf(" %[^\n]", movies[*count].title);

    printf("Enter director: ");
    scanf(" %[^\n]", movies[*count].director);

    printf("Enter release year: ");
    scanf("%d", &movies[*count].releaseyear);

    printf("Enter genre: ");
    scanf(" %[^\n]", movies[*count].genre);

    (*count)++;
}

void displaymovies(struct movie movies[], int count) {
    printf("\n--- Movie Database ---\n");
    for (int i = 0; i < count; i++) {
        printf("%d. Title: %s | Director: %s | Year: %d | Genre: %s\n",
               i + 1, movies[i].title, movies[i].director,
               movies[i].releaseyear, movies[i].genre);
    }
}

void searchmovie(struct movie movies[], int count, char searchtitle[]) {
    int found = 0;
    for (int i = 0; i < count; i++) {
        if (strcmp(movies[i].title, searchtitle) == 0) {
            printf("\nMovie Found:\n");
            printf("Title: %s | Director: %s | Year: %d | Genre: %s\n",
                   movies[i].title, movies[i].director,
                   movies[i].releaseyear, movies[i].genre);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("\nMovie not found!\n");
    }
}

void updatemovie(struct movie movies[], int count, char updatetitle[]) {
    int found = 0;
    for (int i = 0; i < count; i++) {
        if (strcmp(movies[i].title, updatetitle) == 0) {
            printf("\nUpdating details for %s\n", movies[i].title);

            printf("Enter new director: ");
            scanf(" %[^\n]", movies[i].director);

            printf("Enter new release year: ");
            scanf("%d", &movies[i].releaseyear);

            printf("Enter new genre: ");
            scanf(" %[^\n]", movies[i].genre);

            printf("\nMovie updated successfully!\n");
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("\nMovie not found!\n");
    }
}

int main() {
    struct movie movies[20];
    int count = 0;
    int choice;
    char searchtitle[50], updatetitle[50];

    do {
        printf("\n--- Movie Database Menu ---\n");
        printf("1. Add Movie\n");
        printf("2. Display All Movies\n");
        printf("3. Search Movie by Title\n");
        printf("4. Update Movie\n");
        printf("5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addmovie(movies, &count);
                break;
            case 2:
                displaymovies(movies, count);
                break;
            case 3:
                printf("Enter title to search: ");
                scanf(" %[^\n]", searchtitle);
                searchmovie(movies, count, searchtitle);
                break;
            case 4:
                printf("Enter title to update: ");
                scanf(" %[^\n]", updatetitle);
                updatemovie(movies, count, updatetitle);
                break;
            case 5:
                printf("Exiting Movie Database...\n");
                break;
            default:
                printf("Invalid choice! Try again.\n");
        }
    } while (choice != 5);

    return 0;
}
