// FizzBuzz Test Code.
//Checks multiples of 3 and 5.
#include <iostream>
#include <string>
using namespace std;

string check_multiple(int);
int main()
{
 
 for(int i=0; i<100; ) 
    cout<<check_multiple(++i)<<endl;
 
}

string check_multiple(int num) 
{
    string val=to_string(num);
    if(num%3==0 || num%5==0) val = "Fizz";
    
    return val;
}

