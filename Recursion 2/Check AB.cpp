#include<string>
#include<iostream>
using namespace std;

bool checkAB(char input[],int start)
{
     if(input[start] == '\0')
    {
        return true;
    }
    if(input[start] !='a')
    return false;
   
    if(input[start+1] != '\0' && input[start+2] != '\0')
    {
        if(input[start+1] == 'b' && input[start+2] == 'b')
        {
            return checkAB(input,start+3);
        }
    }
    return checkAB(input,start+1);
}

bool checkAB(char input[]) {
    bool ans;
    ans = checkAB(input,0);
    return ans;
}


    
    
    
    



