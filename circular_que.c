#include <stdio.h>
#include <stdlib.h>
#define SIZE 10
int que[SIZE];
int front=0, rear=0;

void main()
{
    void insertq(int);
    void deleteq();
    int searchq(int);
    int opt, data;

    do
    {
        printf("\n 1.Insert");
        printf("\n 2.Delete");
        printf("\n 3.Search");
        printf("\n 4.Exit");
        
        printf("\n Your Option: ");
        scanf("%d", &opt);

        switch (opt)
        {
        case 1: printf("\n Enter data");
                scanf("%d", &data);
                insertq(data);
            
            break;

        case 2: deleteq();
                break;
        
        
        case 3: 
        
            if (front==rear){
                printf("Empty Que\n");
                exit(0);
            }
            else{
                printf("\n Enter value to search:");
                scanf("%d", &data);
                if (searchq(data))
                
                    printf("FOUND\n");
                
                else
                printf("NOT FOUND");
            }
                
            break;

        case 4:  exit(0);
        }

    } while (1);
    

}





void insertq(int data)
{
    int trear = (rear +1) % SIZE;
    if(trear==front)
    
        printf("\nQue Full");
    
    else
        rear = trear;
        que[rear] = data;
    
}





void deleteq()
{
    if (front==rear)
    printf("\n Empty Queue");
    else
    {
        front=(front +1) % SIZE;
        printf("\n [%d] is deleted from queue" , que[front]);

    }
}



int searchq (int item)
{
    int tfront;
    tfront=(front+1) % SIZE;
    while(tfront!=rear && que [tfront]!= item)
        tfront = (tfront+1) % SIZE;
    if (que [tfront]==item)
        return 1;
    else
        return 0;
}