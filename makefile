TOOL=g++
FLAGS=-w \
			-fno-exceptions \
			-fno-rtti \
			-fpermissive \
			-Ofast \
			-s \
			-std=c++14

LDFLAGS=-fdata-sections \
				-ffunction-sections


default: cpu main
	$(TOOL) $(FLAGS) cpu.o main.o -o cpu $(LDFLAGS)

main: main.cpp main.h constants.h
	$(TOOL) $(FLAGS) -c main.cpp -o main.o $(LDFLAGS)

cpu: cpu.cpp cpu.h constants.h
	$(TOOL) $(FLAGS) -c cpu.cpp -o cpu.o $(LDFLAGS)

format: *.h *.cpp
	indent -kr -br -brf -brs -ce -cdw -l80 -cli2 -ci2 -i2 -ppi2 -nut *.c* *.h*

clean:
	rm *.o
	rm cpu
	rm *~

