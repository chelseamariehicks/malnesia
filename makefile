#Variables
CXX = g++
CXXFLAGS = -std=c++0x
CXXFLAGS += -Wall
CXXFLAGS += -g
HEADERS = GamePlay.hpp Characters.hpp AlainBombard.hpp FyreFestPhil.hpp MaryRobinson.hpp TouristTina.hpp Space.hpp Basecamp.hpp Forest.hpp Hatch.hpp Peak.hpp Reef.hpp Shore.hpp
SRCS = malnesiaMain.cpp GamePlay.cpp Characters.cpp AlainBombard.cpp FyreFestPhil.cpp MaryRobinson.cpp TouristTina.cpp Space.cpp Basecamp.cpp Forest.cpp Hatch.cpp Peak.cpp Reef.cpp Shore.cpp
OBJS = malnesiaMain.o GamePlay.o Characters.o AlainBombard.o FyreFestPhil.o MaryRobinson.o TouristTina.o Space.o Basecamp.o Forest.o Hatch.o Peak.o Reef.o Shore.o

#Targets
malnesia: ${OBJS} ${HEADERS}
	${CXX} ${CXXFLAGS} ${OBJS} -o malnesia

malnesiaMain.o: malnesiaMain.cpp GamePlay.hpp
	${CXX} ${CXXFLAGS} -c malnesiaMain.cpp

GamePlay.o: GamePlay.cpp GamePlay.hpp AlainBombard.hpp FyreFestPhil.hpp MaryRobinson.hpp TouristTina.hpp Basecamp.hpp Forest.hpp Hatch.hpp Peak.hpp Reef.hpp Shore.hpp
	${CXX} ${CXXFLAGS} -c GamePlay.cpp

Characters.o: Characters.cpp Characters.hpp
	${CXX} ${CXXFLAGS} -c Characters.cpp

AlainBombard.o: AlainBombard.cpp AlainBombard.hpp Characters.hpp
	${CXX} ${CXXFLAGS} -c AlainBombard.cpp

FyreFestPhil.o: FyreFestPhil.cpp FyreFestPhil.hpp Characters.hpp
	${CXX} ${CXXFLAGS} -c FyreFestPhil.cpp

MaryRobinson.o: MaryRobinson.cpp MaryRobinson.hpp Characters.hpp
	${CXX} ${CXXFLAGS} -c MaryRobinson.cpp

TouristTina.o: TouristTina.cpp TouristTina.hpp Characters.hpp
	${CXX} ${CXXFLAGS} -c TouristTina.cpp

Space.o: Space.cpp Space.hpp
	${CXX} ${CXXFLAGS} -c Space.cpp

Basecamp.o: Basecamp.cpp Basecamp.hpp Space.hpp
	${CXX} ${CXXFLAGS} -c Basecamp.cpp

Forest.o: Forest.cpp Forest.hpp Space.hpp
	${CXX} ${CXXFLAGS} -c Forest.cpp

Hatch.o: Hatch.cpp Hatch.hpp Space.hpp
	${CXX} ${CXXFLAGS} -c Hatch.cpp

Peak.o: Peak.cpp Peak.hpp Space.hpp
	${CXX} ${CXXFLAGS} -c Peak.cpp

Reef.o: Reef.cpp Reef.hpp Space.hpp
	${CXX} ${CXXFLAGS} -c Reef.cpp

Shore.o: Shore.cpp Shore.hpp Space.hpp
	${CXX} ${CXXFLAGS} -c Shore.cpp

clean:
	rm *.o malnesia