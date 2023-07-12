cmake_minimum_required(VERSION 3.10)
project(Game21)

add_executable(Game21 
    src/game21.cpp
    src/Game21/Card.cpp
    src/Game21/CardRank.cpp
    src/Game21/CardSuit.cpp
)

target_include_directories(Game21 
    PUBLIC src/includes
)

target_link_libraries(Game21 
    PRIVATE m
)

set_target_properties(Game21 PROPERTIES
    CXX_EXTENSIONS off
    CXX_STANDARD_REQUIRED true
    CXX_STANDARD 17
)