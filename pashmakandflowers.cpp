
#include<bits/stdc++.h>
#include<iostream.h>
#include<conio.h>


using namespace std;
 int main()
{
 long long n;
 cin>>n;
 long long a[n];
 long long i,cnt=0,cnt1=0;
 for(i=0;i<n;i++){
     cin>>a[i];
 }
 
 long long d=a[n-1]-a[0];

 cout<<d<<" ";
 for(i=0;i<n;i++){
     if(a[i]==a[0])
      cnt++;
     if(a[i]==a[n-1])
      cnt1++;
 }
// cout<<cnt<<" "<<cnt1;
  if(cnt==1 && cnt1==1)
   cout<<(cnt+cnt1)/2;
   else if(a[0] == a[n - 1])
     cout<<(n-1)*n/2;
   else
    cout<<cnt*cnt1;
 return 0;   
}
