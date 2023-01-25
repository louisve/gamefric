main: affichage.o main.o moteur.o sauvegarde.o pokedex.o utils.o libisentlib.a
	gcc -Wall -o main affichage.o main.o moteur.o sauvegarde.o pokedex.o utils.o libisentlib.a -lm -lglut -lGL -lX11

main.o: main.c Librairie/GfxLib.h Librairie/BmpLib.h Librairie/ESLib.h
	gcc -Wall -c main.c

affichage.o: Fonctions/affichage.c Librairie/GfxLib.h Librairie/BmpLib.h Librairie/ESLib.h
	gcc -g -Wall -c Fonctions/affichage.c

moteur.o: Fonctions/moteur.c Librairie/GfxLib.h Librairie/BmpLib.h Librairie/ESLib.h
	gcc -g -Wall -c Fonctions/moteur.c

sauvegarde.o: Fonctions/sauvegarde.c Librairie/GfxLib.h Librairie/BmpLib.h Librairie/ESLib.h
	gcc -g -Wall -c Fonctions/sauvegarde.c

pokedex.o: Fonctions/pokedex.c Librairie/GfxLib.h Librairie/BmpLib.h Librairie/ESLib.h
	gcc -g -Wall -c Fonctions/pokedex.c

utils.o: Fonctions/utils.c Librairie/GfxLib.h Librairie/BmpLib.h Librairie/ESLib.h
	gcc -g -Wall -c Fonctions/utils.c


libisentlib.a: BmpLib.o ErreurLib.o ESLib.o GfxLib.o OutilsLib.o SocketLib.o ThreadLib.o TortueLib.o VectorLib.o WavLib.o
	ar r libisentlib.a BmpLib.o ErreurLib.o ESLib.o GfxLib.o OutilsLib.o SocketLib.o ThreadLib.o TortueLib.o VectorLib.o WavLib.o
	ranlib libisentlib.a

BmpLib.o: Librairie/BmpLib.c Librairie/BmpLib.h Librairie/OutilsLib.h
	gcc -Wall -O2 -c Librairie/BmpLib.c

ESLib.o: Librairie/ESLib.c Librairie/ESLib.h Librairie/ErreurLib.h
	gcc -Wall -O2 -c Librairie/ESLib.c

ErreurLib.o: Librairie/ErreurLib.c Librairie/ErreurLib.h
	gcc -Wall -O2 -c Librairie/ErreurLib.c 

GfxLib.o: Librairie/GfxLib.c Librairie/GfxLib.h Librairie/ESLib.h
	gcc -Wall -O2 -c Librairie/GfxLib.c -I/usr/include/GL
# Sous MacOSX, commenter la ligne de commande ci-dessus (en mettant un # au debut)
# et de-commenter la ligne de commande ci-apres :
#	gcc -Wall -O2 -c GfxLib.c -Wno-deprecated-declarations

OutilsLib.o: Librairie/OutilsLib.c Librairie/OutilsLib.h
	gcc -Wall -O2 -c Librairie/OutilsLib.c

SocketLib.o: Librairie/SocketLib.c Librairie/SocketLib.h
	gcc -Wall -O2 -c Librairie/SocketLib.c

ThreadLib.o: Librairie/ThreadLib.c Librairie/ThreadLib.h
	gcc -Wall -O2 -c Librairie/ThreadLib.c

TortueLib.o: Librairie/TortueLib.c Librairie/TortueLib.h Librairie/GfxLib.h
	gcc -Wall -O2 -c Librairie/TortueLib.c

VectorLib.o: Librairie/VectorLib.c Librairie/VectorLib.h
	gcc -Wall -O2 -c Librairie/VectorLib.c -msse3

WavLib.o: Librairie/WavLib.c Librairie/WavLib.h Librairie/OutilsLib.h
	gcc -Wall -O2 -c Librairie/WavLib.c -Wno-unused-result
# Sous MacOSX, commenter la ligne de commande ci-dessus (en mettant un # au debut)
# et de-commenter la ligne de commande ci-apres :
#	gcc -Wall -O2 -c WavLib.c

zip:
	tar -cvzf libisentlib.tgz *.[ch] *.bmp *.pdf makefile

clean:
	rm -f *~ *.o

deepclean: clean
	rm -f exemple exempleTortue libisentlib.a

