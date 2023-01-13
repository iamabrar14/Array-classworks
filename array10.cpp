#include <iostream>
using namespace std;
int main(){
      int n,a[100],i;
      int max=0;
      cout<<"Enter size of array : ";
      cin>>n;
      cout<<"Enter elements : ";
      for(i=0;i<n;i++){
        cin>>a[i];
      }
       for(int i=0;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    cout<<"The highest Number : "<<max<<endl;
    return 0;
}