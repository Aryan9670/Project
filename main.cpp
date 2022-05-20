#include<iostream>
using namespace std;
void add(){
    int n1,n2;
    int sum=0;
    cout<<"enter two number 1 and 2(with spaces)";
    cin>>n1>>n2;
    sum=n1+n2;
    cout<<sum<<endl;


}
void subtract(){
    int n1,n2;
    int subtract=0;
    cout<<"enter two number 1 and 2(with spaces)";
    cin>>n1>>n2;
    subtract=n1-n2;
    cout<<subtract<<endl;
    
}
int main(){
    cout<<"Welcome to basic calculator"<<endl;
    cout<<endl;
    cout<<"1.add two number"<<endl;
    cout<<"2.subtract two number"<<endl;
    int n;
    cin>>n;
    switch(n){
        case 1:
        add();
        break;
        case 2:
        subtract();
        break;
        default;
        cout<<"please type the correct number"<<endl;
        break;

    }

}