// $ g++ factorial.c++ -o factorial
// $ ./factorial


#include<iostream>
#include<cstdio>
using namespace std;

int factorial(int n){
    cout<<"Serial No ---"<<n<<"\n";
    if(n==0){
        return 1;
    }
    int factorial_count=n*factorial(n-1);
    cout<<"factorial are .... "<<factorial_count<<"\n";
    return factorial_count;
}


int main(){
    int n;
    cout<<"Give me a n : ";
    cin>>n;
    int result=factorial(5);
    cout<<result;

}

