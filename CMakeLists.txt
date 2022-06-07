cmake_minimum_required(VERSION 3.21)
project(CPP_OOP)

set(CMAKE_CXX_STANDARD 14)

#add_executable(CPP_OOP lesson2.cpp Person.cpp Person.h Helpers.h Student.cpp Student.h Fruit.cpp Fruit.h Apple.cpp Apple.h Banana.cpp Banana.h GrannySmith.cpp GrannySmith.h BlackJack/Card.cpp BlackJack/Card.h BlackJack/Player.cpp BlackJack/Player.h BlackJack/Game.cpp BlackJack/Game.h BlackJack/Pack.cpp BlackJack/Pack.h)
#add_executable(CPP_OOP lesson3.cpp lesson3.cpp)
#add_executable(CPP_OOP lesson4.cpp Hand.cpp Hand.h ArrayInt.cpp ArrayInt.h Helpers.h Card.cpp Card.h)
#add_executable(CPP_OOP lesson5.cpp GenericPlayer.cpp GenericPlayer.h Hand.h Hand.cpp Helpers.h Card.h Card.cpp)
add_executable(CPP_OOP lesson6.cpp GenericPlayer.h GenericPlayer.cpp Hand.cpp Hand.h Player.cpp Player.h Card.cpp Card.h House.cpp House.h)
