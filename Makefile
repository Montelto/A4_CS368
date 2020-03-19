# A4_368
# Joseph McFarland
# 9072511679
# mcfarland3@wisc.edu

CXX = g++
CXXFLAGS = -Wall

A4_CSCS368: build

Person.o: Person.cpp Person.h
	$(CXX) $(CXXFLAGS) -o Person.o Person.cpp

Employee.o: Employee.cpp Employee.h Person.h
	$(CXX) $(CXXFLAGS) -o Employee.o Employee.cpp

Student.o: Student.cpp Student.h Person.h
	$(CXX) $(CXXFLAGS) -o Student.o Student.cpp

Faculty.o: Faculty.cpp Faculty.h Employee.h
	$(CXX) $(CXXFLAGS) -o Faculty.o Faculty.cpp

TeachingAssistant.o: TeachingAssistant.cpp TeachingAssistant.h Employee.h Student.h
	$(CXX) $(CXXFLAGS) -o TeachingAssistant.o TeachingAssistant.cpp

DisplayUtility.o: DisplayUtility.cpp DisplayUtility.h Faculty.h TeachingAssistant.h
	$(CXX) $(CXXFLAGS) -o DisplayUtility.o DisplayUtility.cpp

clean:
	-rm Person.o
	-rm Employee.o
	-rm Student.o
	-rm Faculty.o
	-rm TeachingAssistant.o
	-rm DisplayUtility.o
	-rm A4_CS368

build: demo.cpp Person.o Employee.o Student.o Faculty.o TeachingAssistant.o DisplayUtility.o
	$(CXX) $(CXXFLAGS) -o A4_CS368 demo.cpp Person.o Employee.o Student.o Faculty.o TeachingAssistant.o DisplayUtility.o