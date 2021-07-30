#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <string.h>

char s[68];

void	m(void){
	printf("%s - %d\n", s, (int)time(0));
	return ;
}

int		main(int ac, char **av){
	int *s1, *s2;
	FILE *f;
	s1 = malloc(8);
	s1[0] = 1;
	s1[1] = (int)malloc(8);
	s2 = malloc(8);
	s2[0] = 2;
	s2[1] = (int)malloc(8);
	strcpy((char *)s1[1], av[1]);
	strcpy((char *)s2[1], av[2]);
	f = fopen("/home/user/level8/.pass","r");
	fgets(s, 68, f);
	puts("~~");
	return (0);
}
