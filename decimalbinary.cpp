//decimal to binary conversion
// #include <iostream>
// using namespace std;

// int main() {
//     int decimal;
//     cout << "Enter a decimal number: ";
//     cin >> decimal;

//     if (decimal == 0) {
//         cout << "Binary equivalent: 0" << endl;
//         return 0;
//     }

//     int binary[32]; // Array to store binary digits (up to 32 bits for an int)
//     int i = 0;

//     while (decimal > 0) {
//         binary[i] = decimal % 2;
//         decimal = decimal / 2;
//         i++;
//     }

//     cout << "Binary equivalent: ";
//     for (int j = i - 1; j >= 0; j--) {
//         cout << binary[j];
//     }
//     cout << endl;

//     return 0;
// }
//bvinary to decimal
// #include<iostream>
// #include<math.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int ans=0;
//     int i=0,rem;
//     while(n!=0){
//         rem=n%10;
//         n=n/10;
//         ans+=rem*pow(2,i);
//         i++;
//     }
//     cout<<ans<<endl;
// }
#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    float n;
    cout<<"Enter the number: "<<endl;
    cin>>n;
    cout<<"number to roundoff is: "<<fixed<<setprecision(2)<<n<<endl;

}



