#include <iostream>

using namespace std;
int i,n;

class student
{

    private:string name[10];
        int id[10];
        char sec[10];
    public:void student_Details();
           void display();
};
void student::student_Details()
{
    for(i=0;i<n;i++)
    {
        cout<<"Name=";
        cin>>name[i];
        cout<<"ID=";
        cin>>id[i];
        cout<<"Section=";
        cin>>sec[i];
    }
}
void student::display()
{
    cout<<"Name\tID\tSection"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<name[i]<<"\t"<<id[i]<<"\t"<<sec[i]<<endl;
    }
}
int main()
{
    student obj;
    cout<<"Enter the number of students"<<endl;
    cin>>n;
    obj.student_Details();
    obj.display();
    return 0;
}
