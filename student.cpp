#include<iostream>
using namespace std;
struct student{
    int rollnumber;
    string name;
    int  marks[3];
    int totalmarks;
};
student input(){
        student stu;
        cout<<"ROLL_NUMBER: ";
        cin>>stu.rollnumber;
        cout<<"Name: ";
        cin>>stu.name;
        cout<<"MARKS: ";
        for (int i = 0; i < 3; i++) {
        cin >> stu.marks[i];
    }
      return stu;

}
student total(student stu){
    
    stu.totalmarks=0;
    for(int i=0;i<3;i++){
        stu.totalmarks += stu.marks[3];
        cout<<"Total marks"<<stu.totalmarks;
        return stu.totalmarks;

    }
    
}
int main(){

    student students[10];
    for(int i=0;i<3;i++){
        cout<<"Enter the details of student"<<i+1<<":"<<endl;
       students[i]=input();
    }

     stu.totalmarks=0;
    for(int i=0;i<3;i++){
        student[i].totalmarks += students.marks[3];
        cout<<"Total marks"<<stu.totalmarks;
        return students[i].totalmarks;

    }

}