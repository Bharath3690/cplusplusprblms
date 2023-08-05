// #include<iostream>
// using namespace std;
// int main(){
//     int arr[5];
//     int count=0;
//     int n;
//     cin>>n;
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }

//     for(int i=0;i<n;i++){
//         //cout<<arr[i]<<" ";
//         count++;
//     }
//     cout<<count<<endl;
// }
// #include<iostream>
// using namespace std;
// void insert(int arr[],int pos,int num,int n){
//     for(int i=n-1;i>=pos-1;i--){
//         arr[i+1]=arr[i];
   
//     }
//     arr[pos-1]=num;
//     n++;

// }
// void insertatbegin(int arr[],int pos,int num,int n){
//     for(int i=n-1;i>=0;i++){
//         arr[i+1]=arr[i];
//     }
//     arr[0]=num;
//     n++;
// }
// void insertatend(int arr[],int num,int n){

//         arr[n]=num;
//         n++;
    
// }
// int main(){
//     int n;
//     cin>>n;
//     int arr[50];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int pos,num;
//     //cin>>pos,num;
//     //insert( arr,3,12,5);
//     insertatend(arr,66,5);
//     for(int i=0;i<=n;i++){
//         cout<<arr[i]<<" ";
//     }
// }
#include<iostream>
using namespace std;
void deleteele(int arr[],int pos,int n){
    for(int i=pos-1;i<n-1;i++){
        arr[i]=arr[i+1];
    }
    n--;


}
void deletebe(int arr[],int n){
    for(int i=0;i<n-1;i++){
        arr[i]=arr[i+1];
    }
    n--;

}
void deleteend(int arr[],int n){
    n--;
}
int main(){
    int n;
    cin>>n;
    int arr[50];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int pos;
    //deleteele(arr,3,5);
   // deletebe(arr,4);
   deleteend(arr,4);
    for(int i=0;i<n-1;i++){
        cout<<arr[i]<<" ";
    }
}