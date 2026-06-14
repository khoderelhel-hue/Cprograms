#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int isbn;
    char title[50];
    char author[50];
    int year;
    int pages;
    int isOnShelf; 
} Book;

Book* createBook(int isbn, char* title, char* author, int year, int pages, int isOnShelf) {
    
    Book *newBook = (Book*)malloc(sizeof(Book));
    
    if (newBook == NULL) {
        printf("Memory allocation error!\n");
        return NULL;
    }

    newBook->isbn = isbn;
    strcpy(newBook->title, title);
    strcpy(newBook->author, author);
    newBook->year = year;
    newBook->pages = pages;
    newBook->isOnShelf = isOnShelf;

    return newBook;
}

void printBook(Book* b) {
    if (b == NULL) return;
    
    printf("ISBN: %d  Title: %-20s  Author: %-15s  Year: %d  Pages: %d  Status: %s\n",
           b->isbn, b->title, b->author, b->year, b->pages, 
           (b->isOnShelf == 1 ? "On Shelf" : "Borrowed"));
}

Book* searchBook(Book* books[], int count, int searchISBN) {
    for (int i = 0; i < count; i++) {
        if (books[i]->isbn == searchISBN) {
            return books[i];
        }
    }
    return NULL;
}

int main() {
    
    Book* books[3];
    
    books[0] = createBook(101, "C Programming", "Kernighan", 1988, 272, 1);
    books[1] = createBook(102, "Data Structures", "Cormen", 2009, 1312, 0);
    books[2] = createBook(103, "Algorithms", "Sedgewick", 2011, 955, 1);

    printf(" Library Catalog \n");
    for (int i = 0; i < 3; i++) {
        printBook(books[i]);
    }

    printf("\n Search Result \n");
    Book* found = searchBook(books, 3, 101);
    if (found != NULL) {
        printBook(found);
    } else {
        printf("Book not found.\n");
    }

    for (int i = 0; i < 3; i++) {
        free(books[i]);
        books[i] = NULL;
    }

    return 0;
}
