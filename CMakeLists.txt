cmake_minimum_required(VERSION 3.15)
project(bingo_game)

set(CMAKE_CXX_STANDARD 17)

add_executable(main main.cpp
                    BingoGame.cpp BingoGame.h
                    BingoCard.cpp BingoCard.h
                    BingoBall.cpp BingoBall.h
                    CardSpace.cpp CardSpace.h
        CardSpace.cpp
        CardSpace.h)