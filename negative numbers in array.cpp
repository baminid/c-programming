#include <stdio.h>
int main()
{
    int a[1000],c=0,i,n;
   
    printf("Enter size of the array :");
    scanf("%d", &n);
 
    printf("Enter elements in array :");
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
 
     for(i=0; i<n; i++)
    {
         
        if(a[i] < 0)
         c++;
    }
         printf("  no  of negative numbers  in array: %d",c);

 
    return 0;
}
