#include<stdio.h>
int main()
{
    int t, n, c = 0;
    printf("Enter a sorted sequence\n");
    scanf("%d",&n);
    t = n;
    while(n!=-1)
    {
        if(t!=n)
            c++;
        t = n;
        scanf("%d",&n);
    }
    printf("Distinct elements in the sequence = %d",c+1);
    return 0;
}
