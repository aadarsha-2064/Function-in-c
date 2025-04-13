#include<stdio.h>
struct book
{
    int book_id;
    char book_name[50];
    char book_publication[50];
    int book_price;
};
int main()
{
    struct book b[3];
    int i;
    FILE *fp;
    fp = fopen("book.txt","w");
    for(i=0; i<3 ; i++)
    {
        printf("enter book id:");
        scanf("%d",&b[i].book_id);
        printf("enter book name: ");
        scanf("%s",b[i].book_name);
        printf("enter a book publication:");
        scanf("%s",b[i].book_publication);
        printf("enter book price");
        scanf("%d",&b[i].book_price);
        fprintf(fp," book id=%d\nbook name=%s\nbook publication=%s\nbook price=%d",b[i].book_id,b[i].book_name,b[i].book_publication,b[i].book_price);
    }
        fclose(fp);
    fp= fopen("book.txt","r");
    
    while ((fscanf(fp," book id=%d\nbook name=%s\nbook publication=%s\nbook price=%d",&b[i].book_id,b[i].book_name,b[i].book_publication,&b[i].book_price)!=EOF))
       {
       fprintf(fp," book id=%d\nbook name=%s\nbook publication=%s\nbook price=%d",b[i].book_id,b[i].book_name,b[i].book_publication,b[i].book_price);
       }

    fclose(fp);
    
    return 0;

}
