bool checkNumber(int input[], int size, int x) {
    if(size==0)
    {
        return false;
    }
    if(input[0]==x)
    {
        return true;
    }
    else if(input[1]==x)
    {
        return true;
    }
    else false;
     
     bool ans=checkNumber(input+1,size-1,x);
    
    return ans;
  /* Don't write main().
     Don't read input, it is passed as function argument.
     Return output and don't print it.
     Taking input and printing output is handled automatically.
  */

}
