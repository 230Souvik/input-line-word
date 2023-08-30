#include <iostream>

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    int ml=100;
    string li[ml];
    int nl;
    cout<<"enter no. of line";
    cin>>nl;
    if(nl>=ml)
        cout<<"invalid i/p"<<endl;
    cout<<"enter word in 1st & 2nd line";
    cin.ignore();
    getline(cin,li[0]);
    getline(cin,li[1]);
    for(int i=2;i<nl;i++){
        li[i]=li[i-2]+li[i-1];
    }
    cout<<"fill pages"<<endl;
     for(int i=0;i<nl;i++){
        cout<<li[i]<<endl;
    }
    return 0;
}
