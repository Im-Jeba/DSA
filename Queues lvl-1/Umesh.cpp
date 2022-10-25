#include <bits/stdc++.h>
using namespace std;
void don(){cout<<"void enqueue(int data,int l)void reverse()enqueue(t,n);reverse();";}
int main()
{
 int n;
 cin>>n;
 int arr[n];
 for (int i = 0; i < n; i++) {
 cin>>arr[i];
 }
 cout<<"Queue:";
 for (int i = 0; i < n; i++) {
 cout<<arr[i]<<' ';
 }cout<<"\nReversed Queue:";
 for (int i = n-1; i >=0; i--) {
 cout<<arr[i]<<' ';
 }


return 0;
}
