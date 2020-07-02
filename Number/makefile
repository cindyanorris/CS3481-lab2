#For this problem, you'll modify the makefile to create a better one.
#
#Add macros for compiler and compiler flags.
#The compiler flags to add are: -c, -Wall, -g, -std=c++11
#Add a macro that defines the object files that should be linked together
#to create the executable.
#Add suffix rule that specifies how to create a .o out of a .C file.
#Modify makefile to use the macros.
#Eliminate unnecessary commands and dependencies. (If the make utility can
#determine a dependence or a command then don't provide it.)
#Use tabs properly or makefile won't work.
#Answer first page of quiz questions using your makefile.
#

makeNumber: makeNumber.o Number.o
	g++ makeNumber.o Number.o -o makeNumber

makeNumber.o: makeNumber.C Number.h
	g++ -c makeNumber.C

Number.o: Number.C Number.h
	g++ -c Number.C

clean:
	rm -f *.o
