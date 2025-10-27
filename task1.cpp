#include<iostream>
using namespace std;
int main()
{
    int num,i,j;
    cout<<"enter a number: ";
    cin>>num;
    for(i=1;i<=num;i++)
    {
        for(j=i;j<=i; j++)
        {
            if(j%4==0)
            cout<<j *10;
            else
            cout<<j;

        }
        if(i<num)
        cout<<",";
    }
    cout<<endl;
    return 0;
}

    
    
        

