//square shape no printing....
#include <stdio.h>
int main()
{
    int n;
    printf("enter the no. :");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        printf("\n");
        for(int i=1;i<=n;i++)
        {
            printf("* ");
        }
    }
    return 0;
}