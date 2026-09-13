#include <iostream>
using namespace std;

//  DO NOT CHANGE
int square(int x){
    return x*2;
}

int main(){
    // ba estefade az tabe square adad ra be tavan 256 beresun 
    int x = 4;
    for (int sozg = 1; sozg <128;sozg++) 
{
    x = square(x);
    cout << "natije = "<< x <<endl;
} 
return 0;
}