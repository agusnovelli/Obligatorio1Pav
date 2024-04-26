all: main.o cambio.o paga.o jornalero.o fijo.o
	g++ -o main main.o cambio.o paga.o jornalero.o fijo.o
main.o: main.cpp
	g++ -c main.cpp
cambio.o: cambio.h cambio.cpp
	g++ -c cambio.cpp
paga.o: paga.h paga.cpp
	g++ -c paga.cpp
jornalero.o: empleado.h jornalero.cpp
	g++ -c jornalero.cpp
fijo.o: empleado.h fijo.cpp
	g++ -c fijo.cpp
clean:
	rm *.o
	rm main