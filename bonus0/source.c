#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>

char	*p(char *buf, char *s){
	char	buffer[4096];

	puts(s);
	read(0, buffer, 4096);
	*strchr(buffer, '\n') = 0;
	return (strncpy(buf, buffer, 20));
}

char	*pp(char *buf){
	int i;
	char s1[20];
	char s2[20];
	
	p(s1, " - ");
	p(s2, " - ");
	strcpy(buf, s1);
	i = strlen(buf);
	/*
		add	   eax,DWORD PTR [ebp+0x8]
		movzx  edx,WORD PTR [ebx]
		mov    WORD PTR [eax],dx
	*/
	buf[i] = ' ';
	buf[i + 1] = 0;
	return (strcat(buf, s2));
}

int		main(){
	char buf[42];

	pp(buf);
	puts(buf);
	return (0);
}
