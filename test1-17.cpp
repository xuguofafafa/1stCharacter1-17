//C程序设计语言1-17
#include <stdio.h>
//定义行长度的最长限制
#define MAXLINE 1000
//获取输入的行长度
int getLine(char line[],int length);

int main(){
	char currentLine[MAXLINE];
	int len = 0;
	while((len = getLine(currentLine,MAXLINE)) > 0){//当前行长度大于0，表示行有效
		if(len > 80){
			printf("长度大于80的行为：%s\n目前该行的长度为%d\n",currentLine,len);
		}else{
			printf("当前行长度为%d，未超过80！\n",len);
		}
	}
}

int getLine(char s[],int lim){
	int i;
	char c;
	for(i = 0 ; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; i ++){
		s[i] = c;
	}
	if(c == '\n'){
		s[i] = c;
		i ++;
	}
	s[i] = '\0';
	return i;
}