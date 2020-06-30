#include<iostream>
#include<conio.h>
using namespace std;
void sum(int *a,int *b)
{
    cout<<"sum = "<<(*a)+(*b);
}
int main()
{
    int a,b;
    cout<<"enter your 2 number"<<endl;
    cin>>a>>b;

    sum(&a,&b);
    return 0;

}
