#include <iostream>
#include <cstdlib>
#include <string>
#include <ctime>
using namespace std;
string x[]={"A","B+","B","C+","C","D+","D","F","W"};
int i=0,g;
int main(){
    srand(time(0));
    cout << "Press Enter 3 times to reveal your future.";
    while(i<3){
        cin.get();
        i++;
    }
    g=rand()%9;
    cout << "You will get "<<x[g]<< " in this 261102.";
    return 0;
}