all: wc.c
	gcc -o wc wc.c

clean:
	rm -f wc
