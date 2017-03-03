.PHONY: all compile install

all: compile install


compile: build/ build/pari

build/:
	mkdir -p build/ #creates directory if not yet existing

build/pari: build/HashMap.o build/SomeKeyHash.o build/main.o
	g++ -o build/pari build/HashMap.o build/SomeKeyHash.o build/main.o

build/HashMap.o: src/HashMap.cpp src/HashMap.h src/HashNode.h src/SomeKeyHash.h
	g++ -o build/HashMap.o -c src/HashMap.cpp

build/SomeKeyHash.o: src/SomeKeyHash.cpp src/SomeKeyHash.h
	g++ -o build/SomeKeyHash.o -c src/SomeKeyHash.cpp

build/main.o: src/main.cpp src/HashMap.h
	g++ -o build/main.o -c src/main.cpp


install: site/ site/pari site/opportunities.txt

site/:
	mkdir -p site/ #creates directory if not yet existing

site/pari: build/pari
	cp -f build/pari site/

site/opportunities.txt: data/opportunities.txt
	cp -f data/opportunities.txt site/


clean:
	rm -f build/*.o
	rm -f build/pari
	rm -f site/*

mrproper: clean
	rm -Rf build/
	rm -Rf site/
