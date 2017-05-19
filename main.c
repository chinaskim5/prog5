#include <stdio.h>
#include "strings.c"
int main(){
    char *text, res[260], *sWhat="/", *sWith="\\";
  	text = input();
  	int i = 0;
    int ch = 0;
    ch = check(text);
    printf("%d",ch);
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
    	sreplace(text,sWhat,sWith,res);
    	char *sWhat2="\cygdrive", *sWith2="";
    	sreplace(res, sWhat2,sWith2,res);
    	puts(res);
    	char *sWhat3="cygdrive", *sWith3="";
    	sreplace(res, sWhat3, sWith3,res);
    	puts(res);
    	puts(res);
	
   	}else
		printf("Error input");	
	return 0;
}
