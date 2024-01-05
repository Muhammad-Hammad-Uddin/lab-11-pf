#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Book {
    int accessionNumber;
    char author[50];
    char title[50];
    int flag;
};

void displayAll(struct Book *library, int numBooks) {
    int i = 0;
    if (numBooks == 0) {
        printf("No books in the library right now. Select 2 (Add a new book) to start adding books.\n");
    } else {
        while (i != numBooks) {
            printf("Accession number: %d\n", library[i].accessionNumber);
            printf("Author: %s\n", library[i].author);
            printf("Title: %s\n", library[i].title);
            printf("Flag: %d\n", library[i].flag);
            i++;
        }
    }
}

void displayAuthorBooks(struct Book *library, int numBooks) {
    char userAuthor[50];
    if (numBooks == 0) {
        printf("No books in the library right now. Select 2 (Add a new book) to start adding books.\n");
    } else {
        printf("Enter a particular author's name: ");
        getchar(); 
        fgets(userAuthor, sizeof(userAuthor), stdin);
        userAuthor[strcspn(userAuthor, "\n")] = '\0'; 
        strupr(userAuthor);

        int found = 0;
        for (int i = 0; i < numBooks; i++) {
            if (strcmp(library[i].author, userAuthor) == 0) {
                printf("Accession number: %d\n", library[i].accessionNumber);
                printf("Author: %s\n", library[i].author);
                printf("Title: %s\n", library[i].title);
                printf("Flag: %d\n", library[i].flag);
                found = 1;
            }
        }

        if (found == 0) {
            printf("No books found.\n");
        }
    }
}

void displayTitleCount(struct Book *library, int numBooks) {
    if (numBooks == 0) {
        printf("No books in the library right now. Select 2 (Add a new book) to start adding books.\n");
    } else {
        int count = 0;
        char userTitle[50];
        printf("Enter a particular book title: ");
        getchar(); 
        fgets(userTitle, sizeof(userTitle), stdin);
        userTitle[strcspn(userTitle, "\n")] = '\0'; 
        strupr(userTitle);

        for (int i = 0; i < numBooks; i++) {
            if (strcmp(library[i].title, userTitle) == 0) {
                count++;
            }
        }

        if (count == 0) {
            printf("No books found.\n");
        } else {
            printf("Total count of books found with the title '%s': %d\n", userTitle, count);
        }
    }
}

void issueBook(struct Book *library, int numBooks) {
    if (numBooks == 0) {
        printf("No books in the library right now. Select 2 (Add a new book) to start adding books.\n");
    } else {
        char userTitle[50];
        printf("Enter book title for issuance: ");
        getchar(); 
        fgets(userTitle, sizeof(userTitle), stdin);
        userTitle[strcspn(userTitle, "\n")] = '\0'; 
        strupr(userTitle);

        for (int i = 0; i < numBooks; i++) {
            if (strcmp(library[i].title, userTitle) == 0) {
                library[i].flag--;
            }
        }
    }
}

void addBook(struct Book *library, int *numBooks) {
    printf("Enter accession number: ");
    scanf("%d", &(library[*numBooks].accessionNumber));

    printf("Enter author's name: ");
    getchar(); 
    fgets(library[*numBooks].author, sizeof(library[*numBooks].author), stdin);
    library[*numBooks].author[strcspn(library[*numBooks].author, "\n")] = '\0'; 
    strupr(library[*numBooks].author);

    printf("Enter book title: ");
    fgets(library[*numBooks].title, sizeof(library[*numBooks].title), stdin);
    library[*numBooks].title[strcspn(library[*numBooks].title, "\n")] = '\0'; 
    strupr(library[*numBooks].title);

    library[*numBooks].flag = 0;

    for (int i = 0; i < *numBooks; i++) {
        int count = 0;
        char bookCheck[50];
        strcpy(bookCheck, library[i].title);
        for (int j = i; j < *numBooks; j++) {
            if (strcmp(bookCheck, library[i].title) == 0) {
                count++;
            }
        }
        library[i].flag = count;
    }

    printf("Book entered successfully.\n");
    (*numBooks)++;
}

int main() {
    int numBooks = 0;
    struct Book *library = (struct Book *)calloc(1, sizeof(struct Book));

    int choice;
    printf("\n1. Display book information\n2. Add a new book\n3. Display all books by a particular author\n4. Display number of books with a particular title\n5. Display total number of books in the library\n6. Issue a book\n-1. End the program");

    while (choice != -1) {
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
        case 1:
            displayAll(library, numBooks);
            break;
        case 2:
            library = (struct Book *)realloc(library, (numBooks + 1) * sizeof(struct Book));
            addBook(library, &numBooks);
            break;
        case 3:
            displayAuthorBooks(library, numBooks);
            break;
        case 4:
            displayTitleCount(library, numBooks);
            break;
        case 5:
            printf("Total books in the library: %d\n", numBooks);
            break;
        case 6:
            issueBook(library, numBooks);
            break;
        case -1:
            printf("Thank you!\n");
            break;
        }
    }

    // Free allocated memory before exiting
    free(library);

    return 0;
}
