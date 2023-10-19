// Online C++ compiler to run C++ program online
#include <iostream>
#include <cstdlib>
#include<ctime>
using namespace std;

int main() {
    srand((unsigned int) time(NULL));
  
    int number = (rand() % 100)+1;
    int guess = 0;
    
    do
    {
        cout<<"guess the number";
        cin>>guess;
        if (guess<number){
            cout<<"guess is too low"<<endl;
        }
        else if (guess>number){
            cout<<"guess is too high"<<endl;
        }
        else{
            cout<<"correct!!"<<endl;
        }
        
        
    }while (guess!=number);
    return 0;
}