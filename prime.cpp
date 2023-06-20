#include<iostream>
using namespace std;
bool is_prime(int num){
    if(num<=1){
        return false;
    }
    if(num==2){
        return true;
    }
    for(int i=2;i<num;i++){
        if(num%i==0){
            return false;
        }
    }

    return true;
}

int main(){
    int num1;
    cout<<"enter the number you want to check for it's prime or not a prime number "<<endl;
    cin>>num1;
    if(is_prime(num1)){
        cout<<" your number "<<num1<<" is a prime number "<<endl;
    }
    else{
        cout<<"your number "<<num1<<" is not a prime number "<<endl;
    }
    return 0;
}