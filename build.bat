g++ -I./include -c ./src/empleado.cpp
g++ -I./include -c ./src/sucursal.cpp
g++ -I./include -c ./src/casa.cpp
g++ -I./include -c ./src/particular.cpp
g++ -I./include -c ./src/profesional.cpp
g++ -I./include -c ./src/empresa.cpp
g++ -I./include -c main.cpp

g++ empleado.o sucursal.o casa.o particular.o profesional.o empresa.o main.o -o app.exe

DEL *.o

app.exe

