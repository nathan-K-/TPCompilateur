#Choix du compilateur ( g++ / gcc par ex. )
EDL = g++
COMP  = g++

#Commandes bash
REMOVE = rm
RMFLAGS = -f # -f : --force, ne rien dire si les fichiers n existent pas
AFFICHER = echo

#Flags pour le compilateur
CCPFLAGS =  -std=c++11 -g # -Wall # -DMAP # -O2 # -Og
EDLFLAGS =

#Fichier .h (interfaces) et .cpp (realisations)
INT  = 			  Expr.h Symbole.h Automate.h    Etats/Etat.h
REAL =  main.cpp                   Automate.cpp  Etats/Etat.cpp
#Fichiers des classes de test
INTTEST =
REALTEST =

#Fichiers objets (.o) qui seront generes
OBJ = main.o Automate.o Etat.o

#Nom des variables d effacement
CLEAN = clean
CLEANALL = cleanall

#Nom de l executable
EXE = analyseur

LIBS = # -lm
LIBPATH = # -L chemin
INCPATH = # -I chemin

#Variables pour le backup
TIME = `date +'%y.%m.%d_%H:%M'`
BACKUPDIR = backup
BACKUPPATH = backup/$(TIME)
MAKEFILE = makefile
ASAUVER = $(REAL) $(REALTEST) $(INT) $(INTTEST) $(MAKEFILE)

.SILENT :  			# Sans rien afficher
.PHONY : $(CLEAN) backup        # Non dependant d un fichier

#Phase d edition des liens
$(EXE) : $(OBJ)
	$(AFFICHER) "Edition des liens."
	$(EDL) $(EDLFLAGS) -o $(EXE) $(LIBPATH) $(OBJ) $(LIBS)

#Dependances (cf #include)

Automate.o : 	   Etats/Etat.h
Etat.o : Symbole.h Etats/Etat.h

main.o : Automate.h

%.o : %.cpp
	$(AFFICHER) "Compilation de < $< >"
	$(COMP) $(CCPFLAGS) $(INCPATH) -c $<



#Commandes bash du backup
backup :
	mkdir -p $(BACKUPDIR) #-p : ne pas raler si BACKUPDIR existe deja
	mkdir -p $(BACKUPDIR)/$(TIME)
	echo $(TIME)
	echo $(ASAUVER)
	cp -u $(ASAUVER) $(BACKUPPATH)

#Commandes bash du clean
$(CLEAN) :
	$(AFFICHER) "Nettoyage du répertoire."
	$(REMOVE) $(RMFLAGS)  $(OBJ) core
$(CLEANALL) :
	$(AFFICHER) "Nettoyage du répertoire."
	$(REMOVE) $(RMFLAGS)  $(OBJ) $(EXE) core
