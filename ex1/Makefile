all: scanner
clean:
	rm -rf scanner
	
scanner: scanner.h exception.h scanner.cpp
	g++ -o scanner scanner_driver.cpp scanner.cpp
