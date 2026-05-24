#include <stdio.h>
#include <string.h>

struct library{
    char title[100];
    int year;
    char author[100];
};

int main() {
    int n, i, r;
    printf("Please enter how many books are there in the library: ");
    scanf("%d", &n);
    getchar();

    struct library books[n];
    char temp[100];

    for(i = 0; i < n; i++) {
        printf("\nEnter title for book %d: ", i+1);
        scanf(" %[^\n]", books[i].title);
        printf("Enter year: ");
        scanf("%d", &books[i].year);
        getchar();
        printf("Enter author: ");
        scanf(" %[^\n]", books[i].author);
    }

    char response;
    printf("\nPress q to quit or any other key to continue: ");
    scanf(" %c", &response);

    while(response != 'q' && response != 'Q') {
        printf("\n1 to search for a title\n2 to view a list of all books: ");
        scanf("%d", &r);
        while(r != 1 && r != 2){
            printf("Please enter a valid input: ");
            scanf("%d", &r);
        }

        if(r == 1){
            printf("\nEnter the title of the book you're looking for: ");
            getchar();
            scanf(" %[^\n]", temp);

            int found = 0;
            for(i = 0; i < n; i++){
                if(strcmp(books[i].title, temp) == 0){
                    found = 1;
                    printf("\nMatch found!\nTitle: %s\nAuthor: %s\nYear: %d\n",
                           books[i].title, books[i].author, books[i].year);
                    break;
                }
            }
            if(!found)
                printf("Sorry, no title matches your search\n");
        } else {
            printf("\nList of all books:\n");
            for(i = 0; i < n; i++)
                printf("%s\n", books[i].title);
        }

        printf("\nPress q to quit or any other key to continue: ");
        scanf(" %c", &response);
    }

    return 0;
}
