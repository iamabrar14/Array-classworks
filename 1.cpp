#include <iostream>
using namespace std;
int main(){
     int a[100],n,i;
     cout<<"Enter array size : ";
     cin>>n;
     cout<<"Enter elements : "<<endl;
     for(i=0;i<n;i++){
        cin>>a[i];
     }
     cout<<"Elements are :"<<endl;
     for(i=0;i<n;i++){
        cout<<a[i]<<" "<<endl;
     }
     
     return 0;


}