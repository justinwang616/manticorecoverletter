
justinwangcoverletter: justinwangcoverletter.o
	g++ -o justinwangcoverletter justinwangcoverletter.o

justinwangcoverletter.o: justinwangcoverletter.cpp
	g++ -g -c justinwangcoverletter.cpp
	
clean:
	rm *.o $(objects) justinwangcoverletter