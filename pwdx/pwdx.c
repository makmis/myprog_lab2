/*pwdx.c*/
	//подключаем заголовочные файлы, библиотеку
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

	//добовляем функцию
int main(int argc, char *argv[])
{
        //выделяем буфер для вывода, увеличиваем его
char buff[1024];
mypwd (argv[1], buff, sizeof (buff));

printf("%s\n", buff);
	//выводим строку на экран
return 0;

}
