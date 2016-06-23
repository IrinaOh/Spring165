###############################################################
# Program:
#     Checkpoint 06a, Makefiles
#     Brother McCracken, CS165
# Author:
#     Edgar Wright
# Summary:
#     Summaries are not necessary for checkpoint assignments.
###############################################################


# Insert your rule for a.out here:
a.out: point.o robot.o check06a.o
	g++ point.o robot.o check06a.o 
	tar -cf check06a.tar *.h *.cpp makefile  

# Insert your rule for robot.o here:
robot.o: robot.cpp robot.h
	g++ -c robot.cpp

# Insert your rule for point.o here:
point.o: point.cpp point.h
	g++ -c point.cpp

# Insert your rule for check06a.o here:
check06a.o: check06a.cpp
	g++ -c check06a.cpp