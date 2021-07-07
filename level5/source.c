#include <stdio.h>
#include <stdlib.h>

int m;

void	o(){
	system("/bin/sh");
	return ;
}

void	n(){
	char s[520];

	fgets(s, 512, stdin);
	printf(s);
	exit(1);
}

int		main(void){
	n();
	return (0);
}
