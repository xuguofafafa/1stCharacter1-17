//C�����������1-17
#include <stdio.h>
//�����г��ȵ������
#define MAXLINE 1000
//��ȡ������г���
int getLine(char line[],int length);

int main(){
	char currentLine[MAXLINE];
	int len = 0;
	while((len = getLine(currentLine,MAXLINE)) > 0){//��ǰ�г��ȴ���0����ʾ����Ч
		if(len > 80){
			printf("���ȴ���80����Ϊ��%s\nĿǰ���еĳ���Ϊ%d\n",currentLine,len);
		}else{
			printf("��ǰ�г���Ϊ%d��δ����80��\n",len);
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