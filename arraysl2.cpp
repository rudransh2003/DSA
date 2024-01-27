#include <iostream>
using namespace std;
  
    //Program to find unique element
// int unique(int arr[],int size)
//     {
//       for(int i = 0; i<size; i++)
//     {
//         cout<<"Enter number : ";
//         cin>>arr[i];
//     }

//     int ans=0;
//     for (int i = 0; i < size; i++)
//     {
//         ans=ans^arr[i];
//     }
//     return ans;
// }

int main(){

    //function call
//     int n;
//    cin>>n;
//     int arr[n];

//     int k = unique(arr,n);
//     cout<<k;
    

  //Program to print all pairs
//   int n;
//   cin>>n;
//   int arr[n];
//    for(int i =0;i<n;i++){
//     cout<<"Enter : ";
//     cin>>arr[i];
//   }
//   for(int i =0;i<n;i++){
//     for(int j=0;j<n;j++){
//         cout<<"{"<<arr[i]<<","<<arr[j]<<"}";
//     }
//     cout<<endl;
//   }


  //Program to print all triplets
//   int n;
//   cin>>n;
//   int arr[n];

//    for(int i =0;i<n;i++){
//     cout<<"Enter : ";
//     cin>>arr[i];
//   }
//   for(int i=0;i<n;i++){
//     for(int j=0;j<n;j++){
//         for(int k=0;k<n;k++){
//             cout<<arr[i]<<","<<arr[j]<<","<<arr[k]<<endl;
//         }
        
//     }
//   }


  //Program to sort 0 and 1
int n;
cin>>n;
int arr[n];

for(int i =0;i<n;i++){
    cout<<"Enter element : ";
    cin>>arr[i];
}

int zero=0;
int one=0;

for(int i=0;i<n;i++){
    if(arr[i]==0){
        zero++;
    }
    else{
        one++;
    } 
}

cout<<zero<<endl;
cout<<one<<endl;












return 0;
}