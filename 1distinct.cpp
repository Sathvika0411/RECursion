#include<iostream>
#include<set>
using namespace std;
int main(){
   int n;
   cin>>n;
   int a[n];
   for(int i=0;i<n;i++){
    cin>>a[i];
   }

   set<int>distinct;

   for(int i=0;i<n;i++){
    distinct.insert(a[i]);
   }
   cout<<distinct.size()<<endl;
   return 0;

}