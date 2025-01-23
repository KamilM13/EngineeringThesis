cmake_minimum_required(VERSION 3.5)

project(cluster LANGUAGES CXX)

# Enable automatic inclusion of current directory headers
set(CMAKE_INCLUDE_CURRENT_DIR ON)

# Enable automatic handling of MOC, UIC, and RCC
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

# Set C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Find the required Qt components
find_package(Qt5 COMPONENTS Core Quick REQUIRED)

# Define the source and header files
set(SOURCES
    main.cpp
    system.cpp
    can.cpp
    qml.qrc
    assets.qrc
)

set(HEADERS
    inc/can.h
    inc/DBC.h
    inc/Enums.h
    inc/includes.h
    inc/system.h
)

add_executable(cluster ${SOURCES} ${HEADERS})


# Define Qt-specific compile flags for debug/release configurations
target_compile_definitions(cluster
  PRIVATE $<$<OR:$<CONFIG:Debug>,$<CONFIG:RelWithDebInfo>>:QT_QML_DEBUG>)

# Link required Qt libraries
target_link_libraries(cluster
  PRIVATE Qt5::Core Qt5::Quick)
