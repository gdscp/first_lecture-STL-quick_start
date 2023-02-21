#include <cstdio>
#include <iostream>
#include <bitset>
using namespace std;
int main(){
    //bitset<const size> name;
    //000 ... 0000
    //|---size---|

    //bitset<const size> name(intial_value);
    bitset<32> A(7);
    A[7]=1;
    cout<<A<<endl;

    //getting number of ones and zeroes
    int number_of_1 = A.count();
    int number_of_0 = A.size()-number_of_1;
    cout<<"ones: "<<number_of_1<<" zeroes: "<<number_of_0<<endl;
    // bits to unsigned long 
    unsigned long num = A.to_ulong();
    cout<<num<<endl;

    A.set(10,1); // sets bit 10 to 1 
    cout<<A<<endl;

    A.set(); // sets all bits to 1
    cout<<A<<endl;

    A.reset(3); // sets bit 3 to 0
    cout<<A<<endl;

    A.flip(); // flips all bits
    cout<<A<<endl;

    if(A.any())cout<<"there are some set bits"<<endl;
    if(!A.none())cout<<"there are some set bits"<<endl;

    bitset<32> B(7);
    bitset<32> C(5);
    cout<<"B: "<<B<<"\nC: "<<C<<"\n====================================\n";
    B=B&C;//111 & 101 = 101
    cout<<"B: "<<B<<"\nC: "<<C<<"\n====================================\n";
    B[1]=1;//101 -> 111
    B=B|C;//111 | 101 = 111 
    cout<<"B: "<<B<<"\nC: "<<C<<"\n====================================\n";

    return 0;
}
