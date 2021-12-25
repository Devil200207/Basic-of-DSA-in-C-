int sum(int input[], int n) {
    if(n==0)
    {
        return 0;
    }
    if(n==1)
    {
        return input[0];
    }
   
    int ans=sum(input+1,n-1);
    return ans+input[0];
    
    
  /* Don't write main().
     Don't read input, it is passed as function argument.
     Return output and don't print it.
     Taking input and printing output is handled automatically.
  */

}
