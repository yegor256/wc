all: wc test
wc: wc.c
	gcc -o wc wc.c
test: wc
	echo '' | ./wc | grep '0'
	echo 'hello, world! how are you?' | ./wc | grep '5'
clean:
	rm -f wc
