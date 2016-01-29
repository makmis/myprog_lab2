DESTDIR=/usr/local/bin
LIBDIR=/usr/local/lib

all: pwdx envx

envx:	envx.c mylib.so
	gcc -o envx envx.c mylib.so -L./

pwdx:	pwdx.c mylib.so
	gcc -o pwdx pwdx.c mylib.so -L./

mylib.so: mylib.c
	gcc -shared -fPIC -o mylib.so mylib.c	

install: pwdx envx 
	@[ `id -u` -eq 0 ] || { echo "use sudo make!"; exit 1; }
	@install pwdx $(DESTDIR)
	@install envx $(DESTDIR)
	@cp mylib.so $(LIBDIR)
	@ldconfig

uninstall:
	@[ `id -u` -eq 0 ] || { echo "use sudo make!"; exit 1; }
	@rm -rf $(DESTDIR)/pwdx
	@rm -rf $(DESTDIR)/envx
	@rm -rf $(LIBDIR)/mylib.so

clean:
	@rm -rf pwdx envx mylib.so

distrib: *.c *.h Makefile README
	tar -czf pwdx-pwdx.tar.gz *.c *.h  Makefile README
