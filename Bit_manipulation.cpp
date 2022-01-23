#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int getBit(int n, int i){
    return ((n&(1<<i))!=0);
}

int setBit(int n, int i){
    return (n|(1<<i));
}

int clearBit(int n, int i){
    int mask =  ~(1<<i);
    return (n & mask);
}

int main()
{
    cout<<"the person is: "<<getBit(5,2)<<endl;
    cout<<"the person2 is: "<<setBit(5,1)<<endl;
    cout<<"the person3 is: "<<clearBit(5,2);
    return 0;
    
}
