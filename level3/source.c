#include <stdlib.h>
#include <stdio.h>

int m;

void	v(){
	char s[520];

	fgets(s, 512, stdout);
	printf(s);
	if (m == 64){
		fwrite("Wait what?!\n", 1, 12, stdout);
		system("/bin/sh");
	}
	return ;
}

int		main(void){
	v();
	return (0);
}
