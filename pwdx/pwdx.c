/*pwdx.c*/
	//подключаем заголовочные файлы, библиотеку
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

	//добовляем функцию
int main(int argc, char *argv[])
{
        //выделяем буфер для вывода
char buff[256];
myfunc (argv[1], buff, sizeof (buff));
	//выводим строку на экран
printf("%s\n", buff);
return 0;

}
