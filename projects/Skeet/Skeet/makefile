###############################################################
# Program:
#     Project 09, Skeet
#     Brother McCracken, CS165
# Author:
#     Edgar Wright
# Summary:
#     This will allow the user to play the game of skeet. 
# Above and Beyond
#     I changed the coloring of the number in the Tough bird
#     I also change the color of the gun when the Scared bird
#     is around.
###############################################################


LFLAGS = -lglut -lGLU -lGL

###############################################################
# Build the main game
###############################################################
a.out: driver.o game.o uiInteract.o uiDraw.o point.o rifle.o birds.o bullet.o
	g++ driver.o game.o uiInteract.o uiDraw.o point.o rifle.o birds.o bullet.o $(LFLAGS)

###############################################################
# Individual files
#    uiDraw.o      Draw polygons on the screen and do all OpenGL graphics
#    uiInteract.o  Handles input events
#    point.o       The position on the screen
#    ground.o      Handles the ground / world
#    game.o        Handles the game interaction
###############################################################
uiDraw.o: uiDraw.cpp uiDraw.h point.h
	g++ -c uiDraw.cpp

uiInteract.o: uiInteract.cpp uiInteract.h
	g++ -c uiInteract.cpp

point.o: point.cpp point.h
	g++ -c point.cpp

game.o: game.cpp uiDraw.h uiInteract.h point.h rifle.h bullet.h birds.h
	g++ -c game.cpp

driver.o: game.h uiInteract.h driver.cpp
	g++ -c driver.cpp

rifle.o: rifle.h point.h uiDraw.h rifle.cpp
	g++ -c rifle.cpp

#######################################################################
# ADD YOUR ADDITIONAL RULES HERE!
#
# Then, don't forget to add them to the dependecy list for a.out above.
#######################################################################
birds.o: birds.cpp birds.h point.h  velocity.h 
	g++ -c birds.cpp

bullet.o bullet.cpp bullet.h point.h velocity.h 
	g++ -c bullet.cpp

flyingObject.o flyingObject.cpp flyingObject.h point.h  velocity.h
	g++ -c flyingObject.cpp
###############################################################
# General rules
###############################################################
clean:
	rm a.out *.o
