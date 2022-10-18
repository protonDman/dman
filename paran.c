#include<stdio.h>

struct node
{
    char data;
    struct node *next;


};
void push(int x)
{
   struct node*t = new node;
    if(t==NULL)
        {
            printf("stack overflow\n");
        }
    else
        {
            t->data=x;
            t->next=top;
            top=t;

        }
}

int pop()
{
    node*p;
    int x = -1;
    if(top==NULL)
        {
            printf("stack underflow\n");
        }
    else
        {
            p = top;
            top=top->next;
            x=p->data;
            free(p)
        }
        return x;

}

int peek(int pos)
{
    node*p=top
    for(int i = 0; p!=NULL&&i<pos-1; i++)
        {
            p=p->next;
            if(p!=NULL)
                {
                    return p->data;
                }
            else
                return -1;
        }

}
int main()
{
    push(10);
    push(30);
    push(20);

    printf("%d",pop());
}
