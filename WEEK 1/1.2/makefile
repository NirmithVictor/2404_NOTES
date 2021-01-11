
p1:	p1.o p2.o p3.o
	g++ -o p p1.o p2.o p3.o

p1.o:	p1.cc
	g++ -c p1.cc

p2.o:	p2.cc
	g++ -c p2.cc
	
p3.o:	p3.cc
	g++ -c p3.cc

clean:
	rm -f p p2.o p1.o
