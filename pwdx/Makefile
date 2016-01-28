	/*Makefile*/
CC = gcc
DESTDIR=/usr/local/bin

pwdx:	pwdx.c mylib.so
	gcc -o pwdx pwdx.c -lmylib -L./

mylib.so: mylib.c
	gcc -shared -fPIC -o mylib.so mylib.c	

install: pwdx 
	@[ `id -u` -eq 0 ] || { echo "use sudo make install, Luke"; exit 1; }
	@install pwdx $(DESTDIR)
	@cp mylib.so /usr/local/lib

uninstall:
	@[ `id -u` -eq 0 ] || { echo "use sudo make install, Luke"; exit 1; }
	@rm $(DESTDIR)/pwdx
	@rm /usr/local/lib/mylib.so

clean:
	@rm pwdx mylib.so

distrib: *.c *.h Makefile README
	tar -czf pwdx-pwdx.tar.gz *.c *.h  Makefile README
