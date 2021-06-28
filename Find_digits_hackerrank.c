#include<stdio.h>
int main()
{
    int i,n,x,t,z,count=0;
    scanf("%d",&t);
    while(t!=0)
    {
        scanf("%d",&n);
        x=n;
        while(x!=0)
        {
            if(x==1)
            {
                count++;
            }
            else
            {
                z=x%10;
                if(z!=0 && n%z==0)
                {
                    count++; 
                }  
            }
            x=x/10;
        }
        printf("%d \n",count);
        count=0;
        
        t--;
    }
}

