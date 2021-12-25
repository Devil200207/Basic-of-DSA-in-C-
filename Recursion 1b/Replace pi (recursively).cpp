// Change in the given string itself. So no need to return or print anything
void replacePiHelper(char str[], int start)
{
 
    
    if (str[start] == '\0' || str[start + 1] == '\0') {
        return;
    }
 
    replacePiHelper(str, start + 1);
 
    if (str[start] == 'p' && str[start + 1] == 'i') {
        char *ch = str;
     int count = 0;
   while(*ch != '\0'){
      count++;
      ch++;
   }
 
        
      
   for (int i = count; i >= start + 2; i--) {
            str[i + 2] = str[i];
        }
      
        str[start] = '3';
        str[start + 1] = '.';
        str[start + 2] = '1';
        str[start + 3] = '4';
    }
}
void replacePi(char input[]) {
	// Write your code here
    replacePiHelper(input, 0);

}


