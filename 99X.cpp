#include<iostream>
using namespace std;
int main(){
    for(int i=2;i<10;i++){
        for(int j=2;j<10;j++){
            cout << j << "X" << i << "=" << i*j << "\t";
        }
        cout << endl;
    }
    return 0;
}