#include "header.h"

void hls(char *arguments, char *files)
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
		return ();
	}

	while ((read = readdir(dir)) != NULL)
	{
		if (read->d_type != DT_UNKNOWN)
			printf("%s ", read->d_name);
	}
	closedir(dir);
}
