#include <iostream>

using namespace std;

int main()
{
    int n,i;
    cout<<"Enter the size of the array"<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter the array elements"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int count=0;
    for(i=0;i<n;i++)
    {
        if(a[i]!=0)
        {
            a[count++]=a[i];
        }
    }
    while(count<n)
    {
        a[count++]=0;
    }
    cout<<"The array is"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<a[i];
    }
    return 0;
}
