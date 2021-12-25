/*
#include<math.h>
#include<string.h>
#include<bits/stdc++.h>
int stringToNumber(char input[]) {
    // Write your code here
    char *ch = input;
   int count = 0;
   while(*ch != '\0'){
      count++;
      ch++;
   }
    if(count==1)
    {
        return (input[0]-'0');
    }
     
    double ans=stringToNumber(input.substr(1));
    
    double x=input[0]-'0';
    
    x= x* pow(10,count-1)+ans;
    return int(ans);
}
*/

int length(char input[])
{
    int len = 0;
    for (int i = 0; input[i] != '\0'; i++)
    {
        len++;
    }
    return len;
}

int stringToNumber(char input[], int last)
{
    if (last == 0)
    {
        return input[last] - '0';
    }
    int smallAns = stringToNumber(input, last - 1);
    int a = input[last] - '0';
    return smallAns * 10 + a;
}

int stringToNumber(char input[])
{
    int len = length(input);
    return stringToNumber(input, len - 1);
}
