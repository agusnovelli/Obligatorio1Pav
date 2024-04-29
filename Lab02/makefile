all: main.o cambio.o paga.o jornalero.o fijo.o empresa.o empleado.o
	g++ -o main main.o cambio.o paga.o jornalero.o fijo.o empresa.o empleado.o
main.o: main.cpp
	g++ -c main.cpp
cambio.o: cambio.h cambio.cpp
	g++ -c cambio.cpp
paga.o: paga.h paga.cpp
	g++ -c paga.cpp
empleado.o: empleado.h empleado.cpp
	g++ -c empleado.cpp
jornalero.o: jornalero.h jornalero.cpp
	g++ -c jornalero.cpp
fijo.o: fijo.h fijo.cpp
	g++ -c fijo.cpp
empresa.o: empresa.h empresa.cpp
	g++ -c empresa.cpp
clean:
	rm *.o
	rm main