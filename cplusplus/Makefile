CFLAGS=

average: mainTest.o average.o AverageTest.o
	g++ -o average average.o AverageTest.o mainTest.o -lstdc++ -lcppunit -g -O0 --coverage

mainTest.o: mainTest.cpp
	g++ $(CFLAGS) -c mainTest.cpp -g -O0

AverageTest.o: AverageTest.cpp AverageTest.h
	g++ $(CFLAGS) -c AverageTest.cpp -g -O0

average.o:  average.cpp average.h
	g++ $(CFLAGS) -c average.cpp -g -O0 --coverage

test: average
	@CODE="$(shell ./average 2>&1 >/dev/null | grep -v 'OK (6)' | wc -c | perl -pe 's/\s//g')" ; exit $$CODE

gcov: cleangcovrun run
	gcov average.cpp

cleangcovrun:
	rm -f *.gcda
	rm -f *.gcov

clean: cleangcovrun
	rm -f average
	rm -f mainTest.o
	rm -f average.o
	rm -f AverageTest.o
	rm -f *.gcno
