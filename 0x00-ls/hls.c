#include "header.h"

int hls(void)
{
	DIR *dir;
	struct dirent *read;

	/**
	*arguments[1000];
	*files[1000];
	*/

	dir = opendir(".");
	if (!dir)
	{
		perror("Couldn't find the directory");
	}

	while ((read = readdir(dir)) != NULL)
	{
		if (read->d_type != DT_UNKNOWN)
			printf("%s ", read->d_name);
	}
	closedir(dir);
	return (0);
}
