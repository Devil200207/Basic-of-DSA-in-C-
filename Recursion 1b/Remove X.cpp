// Change in the given string itself. So no need to return or print anything
#include<string.h>
void removeX(char input[]) {
    // Write your code here
    int j, n = strlen(input);
    for (int i = j = 0; i < n; i++)
        if (input[i] != 'x')
            input[j++] = input[i];
 
    input[j] = '\0';

}
