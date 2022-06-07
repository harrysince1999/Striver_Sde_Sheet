#include <bits/stdc++.h> 
void sort012(int *arr, int n)
{
   int s=0, mid=0, e=n-1;
   while(mid<=e)
   {
        switch(arr[mid])
        {
            case 0:
                swap(arr[s++],arr[mid++]);
                break;
            case 1:
                mid++;
                break;
            case 2:
                swap(arr[mid],arr[e--]);
                break;
        }
   }
}
