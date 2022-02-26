#include <iostream>

using namespace std;

int main()
{
    int arr[5],*p;
    cout<<"\n Enter elements:";
    for(int i=0;i<5;i++)
    {
        cin>>arr[i];
    }
    p=arr;
    cout<<"\n You entered:";
    for(int i=0;i<5;i++)
    {
        cout<<*p<<endl;
        p++;
    }
    return 0;
}
