t00:	main.o init.o process.o random.o
	g++ -o t00 main.o init.o process.o random.o

main.o:	main.cc process.cc
	g++ -c main.cc
	g++ -c process.cc

init.o:	init.cc
	g++ -c init.cc

process.o:	process.cc
	g++ -c process.cc
	
random.o:	random.cc
	g++ -c random.cc

clean:
	rm -f t00 main.o init.o process.o random.o

