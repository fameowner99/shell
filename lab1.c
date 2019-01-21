#include "lab1.h"

void parse_argv(int argc, char **argv)
{
	int option;
	int index;
	Options s_opt;
	s_opt.fileFlags = 0;
	s_opt.verbose = 0;
	while ((option = getopt_long(argc, argv, short_opts,longOpts, &index)) != -1)
	{
		switch(option)
		{
			case 'r':
				SETBIT(s_opt.fileFlags, 0);
				break;
			case 'w':
				SETBIT(s_opt.fileFlags, 1);
				break;
			case 'c':
				break;
			case 'v':
				s_opt.verbose = 1;
				break;
			default:
				printf("ERROR\n");
				break ;
		}
		if (s_opt.verbose && strcmp(longOpts[index].name,"verbose") != 0)
		{
			s_opt.verbose = 0;
			printf("%s\n",longOpts[index].name);
			if (optarg)
				printf(" %s\n", optarg);
		}
		if (argc > optind && argv[optind][0] != '-')
			printf("%s\n", argv[optind]);

	}
}

int main(int argc, char **argv)
{
	parse_argv(argc, argv);
	return (0);
}