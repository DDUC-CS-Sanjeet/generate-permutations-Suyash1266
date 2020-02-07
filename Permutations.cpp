#include <iostream>
using namespace std;
int i=0;
void swap(char a[],int p1,int p2)
{
    int temp=a[p1];
    a[p1]=a[p2];
    a[p2]=temp;
}
void print_permutation(char a[],int index,int end)
{
    if(index==end)
        cout<<++i<<" "<<a<<endl;
    else
    {
        for(int i=index;i<=end;i++)
        {
            swap(a,index,i);
            print_permutation(a,index+1,end);
            swap(a,index,i);
        }
    }
}
int main()
{
    int n;
    cout<<"\nEnter the number of characters\n";
    cin>>n;
    char a[n];
    for(int i=0;i<n;i++)
        a[i]='a'+i;
    print_permutation(a,0,n-1);
}