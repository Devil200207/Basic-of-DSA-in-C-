int sumOfDigits(int n) {
    // Write your code here
    if(n==0)
    {
        return 0;
    }
    int ans=sumOfDigits(n/10);
    int c=n%10;
    return ans+c;
    

}


