#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>

int main(int ac, char **av){
	int i;
	char **s;
	uid_t uid;
	gid_t gid;

	i = atoi(av[1]);
	if (i == 423){
		s[0] = strdup("/bin/sh");
		s[1] = NULL;
		gid = getegid();
		uid = geteuid();
		setresgid(gid, gid, gid);
		setresuid(uid, uid, uid);
		execv("/bin/sh", s);
	}
	else{
		fwrite("No !\n", 1, 5, stderr);
	}
	return (0);
}
