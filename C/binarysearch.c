#include<stdio.h>
int main()
{
   int i, f, l, mid, n, search, array[100];
   printf("Enter number of elements:\n");
   scanf("%d",&n); 
   printf("Enter %d integers:\n", n);
   for (i = 0; i < n; i++)
      scanf("%d",&array[i]); 
   printf("Enter the value to find:\n");
   scanf("%d", &search);
   f = 0;
   l = n - 1;
   middle = (f+l)/2;
   while (f <= l) {
      if (array[mid] < search)
         f = mid + 1;    
      else if (array[mid] == search) {
         printf("%d is at position %d.\n", search, mid+1);
         break;
      }
      else
         l = mid - 1;
      mid = (f + l)/2;
   }
   if (f > l)
      printf(" %d is not present in the list.\n", search);
   return 0;  
}
