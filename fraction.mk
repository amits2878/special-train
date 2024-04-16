Fraction: Fraction.o
	g++ -g -W Fraction.o -o Fraction
Fraction.o: Fraction.cxx
	g++ -c -W Fraction.cxx -o Fraction.o
