cmake_minimum_required(VERSION 3.10)
project(Game21)

add_executable(Game21 
    src/game21.cpp

    src/Game21/States/AskPlayerBid.cpp
    src/Game21/States/AskPlayerBalance.cpp

    src/Game21/Game.cpp
    src/Game21/Card.cpp
    src/Game21/CardRank.cpp
    src/Game21/CardSuit.cpp
    src/Game21/CardDeck.cpp
)

target_include_directories(Game21 
    PUBLIC src/includes
)

target_link_libraries(Game21 
    PRIVATE m
)

target_compile_options(Game21 PRIVATE
    -g3
    -Wall
    -Wextra
    -Werror
    -Wpedantic
    -Og
    -D_FORTIFY_SOURCE=2
)
set_target_properties(Game21 PROPERTIES
    CXX_EXTENSIONS off
    CXX_STANDARD_REQUIRED true
    CXX_STANDARD 17
)

include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/refs/tags/v1.13.0.zip
)

set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

enable_testing()
add_executable(game21test 
    src/Game21/FSM.test.cpp

    src/Game21/States/AskPlayerBid.cpp
    src/Game21/States/AskPlayerBalance.cpp

    src/Game21/Game.cpp
    src/Game21/Game.test.cpp
    src/Game21/Card.cpp
    src/Game21/Card.test.cpp
    src/Game21/CardRank.cpp
    src/Game21/CardRank.test.cpp
    src/Game21/CardSuit.cpp
    src/Game21/CardSuit.test.cpp
    src/Game21/CardDeck.cpp
    src/Game21/CardDeck.test.cpp
)
target_include_directories(game21test 
    PUBLIC src/includes
)
target_link_libraries(game21test GTest::gtest_main)
include(GoogleTest)

gtest_discover_tests(game21test)