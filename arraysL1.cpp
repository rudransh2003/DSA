#include <iostream>
#include <limits.h>
using namespace std;

//function to print an array
// void solve(int arr[],int size){
//     for(int i = 0; i < size; i++){
//         cout<<arr[i];
//     }
//     cout<<endl;

// }


//function for linear search
// bool linearsearch(int arr[],int size,int target){
//     bool flag = 0;
//     for (int i =0;i<size;i++){
//         if(arr[i]==target){
//             flag=1;
//             break;
//         }
//     }

    
//     if(flag==1){
//         cout<<"found";
//     }
//     else{
//         cout<<"Not Found";
//     }
//     return 0;  
// }


//function to count zeroes and ones
// void count (int arr[],int size){
    
//     for (int i=0;i<size;i++){
//         cout<<"Enter elements : ";
//         cin>>arr[i];
//     }
//     int zero=0;
//     int one=0;
//     int others=0;
//     for(int i=0;i<size;i++){
//         if(arr[i]==0){
//             zero++;
//         }
//         else if(arr[i]==1){
//             one++;
//         }
//         else{
//             others++;
//         }
//     }
    
//     cout<<"the number of zeroes are : "<<zero<<endl;
//     cout<<"the number of ones are : "<<one<<endl;
//     cout<<"the number of others are : "<<others<<endl;
// }


//function to find min in an array
// void compare(int arr[],int size){
//     for (int i=0;i<size;i++){
//         cout<<"Enter elements : ";
//         cin>>arr[i];
//     }
//     int min = INT16_MAX;
//     int max = INT16_MIN;
//     for(int i=0;i<size;i++){
//         if(arr[i]<min){
//             min=arr[i];
//         }
//         else if(arr[i]>max){
//             max=arr[i];
//         }
//         else{
//             continue;
//         }
//     }
//     cout<<"the minimum number is : "<<min<<endl;
//     cout<<"the maximum number is : "<<max;
// }


//Reverse an array
// void reverse(int arr[],int size){

//     for (int i=0;i<size;i++){
//         cout<<"Enter elements : ";
//         cin>>arr[i];
//     }

// int left = 0;
// int right = size-1;
 
// while(left<=right){
//     swap(arr[left],arr[right]);
//     left++;
//     right--;
// }

// for(int i =0;i<size;i++){
//     cout<<arr[i]<<endl;
// }

// }


int main(){

    // int arr[4]={1,2,3,4};
    // int size = 4;
    // int target = 3;

    // linearsearch(arr,4,3);
    // for (int i=0;i<n;i++){
    //     cout<<"Enter elements : ";
    //     cin>>arr[i];
    // }
    // int zero=0;
    // int one=0;
    // int others=0;
    // for(int i=0;i<n;i++){
    //     if(arr[i]==0){
    //         zero++;
    //     }
    //     else if(arr[i]==1){
    //         one++;
    //     }
    //     else{
    //         others++;
    //     }
    // }

    // cout<<"the number of zeroes are : "<<zero<<endl;
    // cout<<"the number of ones are : "<<one<<endl;
    // cout<<"the number of others are : "<<others<<endl;



    
    //Finding element
    // int arr[6]={2,4,6,8,10,12};
    // int target = 1;
    // bool flag = 0;

    // for(int i=0;i<6;i++){
    //     if(arr[i]==target){
    //         flag = 1;
    //         break;    
    //     }
    // } 

   

    // if(flag==1){
    //     cout<<"found";
    // }
    // else{
    //     cout<<"Not Found";
    // }
    

    //Sum of elements
//     int n;
//     cin>>n;
   
//     int arr[n];

//     for(int i=0;i<n;i++){
//         cout<<"Enter elements : ";
//         cin>>arr[i];
//     }
//  int sum = 0;
//     for(int i=0;i<n;i++){
         
//         sum = sum + arr[i];
       
//     }

//     cout<<sum;

// product of elements

// int n;
// cin>>n;

// int arr[n];

// for(int i=0;i<n;i++){
//     cout<<"Enter at "<<i<<"th position : ";
//     cin>>arr[i];
//   }
//   int prod=1;
//   for(int i=1;i<=n;i++){
//     prod = prod*i;
//   }
//   cout<<prod;


// int arr[5] = {1,2,3,4,5};
// int size = 5;

return 0;
}
