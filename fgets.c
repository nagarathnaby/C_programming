// gets used for strings and to enter with space between them
#include <stdio.h>

int main() {
    char book[20];
    printf("Enter the book name :\n");
    fgets(book, 20, stdin);
    printf("The book entered is %s",book);
    return 0;
}
