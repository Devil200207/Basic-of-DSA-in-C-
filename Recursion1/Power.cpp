int power(int x, int n) {
    if(n==0)
    {
        return 1;
    }
  /* Don't write main().
     Don't read input, it is passed as function argument.
     Return output and don't print it.
     Taking input and printing output is handled automatically.
  */
    int output=x*power(x,n-1);
    return output;

}
