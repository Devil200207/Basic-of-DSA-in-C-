bool isPalRec(char str[],int s, int e)
{
     
    
    if (s == e)
    return true;
 
    if (str[s] != str[e])
    return false;
 
   
    if (s < e + 1)
    return isPalRec(str, s + 1, e - 1);
 
    return true;
}

bool checkPalindrome(char input[]) {
 
    
    char *ch = input;
   int n= 0;
   while(*ch != '\0'){
      n++;
      ch++;
   }
     

    if (n == 0)
        return true;
     
    return isPalRec(input, 0, n - 1);

}


