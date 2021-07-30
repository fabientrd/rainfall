#include <unistd.h>
#include <string.h>
#include <stdlib.h>

int		main(int ac, char **av){
	int i;
	char buf[40];

	i = atoi(av[1]);
	if (i > 9)
		return (1);
	memcpy(buf, av[2], i * 4);
	if (i == 0x574f4c46)
		execl("/bin/sh", "sh", 0);
	return (0);
}
