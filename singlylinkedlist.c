#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node * link;
};



int main(){
    struct node *start  =(struct node *)0;
    struct node *insert(struct node *, int);
    struct node *delete(struct node *);
    void display(struct node *);
    int opt, data;
    
    do{
        printf("\n1.Insert\n");
        printf("\n2.Delete\n");
        printf("\n3.Display\n");
        printf("\n4.Exit\n");
        printf("Your option : ");
        scanf("%d", &opt);
        
        switch (opt)
        {
        case 1: printf("Enter the data: ");
                scanf("%d", &data);
                start = insert(start, data);
                break;
        case 2: start=delete(start);
                break;
        case 3: display(start);
                break;
        case 4: exit(0);
    
        }
    }while (1);
 
}
 


struct node * insert (struct node * s, int item)
{
    struct node * t = (struct node * )malloc(sizeof(struct node));
    t->data=item;
    t->link=s;
    return t;
}


struct node * delete(struct node * s)
{
    struct node * t=s;
    if (s!=(struct node *)0){
        printf("\n [%d] deleted \n", t->data);
        s=s->link;
        free(t);
    }
    else
    {
        printf("\n Empty list\n");
        
    }
    return s;
}



void display(struct node* s)
{
    if (s==(struct node*)0){
        printf("\n List is empty");
        return ;
    }
    printf("\n List elements :\n");
    while (s!=(struct node*)0)
    {
        printf("%d\t", s-> data);
        s=s->link;
    }
    printf("\n");
    
}