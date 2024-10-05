#include <stdio.h>
#define size 10
int que[size];
int front=-1, rear=-1;

void main()
{
    void insertque(int);
    int deleteque();
    int searchque(int);
    int opt, data;

    do
    {
        printf("1. Insert\n");
        printf("2. Delete\n");
        printf("3. Search\n");
        printf("4. Exit\n");

        printf("Enter your option: ");
        scanf("%d", opt);

        switch (opt)
        {
        case 1 : printf("Enter Data to be inserted\n");
                scanf("%d", data);
                insertque(data);
           
            break;
        
        case 2: data=deleteque();
                printf("");
        
        
        }
    } while (1);
    



}