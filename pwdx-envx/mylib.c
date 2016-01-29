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
	char sLink[256] = "/proc/";
	char* argumentpwd = arg1pwd;
	char* master = strcat(strcat(sLink,argumentpwd),"/cwd");
	//делаем системный вызов
	int func = readlink (master, buff, limit);
	buff[func] = '\0';
	return buff;
}

	//Функция Для envx
char * myenv (char* arg1env)
{
	char sLink2[256] = "/proc/";
	char* argumentenv = arg1env;
	char* master2 = strcat(strcat(master2,argumentenv),"/environ");
        FILE *ptr_file;
        ptr_file = fopen(master2, "r");
        char c;
        do
{
        c = fgetc(ptr_file);
        if ( c == '\0' )
        {
        c = '\n';
        }
        printf("%c", c);
}
        while ( c != EOF );
	fclose(ptr_file);
}
