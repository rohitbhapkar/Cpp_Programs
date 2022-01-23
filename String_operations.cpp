#include<iostream>
#include<string>
using namespace std;

int main()
{
    // Various ways of declaration

    string str;
    cout<<"Enter string: ";
    cin>>str; 

    string str1(5,'r');
    cout<<str1;

    string str2;
    getline(cin, str2);
    cout<<str2;

    //All Operations

    string s1 = "fam", s2 = "ily"; 
    s1.append(s2);
    cout<<s1<<endl;
    s1.clear();
    cout<<s1;
    cout<< s2.compare(s1)<<endl;

    string str7;
    str7.empty();

    string str8 = "rohitbhapkar";
    str8.erase(3,4);
    cout<<str8;

    string str9 = "rohitabhibhidsakarra";
    cout<<str9.find("dsa")<<endl;

    string str10 = "timepasskuchbhi";
    cout<<str10.insert(15, "anything")<<endl;
    cout<<str10.length()<<endl;
    cout<<str10.substr(3,6)<<endl;

    int str11 = 5;
    cout<<to_string(str11)<<endl;


    return 0;
}
