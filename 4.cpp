#include<iostream>
using namespace std;
//addition of elemets inside array
int main()
{
    int n,a[101];
    int sum=0;
    cout<<"Enter number of elements :";
    cin>>n;
    cout<<"Ente array elements: ";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        sum+=a[i];
    }
    cout<<"Sum of the elements are: "<<sum<<endl;
     return 0;
}