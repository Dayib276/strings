#include <stdio.h>
#include <string.h>

struct book {

char title[30];
char author[30];
int publication_year;
char ISBN[13];
float price;
};

int main()
{
   struct book myBook;
    strcpy(myBook.title,"Introduction to C programming");
    strcpy(myBook.author,"John Smith");
    myBook.publication_year=2022;
    strcpy(myBook.ISBN,"9780131103627");
    myBook.price=49.99;
    printf("Title:%s\n",myBook.title);
    printf("Author: %s\n",myBook.author);
    printf("Publication Year: %d\n",myBook.publication_year);
    printf("ISBN:%s\n",myBook.ISBN);
    printf("Price:$%.2f\n",myBook.price);

  //prompt the user to enter the book information
  printf("\nEnter the book details:\n");

  printf("Enter title:");
  fgets(myBook.title,30,stdin);

  printf("Enter author:");
  fgets(myBook.author,30,stdin);

  printf("Enter publication year:");
  scanf("%d",&myBook.publication_year);

  printf("Enter ISBN:");
  scanf("%s",&myBook.ISBN);

  printf("Enter price:");
  scanf("%f",&myBook.price);

// print the user-entered values of the fields
  printf("\nEnter Book Details:\n");
  printf("Title:%s",myBook.title);
  printf("Author:%s",myBook.author);
  printf("Publication Year:%d\n",myBook.publication_year);
  printf("ISBN:%s\n",myBook.ISBN);
  printf("Price:$%.2f\n",myBook.price);


    return 0;
}
