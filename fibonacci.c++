#include<iostream>
using namespace std;

int fibonnaci(int n){
    cout<<"Fibonacci Number is at the starting : "<<n<<"\n";
    if(n<2){
        return n;
    }
    int f =fibonnaci(n-1) + fibonnaci(n-2);
    cout<<"Fibonacci Number <<<<: "<<n <<" is "<<f<<"\n";
    return f;
}

int main(){
    int n;
    cout<<"please give me fibonacci series ";
    cin>>n;

    int f=fibonnaci(n);
    cout <<"the fibonnaci no is "<<f<<"\n";
}