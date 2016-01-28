/*mylib.c*/

#include <stdio.h>
#include <unistd.h>
#include <errno.h>
#include <string.h>

	//функция для pwdx
char buff[1024];

char * mypwd (char* arg1pwd, char * buff, size_t limit)
{
	//формируем строки процесса
	char gdeproc[256] = "/proc/";
	char* argumentpwd = arg1pwd;
	char* skleika = strcat(strcat(gdeproc,argumentpwd),"/cwd");
	//делаем системный вызов
	int func = readlink (skleika, buff, limit);
	buff[func] = '\0';
	return buff;
}
