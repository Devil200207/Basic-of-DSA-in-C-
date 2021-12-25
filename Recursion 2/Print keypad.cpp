#include <iostream>
#include <string>
using namespace std;

void printKeypad(int num, string output=" "){
    /*
    Given an integer number print all the possible combinations of the keypad. You do not need to return anything just print them.
    */
    string mapping[]={" "," ", "abc","def", "ghi","jkl","mno","pqrs","tuv","wxyz" };
    if(num==0)
    {
        cout<<output<<endl;
        return;
    }
    int n = num%10;
    string s1 = mapping[n];
    int len = mapping[n].length();
 
    for (int i = 0; i < len; i++) {
        printKeypad(num/10, s1[i]+ output);
    }
    
}