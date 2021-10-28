# Author : Ved Prakash Bhaskar
# Concept : fibonacci search is an efficient searching algorithm which works on sorted array of length n. it is a comparison-based algorithm and it returns the index 
#  of an element , which we want to search in array and if that element is not there then it returns -1 .

// GITHUB PROBLEM : https://github.com/iamvpbhaskar


# 1. Input:  arr[]  =  {20, 30, 40, 50, 60}, x  =  50

    # Output:  3

# Element x is present at index 3.
# Fibonacci search is an efficient search and comparison-based algorithm.

## Implementation of fibonacci search in C – language


#include<stdio.h>
 #include<conio.h>
 /* This function used to find mininum of given number */
 int min(int x, int y)
 {
     return (x<=y)? x : y;
 }
 /* Returns index of x if present,  else returns -1 */
 int fibonaccianSearch(int arr[], int x, int n)
 {
     /* Here fibonacci numbers are initializing*/
     int fbK2 = 0;   // (k-2)'th Fibonacci number
     int fbK1 = 1;   // (k-1)'th Fibonacci number
     int fbK = fbK2 + fbK1;  // k'th Fibonacci
     // Marks the eliminated range from front
     int offset = -1;
     /* fbK is going to store the smallest Fibonacci
        number greater than or equal to n */
     while (fbK < n)
     {
         fbK2 = fbK1;
         fbK1 = fbK;
         fbK  = fbK2 + fbK1;
     }
     while (fbK > 1)
     {
     // Check if fbK2 is a valid location
     int i = min(offset+fbK2, n-1);
     /* If x is greater than the value at index fbK2,
        cut the subarray array from offset to i */
     if (arr[i] < x)
     {
         fbK  = fbK1;
         fbK1 = fbK2;
         fbK2 = fbK - fbK1;
         offset = i;
     }
     /* If x is greater than the value at index fbKk2,
        cut the subarray after i+1  */
     else if (arr[i] > x)
     {
         fbK  = fbK2;
         fbK1 = fbK1 - fbK2;
         fbK2 = fbK - fbK1;
     }
     /* element found. return index */
     else return i;
     }
     /* comparing the last element with x */
     if(fbK1 && arr[offset+1] == x)
     return offset+1;
     /*element not found. return -1 */
     return -1;
 }
 /* main function */
 int main(void)
 {
     int l,i;
     printf("\nEnter the total number of elements:");
     scanf("%d",&l);
     int arr[l];
     printf("Enter elements in array\n");
     for(i=0;i<l;i++)
     {
     scanf("%d",&arr[i]);
     }
     int n = sizeof(arr)/sizeof(arr[0]);
     int x;
     printf("\nEnter element to be searched:");
     scanf("%d",&x);
     printf("Found at index: %d",fibonaccianSearch(arr, x, n));
     getch();
     return 0;
 } 



// Output: -

// Enter the total number of elements:10 Enter elements in array

// 2 4 8 13 15 18 20 24 27 30

// Enter element to be searched: 24

//Found at index: 7

## Time Complexity 

// The time complexity of fibonacci search in worst case is O( log n) which is similar to the time complexity of binary search ,
// and the space complexity of fibonacci search is O(n).
