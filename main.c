#include <stdio.h>
int main(int argc, char *argv[])
{
    int i,j,k;
    scanf("%2d",&k);
    for(i=1;i<=k;i++)
    {
        for(j=3;j>=i;j--)
        {
            printf("  ");
        }

        for(j=1;j<=2*i-1;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    for(i=1;i<=(k-1);i++)
    {
        for(j=1;j<=(i+1);j++)
        {
            printf("  ");
        }
        for(j=3;j>=2*i-1;j--)
        {    printf("* ");
        }
        putchar(10);
    }

}


int main03()
{
    int i,j,k;

    for(i=1;i<=5;i++)
    {
        for(j=1;j<=2*i-1;j++)
        {
            printf("* ");
        }
        putchar(10);
    }
}








int main02()
{
    int i,j,k;
    scanf("%d",&k);
    for(i=1;i<=k;i++)
    {
        for(j=1;j<=2*i-1;j++)
        {
            printf("* ");
        }
        putchar(10);
    }
}















int main01(int argc, char *argv[])
{
    int i,j,k;
    for(i=1;i<=3;i++)
    {
        for(j=3;j>=i;j--)
        {
            printf("  ");
        }

        for(j=1;j<=2*i-1;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    for(i=1;i<=2;i++)
    {
        for(j=1;j<=(i+1);j++)
        {
            printf("  ");
        }
        for(j=3;j>=2*i-1;j--)
        {    printf("* ");
        }
        putchar(10);
    }

}
