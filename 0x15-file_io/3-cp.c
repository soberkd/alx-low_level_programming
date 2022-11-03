#include "main.h"

/**
 * main -  program that copies the content of a file to another file
 * @argc: arguement count
 * @argv: arguement values
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int fd1, fd2, wrt, rd;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(2, "Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}
	fd1 = open(argv[1], O_RDONLY);
	rd = read(fd1, buf, 1024);
	if (fd1 == -1 || rd == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd2 = open(argv[2], O_CREAT | O_RDWR | O_TRUNC, 0664);
	if (fd2 == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[2]);
		exit(98);
	}
	wrt = write(fd2, buf, rd);
	if (wrt == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	if (close(fd1) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd1);
		exit(100);
	}
	if (close(fd2) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd2);
		exit(100);
	}
	exit(0);
}

