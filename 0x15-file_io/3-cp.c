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
	int fd1, fd2, wrt, rd, close_fd1, close_fd2;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n"
				, argv[0]);
		exit(97);
	}
	fd1 = open(argv[1], O_RDONLY);
	if (fd1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n"
				, argv[1]);
		exit(98);
	}
	fd2 = open(argv[2], O_CREAT | O_RDWR | O_TRUNC, 0664);
	if (fd2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n"
				, argv[2]);
		exit(98);
	}
	rd = read(fd1, buf, 1024);
	wrt = write(fd2, buf, rd);
	if (wrt == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	close_fd1 = close(fd1);
	if (close_fd1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd1);
		exit(100);
	}
	close_fd2 = close(fd2);
	if (close_fd2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd2);
		exit(100);
	}
	return (0);

}
