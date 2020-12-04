#include "header.h"
/**
 *main - main
 *Return: 0 in success
 */
int main(void)
{
	DIR *dir;
	struct dirent *read;

	dir = opendir("./");
	if (!dir)
	{
		perror("Couldn't find the directory");
	}

	while ((read = readdir(dir)) != NULL)
	{
		if (read->d_type != DT_UNKNOWN && *read->d_name != *".")
			printf("%s ", read->d_name);
	}
	closedir(dir);
	printf("\n");
	return (0);
}
