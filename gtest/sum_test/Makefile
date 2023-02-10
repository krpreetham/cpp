TARGET: exe

exe:Test.o mylibsum.a
	g++  Test.o -o exe -L . mylibsum.a -lm

mylibsum.a:basic_sum/basic_sum.o
	ar rs mylibsum.a basic_sum/basic_sum.o

basic_sum.o:basic_sum/basic_sum.cpp
	g++  -c -I basic_sum basic_sum/basic_sum.cpp -o basic_sum/basic_sum.o

Test.o:main.cpp
	g++  -c -I basic_sum main.cpp -lgtest -lgtest_main -lpthread -o Test.o

clean:
	rm basic_sum/basic_sum.o
	rm Test.o
	rm mylibsum.a
	rm exe

