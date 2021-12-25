
int countZeros(int n) 
{
    // Write your code here
   
   if(n==0)
   return 0;
    else{
   int d=n%10;
   if(d==0)
   {
       return countZeros(n/10)+1;
   }
   else{
       countZeros(n/10);
   }
    }
       
        
}
