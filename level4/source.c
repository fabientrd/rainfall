#include <stdio.h>
#include <stdlib.h>

int m;

void p(char *s){
	printf(s);
	return ;
}

void	n(){
	char s[520];

	fgets(s, 512, stdin);
	p(s);
	if (m == 16930116)
		system("/bin/cat /home/user/level5/.pass");
	return ;
}

int		main(void){
	n();
	return (0);
}
