
// #include <stdio.h>
// #include <string.h>
// #include <math.h>
// #include <stdlib.h>
// int main()
// {
//     long long i,n,r,q,ind,bind=-1,k;
//     scanf("%ld %ld %ld",&n,&r,&q);
//     while(r>n)
//     {
//         r=r-n;
//     }
//     long long arr[100000],brr[100000];
//     for(i=0;i<n;i++)
//     {
//         scanf("%ld",&arr[i]);
//     }
//     while(q>0)
//     {
//         scanf("%ld",&ind);
//         if(r%n==0)
//         {
//             printf("%ld\n",arr[ind]);
//         }
//         else
//         {
//             for(i=(n-r);i<n;i++)
//             {
//                 bind++;
//                 brr[bind]=arr[i];
//             }
//             k=n-bind;
//             for(i=0;i<k;i++)
//             {
//                 bind++;
//                 brr[bind]=arr[i];
//             }
//             printf("%ld\n",brr[ind]);
//         }
//         q--;
//     }
//     return 0;
    
// }
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    long n,k,q,i;
    long a[100000];
    scanf("%ld%ld%ld",&n,&k,&q);
    long r=k%n;
    for(i=r;i<n;i++)
        scanf("%ld",&a[i]);
    for(i=0;i<r;i++)
        scanf("%ld",&a[i]);
    for(i=0;i<q;i++)
    {
        scanf("%ld",&k);
        printf("%ld\n",a[k]);    
    }    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
