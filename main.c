#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>
#include <sys/types.h>
#include <sys/uio.h>


size_t ft_write(int fd, char *str, int nbyts);
size_t ft_strlen(char *str);
char *ft_strcpy(char *dst, char *src);
int ft_strcmp(char *str1, char *str2);
size_t ft_read(int fd, char *buff, int nbyts);
char *ft_strdup(char *str);


void strlenTest(char *str, char *mystr);
void strcpyTest(char *src, char *mysrc);
void strcmpTest(char *str1, char *str2);
void writeTest(int fd, char *str, int nbyts, int orgin);
void readTest(int fd, int nbyts, int orgn);
void strdupTest(char *str, int orgn);



void devide(int n, int help);
void coloredLine(int ln, int above);

int main(int argc, char **argv)
{
	//strlenTest(argv[1], argv[2]);
	//strcpyTest(argv[1], argv[2]);
	//strcmpTest(argv[1], argv[2]);
	//writeTest(atoi(argv[1]), argv[2], atoi(argv[3]), 1);
	//readTest(atoi(argv[1]), atoi(argv[2]), 1);
	//strdupTest(argv[1], 1);
	
}


// start strdup test
/*
void strdupTest(char *str, int orgn)
{
	char *ret = NULL;

	if (orgn)
	{
		coloredLine(20, 1);
		printf("ret before %s.\n", ret);
		ret = strdup(str);
		printf("ret after %s\n", ret);
		coloredLine(20, 1);
	}else
	{
		coloredLine(20, 0);
		printf("ret before %s.\n", ret);
		ret = ft_strdup(str);
		printf("ret after %s\n", ret);
		coloredLine(20, 0);
	}
}

*/

// read Test
/*
void readTest(int fd,  int nbyts, int orgn)
{
	char *buff = malloc(20);
	buff[0] = 0;

	if (orgn)
	{
		coloredLine(20, 1);
		printf("errno before |%d| message is |%s| buff before {%s}\n", errno, strerror(errno), buff);
		int ret = read (fd, buff, nbyts);
		printf("buff after {%s}\n", buff);
		printf("return value is %d\n", ret);
		printf("errno after  |%d| message is %s\n", errno, strerror(errno));
		coloredLine(20, 1);
	}
	else {
		coloredLine(20, 0);
		printf("errno before |%d| message is |%s| buff before {%s}\n", errno, strerror(errno), buff);
		int myret = ft_read (fd, buff, nbyts);
		printf("buff after {%s}\n", buff);
		printf("return value is %d\n", myret);
		printf("errno after  |%d| message is %s\n", errno, strerror(errno));
		coloredLine(20, 0);
	}
}
*/


// write test
/*
void writeTest(int fd, char *str, int nbyts, int origin)
{
	if (origin)
	{
		coloredLine(20, 1);
		printf("errno before |%d| message is %s\n", errno, strerror(errno));
		int ret = write (fd, str, nbyts);
		printf("\n");
		printf("return value is %d\n", ret);
		printf("errno after  |%d| message is %s\n", errno, strerror(errno));
		coloredLine(20, 1);
	}
	else
	{
		coloredLine(20, 0);
		printf("errno before |%d| message is %s\n", errno, strerror(errno));
		int myret = ft_write (fd, str, nbyts);
		printf("\n");
		printf("return value is %d\n", myret);
		printf("errno after  |%d| message is %s\n", errno, strerror(errno));
		coloredLine(20, 0);
	}
}	
*/



// strcmp test
/*
void strcmpTest(char *str1, char *str2)
{
	coloredLine(20, 1);
	printf("Orgin strcmp %d\n", strcmp(str1, str2));
	coloredLine(20,1);

	devide(20, 1);

	coloredLine(20, 0);
	printf("my  strcmp %d\n", ft_strcmp(str1, str2));
	coloredLine(20,0);
}

*/



// starting of strlen test

void strlenTest(char *str, char *mystr)
{
	printf("origin strlen |%lu|\n", strlen(str));
	devide(10, 1);

	printf("my     strlen |%lu|\n", ft_strlen(mystr));
}



// starting of strcpy test
/*
void strcpyTest(char *src, char *mysrc)
{
	char *dst, *mydst;

	dst = malloc(10);
	mydst = malloc(10);

	dst[0] = 0;
	mydst[0] = 0;

	coloredLine(30, 1);
	printf("dst before |%s|.\n", dst);
	printf("return value is {%s}\n", strcpy(dst, src));
	printf("dst after |%s|.\n", dst);
	coloredLine(30, 1);

	devide(20, 1);
	
	coloredLine(30,0);
	printf("dst before |%s|.\n", mydst);
	printf("return value is {%s}\n", ft_strcpy(mydst, mysrc));
	printf("dst after |%s|.\n", mydst);
	coloredLine(30,0);
}
*/




void devide(int len, int help)
{
	int i;

	i = 0;
	if (help)
		printf("\n\n\n");
	while (i < len)
	{
		printf("=");
		i++;
	}
	if (help)
		printf("\n\n\n");
	else
		printf("\n");
}

void coloredLine(int ln, int above)
{
	if (above)
		printf("\033[0;32m");
	else
		printf("\033[0;33m");
	devide(ln, 0);
	printf("\033[0m");
}
