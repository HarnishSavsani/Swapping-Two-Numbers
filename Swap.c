#include<stdio.h>
#include<stdlib.h>
void swap(int *, int *);
int main()
{
    int a,b;
    system("color fd");
    printf("Enter Two number:");
    scanf("%d%d",&a,&b);
    printf("\nBefore swap:\n");
    printf("A= %d and B= %d\n\n",a,b);
    swap(&a,&b);
    system("color fa");
    printf("After swap:\n");
    printf("A= %d and B= %d\n",a,b);
    return 0;
}
void swap(int *x, int *y)
{
    *x=*x+*y;
    *y=*x-*y;
    *x=*x-*y;

}
