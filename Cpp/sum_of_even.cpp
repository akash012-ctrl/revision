#include<iostream>
using namespace std;

int main(){
    int num = 0;
    cout<<"enter the number to caluclate the sum of even numbers upto n (inclusive)"<<endl;
    cin>>num;
    int result =0;
    for(int i=1;i<=num;i++){
        if(i%2==0){
            result+=i;
        }
    }
    //TODO
    
    cout<<"sum of even numbers upto n (inclusive) "<<result<<endl;
}