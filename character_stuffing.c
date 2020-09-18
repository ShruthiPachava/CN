#include <stdio.h>
#include <string.h>

int main(){
    char str[20];
        printf("Enter string : ");
        scanf("%s", str);
	char start_del;
        printf("Enter starting delimiter : ");
        scanf(" %c", &start_del);
	char end_del;
        printf("Enter ending delimiter:");
        scanf(" %c", &end_del);
	char x[2], y[2],t[2], output[60] = "";
        x[0] = start_del;
        y[0] = end_del;
        strcat(output, x);
        for(int i = 0; i < strlen(str); i++)
        {   
            t[0] = str[i] ;
            if (t[0] == start_del)
                strcat(output, x);
            else if(t[0] == end_del)
                strcat(output, y);
            strcat(output, t);
        }
        strcat(output, y);
        printf("After stuffing:%s\n", output);
	return 0;

        
    }
