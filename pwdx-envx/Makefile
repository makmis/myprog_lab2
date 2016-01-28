	/*Makefile*/
DESTDIR=/usr/local/bin
LIBDIR=/usr/local/lib

envx:	envx.c mylib.so
	gcc -o envx envx.c -lmylib -L./

pwdx:	pwdx.c mylib.so
	gcc -o pwdx pwdx.c -lmylib -L./

mylib.so:	mylib.c
	gcc -shared -fPIC -o mylib.so mylib.c	

install:	pwdx evnx 
	@[ `id -u` -eq 0 ] || { echo "use sudo make install, Luke"; exit 1; }
	@install pwdx $(DESTDIR)
	@install envx $(DESTDIR)
	@cp mylib.so $(LIBDIR)
	@ldconfig

uninstall:
	@[ `id -u` -eq 0 ] || { echo "use sudo make uninstall, Luke"; exit 1; }
	@rm -rf $(DESTDIR)/pwdx
	@rm -rf $(DESTDIR)/envx
	@rm -rf $(LIBDIR)/mylib.so

clean:
	@rm -rf pwdx envx mylib.so

distrib: *.c *.h Makefile README
	tar -czf pwdx-pwdx.tar.gz *.c *.h  Makefile README
