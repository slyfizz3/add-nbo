all : 
	g++ -o add-nbo add-nbo.cpp
	./add-nbo thousand.bin five-hundred.bin
clear:
	rm -rf add-nbo