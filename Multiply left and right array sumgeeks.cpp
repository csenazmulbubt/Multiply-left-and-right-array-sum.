#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n],sum=0,a1,a2;
        vector<int> v;
        vector<int> v1;
       for(int i=0;i<n;i++){
        cin>>arr[i];
       }
       a1=0;
        a2=0;
        int x=0;
        x=(n/2);
        for(int i=0;i<x;i++)
            a1+=arr[i];
        for(int j=x;j<n;j++)
            a2+=arr[j];
       printf("%d\n",a1*a2);

}









}
