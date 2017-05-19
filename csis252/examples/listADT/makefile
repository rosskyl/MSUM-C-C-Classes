CC=g++
CFLAGS=
LFLAGS=
OBJECTS=	main.o itemtype.o menu.o additem.o arrayListTypeImp.o\
                deleteitem.o total.o totalitem.o
EXE=prog
$(EXE):		$(OBJECTS)
		$(CC) $(CFLAGS) -o $(EXE) $(OBJECTS) $(LFLAGS)
main.o:		main.cpp arrayListType.h itemtype.h prototypes.h
		$(CC) $(CFLAGS) -c main.cpp
menu.o:		menu.cpp 
		$(CC) $(CFLAGS) -c menu.cpp
itemtype.o:	itemtype.h itemtype.cpp
		$(CC) $(CFLAGS) -c itemtype.cpp
arrayListTypeImp.o:	arrayListType.h arrayListTypeImp.cpp itemtype.h
		$(CC) $(CFLAGS) -c arrayListTypeImp.cpp
additem.o:	additem.cpp arrayListType.h itemtype.h
		$(CC) $(CFLAGS) -c additem.cpp
deleteitem.o:	deleteitem.cpp arrayListType.h itemtype.h
		$(CC) $(CFLAGS) -c deleteitem.cpp
total.o:	total.cpp
		$(CC) $(CFLAGS) -c total.cpp
totalitem.o:	totalitem.cpp arrayListType.h itemtype.h
		$(CC) $(CFLAGS) -c totalitem.cpp
clean:
		rm -rf $(OBJECTS) $(EXE) *~

