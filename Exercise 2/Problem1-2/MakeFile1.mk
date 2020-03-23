out: Problem1-2.o measurement.o
	g++ Problem1-2.o measurement.o -o out
    
Problem1-2.o: Problem1-2.cpp
	g++ -c Problem1-2.cpp
    
measurement.o: measurement.cpp measurement.h
	g++ -c measurement.cpp
    
clean:
	rm *.o out