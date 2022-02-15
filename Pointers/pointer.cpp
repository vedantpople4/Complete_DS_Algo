#include<iostream>
using namespace std;

int main()
{

    char temp[6] = "abcde";
    int arr[5] = {1,2,3,5,4};
    cout<<arr<<endl;

    int *ptr = &arr[0];
    cout<<ptr<<endl;
    cout<<*ptr<<endl;
    cout<<&ptr<<endl;

    cout<<*ptr+2<<endl;
    cout<<(*ptr+3)<<endl;
    cout<<(*ptr)+2<<endl;

    cout<<temp<<endl;
    
    char *c = &temp[0];
    cout<<*c<<endl;
    cout<<c<<endl;
    cout<<&c<<endl;

    char tem = 'z';
    char *z = &tem;
    cout<<*z<<endl;
    cout<<z<<endl;



    return 0;
}