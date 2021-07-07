#include<stdio.h>
int main()
{
    int n,length=0,j,templength=0,i;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(arr[j]==arr[i] ||arr[j]==arr[i]-1)
            {
                templength++;
                if(templength>length)
                {
                    length=templength;
                }
            }
        }
        templength=0;
    }
    printf("%d",length);
}

