#include <iostream>
using namespace std;
int main(){
      int n,a[100],i;
      int min;
      cout<<"Enter size of array : ";
      cin>>n;
      cout<<"Enter elements : ";
      for(i=0;i<n;i++){
        cin>>a[i];
      }
      min=a[0];
       for(int i=0;i<n;i++)
    {
        if(a[i]<min)
        {
            min=a[i];
        }
    }
    cout<<"The lowest Number : "<<min<<endl;
    return 0;
}