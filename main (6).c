#include <stdio.h>
#include "strings.c"
int main(){
    char *text, res[BUFSIZ], *sWhat="/", *sWith="\\" ;
  	input(text);
    int ch = check(text);
    if(ch == -1){
	    puts(text);
    	char *t = "cygdrive/";
    	int start =  0;
    	while(start >= 0){
			start = strindex(text, t, start);
			if(start != -1){
    			text[start + 8] = text[start + 9] - 32;
    			text[start + 9] = ':';
    			start += 1;
			}
    	}    		
    	char *sWhat2="/cygdrive", *sWith2="";
		sreplace(text, sWhat2, sWith2, res);
		puts(res);
    	char *sWhat3="cygdrive", *sWith3="";
		sreplace(res, sWhat3, sWith3, res);
		puts(res);
		sreplace(res, sWhat, sWith, res);    	
    	puts(res);
   	}else
		printf("Error input");	
	return 0;
}
