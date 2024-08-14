#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    int divisor, remainder;
    string reverseNumber, b;
    divisor=75;
    while(divisor>=1){
        remainder=divisor%2;
        divisor/=2;
        reverseNumber=to_string(remainder)+reverseNumber;
    }

        // reverse(reverseNumber.begin(), reverseNumber.end());
    cout<< "value:"<< reverseNumber<< endl;
    return 0;
}
