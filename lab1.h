
#ifndef LAB1_H

# define LAB1_H

#include <stdio.h>
#include <getopt.h>
#include <string.h>
#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>

#define SETBIT(VAL, NUM) (VAL = VAL | (1 << (NUM)))

static struct option longOpts[] = {

		{"rdonly", no_argument, NULL, 'r'},
		{"wronly", no_argument, NULL, 'w'},
		{"command", required_argument, NULL, 'c'},
		{"verbose", no_argument, NULL, 'v'}
};
const char* const short_opts = "rwc:v";

typedef struct	s_options
{
	int			fd[3000];
	int			fileFlags;
	int			verbose;

}				Options;

#endif