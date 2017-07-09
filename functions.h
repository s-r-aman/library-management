#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"structures.h"


void logIn(){    //TO LOGIN THE SYSTEM
    char pass[] = "hackmeifyoucan" , inputPass[30];
    int i = 0;
    printf("Enter the password : ");

    for(i = 4; i>0; i--){
        fflush(stdin);
        gets(inputPass);
        if (strcmp(inputPass,pass) == 0){
        break;
        }else{
            //printf("Try again , You Have %d chances left",(i-1));
            if ((i-1) != 0){
                system("cls");
                printf("Wrong password, try again , You Have %d chances left\n",(i-1));

            }else{
                system("cls");
                printf("Sorry Your chances are over");
                exit(0);
            }
        }
    }

    system("cls");
    /*char cp[8]={0,0,0,0,0,0,0,0},ch;
    int i = 0;
    FILE *fp;
    fp = fopen("password.txt","r");

    if (fp == NULL){
        printf("Error in opening File");
        exit(0);
    }
    while (!feof(fp)){
        ch = fgetc(fp);
        cp[i] = ch;
        i++;
    }
    fclose(fp);
    puts(cp);
    char psi[8] = {0,0,0,0,0,0,0,0};
    fflush(stdin);
    gets(psi);
    puts(psi);

    if (strcasecmp(cp,psi) == 0){
        printf("Congrats");
    }else{
        printf("none");
    }*/
}

int firstPageF() {
    int c;
    system("cls");

    printf("\t Enter your Choice -\n\n");

    printf("1. Add Book\n");
    printf("2. Delete Book\n");
    printf("3. Search Book\n");
    printf("4. Issue Book\n");
    printf("5. View Book List\n");
    printf("5. Edit Books Record\n");\
    printf("5. Close App\n\n\n\t\t");

    scanf("%d",&c);

    return c;
}

void addBooksF(){
    system("cls");

    struct addBookS book;

    printf("Enter Book Name : \t");
    fflush(stdin);
    gets(book.bookName);
    printf("\n\nEnter Book Subject : \t");
    fflush(stdin);
    gets(book.subject);
    printf("\n\nEnter Book Author : \t");
    fflush(stdin);
    gets(book.author);
    printf("\n\nEnter Book ID : \t");
    scanf("%d",&book.bookId);
    printf("\n\nEnter Book Quantity : \t");
    scanf("%d",&book.quantity);
    printf("\n\nEnter The RackNo. : \t");
    scanf("%d",&book.rackNo);
}
