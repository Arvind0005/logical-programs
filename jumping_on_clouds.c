#include<stdio.h>
int main()
{
    int n,i,jump,indices=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[indices+2]!=1)
        {
        
            jump++;
            indices=indices+2;
        }
        else
        {
            jump++;
            indices++;
        }
       
        if(indices>=n-1)
        {
            break;
        }
    }
    printf("%d",jump--);
}
