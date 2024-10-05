#include <stdio.h>
#include <stdlib.h>
#define size 10
int que[size];
int front=-1, rear=-1;

void main()
{

    //declaration area to declare any function
    void insertque(int);
    int deleteque();
    int searchque(int);
    int opt, data;

    do
    {
        printf("\n1. Insert\n");
        printf("2. Delete\n");
        printf("3. Search\n");
        printf("4. Exit\n");

        printf("Enter your option: ");
        scanf("%d", &opt);

        switch (opt)
        {
        case 1 : printf("Enter Data to be inserted\n");
                scanf("%d", &data);
                insertque(data);
           
            break;
        
        case 2: data=deleteque();
                printf("Deleted Data : %d", data);
                break;
        
        case 3: if(front!=rear)
                {
                         printf("Enter Data to search:");
                scanf("%d", &data);

                
                
                if (searchque(data))
                {
                    printf("Data Found \n");
                }
                else
                    printf("Not Found\n");

                } 

                else
                printf("Empty que");
        
       
                
                break;

        case 4: exit(0);
        
        }
    } while (1);
    



}







void insertque(int item)
{
    if (rear==size-1)
    {
        printf("Que is full\n");
    }
    else
     que[++rear] = item;
    
}




int deleteque()
{
    if (front==rear)
    {
        printf("Que is Empty\n");
        exit (0);
    }
    else
    return que[++front];
}



int searchque(int item)
{
    int tfront=front+1;
    
    while (tfront!=rear&& que[tfront]!=item)
    ++tfront;

        if (que[tfront]==item)
            return 1;
        return 0;
        
    
    
}
