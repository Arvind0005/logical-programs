#include<stdio.h>
int main()
{
    int i,egl=100,n,k,s=-1;
    scanf("%d %d",&n,&k);
    int c[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&c[i]);
        s++;
        if(k==n)
        {
            egl=98;
            break;
        }
        if(s==k)
        {
           // printf("x");
            egl--;
            if(c[i]==1)
            {
             //   printf("s");
                egl=egl-2;
            }
            if((i+k)==n)
            {
                if(c[0]==1)
                {
                    egl=egl-2;
                }
                break;
            }
            else if((i+k)>(n-1) && i!=n-1)
            {
                i=(n-1)-i;
                i=k-i;
                i--;
                egl--;
                if(c[i]==1)
                {
                    //   printf("s");
                    egl=egl-2;
                }
            }
            else if(i==(n-1))
            {
                i=k;
                i--;
                egl--;
                if(c[i]==1)
                {
                    //   printf("s");
                    egl=egl-2;
                }
            }
            s=0;
        }
        // if((i+k)>(n) && n%k!=0)
        // {
        //    i=s++; 
        // }
    }
    egl--;
    printf("%d",egl);
    // for(i=k;i<n;i+k)
    // {
    //     egl--;
    //     if(c[i])
    //     {
    //         egl-2;
    //     }
    // }
    // egl--;
    
    // printf("%d",egl);
    
}

