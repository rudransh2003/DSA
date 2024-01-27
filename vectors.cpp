#include <iostream>
#include <vector>
using namespace std;

  //function to print a vector
  void print(vector<int>v){
    int size = v.size();
    for(int i=0;i<size;i++){
        // cout<<v[i]<<endl;
        cout<<v.at(i)<<endl;
    }
  }


int main(){

//    Vectors
   vector<int>v;

//    v.push_back(1);
//    v.push_back(2);
//    v.push_back(3);
//    v.push_back(4);

int n;
cin>>n;
for(int i=0;i<n;i++){
    int d;
    cout<<"Enter elements : ";
    cin>>d;
    v.push_back(d);
}

print(v);

// for(int i=0;i<5;i++){
//    v.push_back(80);
// }

// print(v);








return 0;
}