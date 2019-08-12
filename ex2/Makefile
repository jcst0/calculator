all: parser 
clean:
	rm -rf parser
	
parser: parser.h scanner.h exception.h scanner.cpp parser.cpp
	g++ -o parser parser_driver.cpp scanner.cpp parser.cpp
