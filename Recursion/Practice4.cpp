#include<iostream>
using namespace std;

void reachHome(int src , int dest){
    cout << " Source is " << src << "  Destination is " << dest << endl;
    if(src == dest){
        return;
    }

    src++;
    reachHome(src,dest);
}

int main(){
    int start ; 
    cout << "Enter the starting point : " ;
    cin >> start;
    int stop;
    cout << "Enter the destination point : ";
    cin>>stop;

    reachHome(start , stop);



}