#include<iostream>
#include<math.h>
using namespace std;
void add(){
    int n1,n2;
    int sum=0;
    cout<<"enter two number 1 and 2(with spaces):";
    cin>>n1>>n2;
    sum=n1+n2;
    cout<<n1<<"+"<<n2<<"="<<sum<<endl;


}
void subtract(){
    int n1,n2;
    int subtract=0;
    cout<<"enter two number 1 and 2(with spaces):";
    cin>>n1>>n2;
    subtract=n1-n2;
    cout<<n1<<"-"<<n2<<"="<<subtract<<endl;


}

void power(){
    int x;
    int n,power=1;
    int first,last=0;

    cout<<"enter the base number:"<<endl;
    cin>>n;
    cout<<"enter the exponent of number:"<<endl;
    cin>>x;
    cout<<n<<"^"<<x<<"=";
    while(x!=0){
        power*=n;
        x--;


    }
    cout<<power;


}
void fact(){
    int i;
    int fact=1;
    cout<<"enter the number for factorial:";
    cin>>i;
    cout<<i<<"!"<<"=";

    while(i!=0){
        fact*=i;
        i--;


    }
    cout<<fact;
}
void Modulus(){
    int x;
    int n;
    double modulus=0.00;
    cout<<"enter the number for numerator:";
    cin>>x;
    cout<<"enter the number in denominator:";
    cin>>n;
    modulus=x%n;
    cout<<x<<"%"<<n<<"="<<modulus<<endl;

}
void div(){
    double num1,num2;
    cout<<"enter the numerator:";
    cin>>num1;
    cout<<"enter the denominator:";
    cin>>num2;
    double result=num1/num2;
    cout<<num1<<"/"<<num2<<"="<<result<<endl;
}
void mult(){
    double num1,num2;
    cout<<"enter the first number:";
    cin>>num1;
    cout<<"enter the second number:";
    cin>>num2;
    int result=num1*num2;
    cout<<num1<<"*"<<num2<<"="<<result<<endl;
}
int main(){
    cout<<"Welcome to basic calculator"<<endl;
    cout<<endl;
    cout<<"there is number of operation you can do please select from this one"<<endl;
    cout<<"1.add two number"<<endl;
    cout<<"2.subtract two number"<<endl;
    cout<<"3.power of a number"<<endl;
    cout<<"4.factorial of a number"<<endl;
    cout<<"5.modulus of a number"<<endl;
    cout<<"6 divison of a number"<<endl;
    cout<<"7 multiplication of a number"<<endl;
    int n;
    cin>>n;
     switch(n){
        case 1:
        add();
        break;
        case 2:
        subtract();
        break;
        case 3:
        power();
        break;
        case 4:
        fact();
        break;
        case 5:
        Modulus();
        break;
        case 6:
        div();
        break;
        case 7:
        mult();
        break;
        default:
        cout<<"please type the correct number"<<endl;
        break;

    }

}
//abcefd
//

