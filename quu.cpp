#include<iostream>
using namespace std;
struct employee{
    string name;
    int id;
    float salary;
   
};
void inputemploydata(employee *ptr){
    cout<<"Enter the name:";
    cin>>ptr->name;
    cout<<"enter id:";
    cin>>ptr->id;
    cout<<"Enter salary:";
    cin>>ptr->salary;

}
void showvalues(employee *ptr){
    cout<<"name: "<<ptr->name<<endl;
    cout<<"ID"<<ptr->id<<endl;
    cout<<"salary"<<ptr->salary<<endl;

}
int main(){
     employee *pointer = new employee;
   
    inputemploydata(pointer);
    showvalues(pointer);
    delete pointer;
    return 0;
}