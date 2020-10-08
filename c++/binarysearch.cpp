#include <iostream>
using namespace std;

int main()
{
	int count, i, arr[10], num, f, l, mid;
	cout<<"put no of elements"; 
        cin>>count;

	for (i=0; i<count; i++)
	{
		cout<<"Enter number "<<(i+1)<<": "; 
                cin>>arr[i];
	}
	cout<<"Enter the number that you want to search:"; 
        cin>>num;
	f = 0;
	l = count-1;
	mid = (f+l)/2;
	while (f <= l)
	{
	   if(arr[mid] < num)
	   {
		f = mid + 1;

	   }
	   else if(arr[mid] == num)
	   {
		cout<<num<<" element is at the location "<<mid+1<<"\n"; 
                break; 
           } 
           else { 
                l = mid - 1; 
           } 
           mid = (f + l)/2; 
        } 
        if(f > l)
	{
	   cout<<num<<" not found";
	}
	return 0;
}
