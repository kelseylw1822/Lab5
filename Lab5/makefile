COMPILER = g++
OPTIONS = -Wall
PROGRAM = main.out

all : $(PROGRAM)

run: $(PROGRAM)
	./$(PROGRAM)

$(PROGRAM): main.cpp Car.cpp Car.h Facility.cpp Facility.h Invoice.cpp Invoice.h Motorcycle.cpp Motorcycle.h Student.cpp Student.h
	$(COMPILER) $(OPTIONS) main.cpp Car.cpp Car.h Facility.cpp Facility.h Invoice.cpp Invoice.h Motorcycle.cpp Motorcycle.h Student.cpp Student.h -o $(PROGRAM)

clean:
	rm -f $(PROGRAM)
