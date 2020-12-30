#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int N,c;
    cout<<"Enter the limit of this fibonacci series ";
    cin>>N;
    int sum[2];
    sum[0]=sum[1]=1;
    cout<<sum[0]<<" "<<sum[1];
    for(int i=0;i<N-2;i++)
    {
       c=sum[1];
       sum[1]=sum[0]+sum[1];
       sum[0]=c;
       cout<<" "<<sum[1];
    }
}
