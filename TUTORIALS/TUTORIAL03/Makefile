p3:	main.o Date.o Time.o Call.o Control.o
	g++ -o t03 main.o Date.o Time.o Call.o Control.o

main.o:	main.cc Date.h Time.h Call.h Control.h
	g++ -c main.cc

Date.o:	Date.cc Date.h
	g++ -c Date.cc
	
Time.o: Time.h Time.cc
	g++ -c Time.cc

Call.o: Date.h Call.h Time.h
	 g++ -c Call.cc
	 
Control.o: Call.h Time.h Date.h Control.h
	g++ -c Control.cc

clean:
	rm -f *.o t03
