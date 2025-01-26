#include<iostream>
using namespace std;
int main(){
    int arr1[4][3];
    int arr2[4][3]={{1,2,3},{1,2,3},{1,2,3},{1,2,3}};
    int arr3[4][3];
   
   
    cout<<"Enter the value of first array:";
    for(int i=0;i<4;i++){
        for(int j=0;j<3;j++){
              cin>>arr1[i][j];
        }
        
    }

 for(int i=0;i<4;i++){
        for(int j=0;j<3;j++){
              cout<<arr1[i][j];
        }
        cout<<endl;
    }
     for(int i=0;i<4;i++){
        for(int j=0;j<3;j++){
            arr3[i][j]=arr1[i][j]+arr2[i][j];
        }
     }

      for(int i=0;i<4;i++){
        for(int j=0;j<3;j++){
            cout<<arr3[i][j]<<"\t";
        }
        cout<<endl;
      }

     }