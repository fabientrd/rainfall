#include <stdlib.h>
#include <stdio.h>

void	n(){
	system("/bin/cat /home/user/level7/.pass");
	return ;
}

void	m(){
	puts("Nope");
	return ;
}

int		main(int ac, char **av){
	char *s;
	void (*f)(void);

	s = (char *)malloc(64);
	f = (void **)malloc(4);

	f = &m;
	strcpy(s, av[1]);

	f();
	return (0);
}
