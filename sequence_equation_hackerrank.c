#include<stdio.h>
int main()
{
    int n,i,j,k,l=0,m=1,tempi=0,sub;
    scanf("%d",&n);
    int p[n],t[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&p[i]);
        t[i]=0;
    }
    for(i=0;i<n;i++)
    {
    for(j=0;j<n;j++)
       {
         //  printf("s");
          // m=j+1;
           if(p[j]==m)
           {
               //printf("d");
               tempi=j+1;
               for(k=0;k<n;k++)
               {
                  // printf("x");
                   if(tempi==p[k])
                   {
                     //  printf("z");
                       sub=k+1;
                       t[l]=sub;
                       l++;
                       m++;
                    //   if(l!=n)
                    //   {
                    //       printf("w");
                    //       j=0;
                    //   }
                   }
               }
           }
   }}
       
    for(i=0;i<n;i++)
    {
        printf("%d",t[i]);
    }
}

