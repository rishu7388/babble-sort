 #include<iostream>
using namespace std;
int main()
{
    int a[5];
    int temp,n;
    cout<<"enter the range\n";
    cin>>n;
    cout<<"Array befour sorting\n"<<"";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-1;j++)
        {
            if(a[j]<a[j+1])
            {
                temp=a[j+1];
                a[j+1]=a[j];
                a[j]=temp;

            }
        }
    }
    cout<<"after sorting :\n";
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<"";
    }

}
