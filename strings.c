#include <stdio.h>
int slen(const char *str) { //������ ������
    int size = 0; 
    while (str[size] != '\0') 
    size += 1;
    return size ; 
}

int stok(char *str, char *ch){//����������� � ������������������ �������
	int i, idx = -1;
	for(i=0;(str[i] != '\0') && (&str[i] != ch); i++);
	if( &str[i] == ch )
		idx = i;
	return i;
}



char *find_ch(char *str, char c) {//����� �������
    if(*str == c || !(*str)) {
        return str;
    }
    
    char *cur = str;
    while(*(++cur)) {
        if(*(cur) == c){
            break;
        } 
    }
    
    return cur;
}

int sncmp(char *text1, char *text2, int len){//��������� �����
	int i;
	for(i = 0; i < len; ++i){
		if(text1[i] != text2[i]){
			return -1;
		}
	}
	return 0;
}

void scpy(char *text1, char *text2){//����������� ������
	int i = slen(text2);
	for(; i >= 0; i--){
		text1[i] = text2[i];
	}
}

void sreplace(char *text, char *sWhat, char *sWith, char *res){//������ ���������
	char *a = text, *b = res;
	int len = slen(sWhat);
	for(; *b=*a; ++a, ++b){    	
        if(!sncmp(a, sWhat, len)){
            scpy(b, sWith);
            a+=slen(sWhat)-1;
            b+=slen(sWith)-1;
        }
    }
}

int input_delim(int delim){
	printf("Input delim\n");
	int y = scanf("%d", delim);
	if(!y)
		return -1;
	return delim;
}

void input(char* text){
	printf("Input string\n");
	gets(text);
}

int check(char *text){
	int len = slen(text);
	int i;
	for(i = 0; i < len; ++i){
		if(text[i] == '\\' );
			return -1;		
	}
	return 0;
}

int strindex(char s[], char t[], int i)
{
    int j, k;
    
    for(i; s[i]!='\0'; i++) {
       for(j=i, k=0; t[k]!='\0' && s[j]==t[k]; j++, k++)
          ;
       if(k>0 && t[k]=='\0')
          return i;
    }
    return -1;
}
