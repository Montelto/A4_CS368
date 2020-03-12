# A4_368
# Joseph McFarland
# 9072511679
# mcfarland3@wisc.edu

CXX = g++
CXXFLAGS = -Wall

A4_CS368: build

Person.o: Person.h

Employee.o: Employee.h Person.h

Student.o: Student.h Person.h

Faculty.o: Faculty.h Employee.h

TeachingAssistant.o: TeachingAssistant.h Employee.h Student.h

DisplayUtility.o: DisplayUtility.h Faculty.h TeachingAssistant.h

clean:
	-rm Person.o
	-rm Employee.o
	-rm Student.o
	-rm Faculty.o
	-rm TeachingAssistant.o
	-rm DisplayUtility.o
	-rm A4_368

build: demo.cpp Person.o Employee.o Student.o Faculty.o TeachingAssistant.o DisplayUtility.o
	$(CXX) $(CXXFLAGS) -o A4_368 demo.cpp Person.o Employee.o Student.o Faculty.o TeachingAssistant.o DisplayUtility.o
