LAB04: Lab03.o
	gcc Lab03.o -o Lab03
Lab03.o: Lab03.c
	gcc Lab03.c -c
clean:
	rm -rf Lab03.o
