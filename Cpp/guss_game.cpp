#include<iostream>
#include<cstdlib>

using namespace std;
int main(){
    int random_num = rand();
    
    cout<<"enter the number to guess it"<<endl;
    while (1){
        int human_num = 0;
        cin>>human_num;
        if(random_num<human_num){
            cout<<"Too high"<<endl;
        }
        else if(random_num>human_num){
            cout<<"Too low"<<endl;
        }
        else{
            cout<<"you guess it right"<<endl;
            break;
        }
    }
    
    return 0;
}