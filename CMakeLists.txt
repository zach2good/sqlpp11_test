cmake_minimum_required(VERSION 3.10)
project(dbtest CXX)

set_property(GLOBAL PROPERTY CXX_STANDARD 17)
set_property(GLOBAL PROPERTY CXX_STANDARD_REQUIRED ON)
set_property(GLOBAL PROPERTY CXX_EXTENSIONS ON)
set_property(GLOBAL PROPERTY LINKER_LANGUAGE CXX)
set_property(GLOBAL PROPERTY USE_FOLDERS ON)

set(CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/cmake)
include(CPM)

find_package(MariaDB REQUIRED)

# CPM Modules
CPMAddPackage(
    NAME sqlpp11
    GITHUB_REPOSITORY rbock/sqlpp11
    GIT_TAG b8aed2af550c137dc44c1eb84dd38018426caa76
    OPTIONS
        "BUILD_MARIADB_CONNECTOR ON"
)

add_subdirectory(database)

add_executable(dbtest main.cpp)
target_link_libraries(dbtest PUBLIC database)
target_include_directories(dbtest PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/database)
