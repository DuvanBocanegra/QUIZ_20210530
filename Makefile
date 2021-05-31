build:
	mkdir -p out
	gcc -c linalg/source/determinante2x2.c -o out/determinante2x2.o
	gcc -c linalg/source/determinante3x3.c -o out/determinante3x3.o
	gcc -c linalg/source/sumarMatriz.c -o out/sumarMatriz.o
	ar rcs out/liblinalg.a out/determinante2x2.o out/determinante3x3.o out/sumarMatriz.o
	gcc -c -Ilinalg/source main.c -o out/main.o
	gcc -Lout out/main.o -llinalg -o programaprincipal.o
clean:
	rm -rfv out
