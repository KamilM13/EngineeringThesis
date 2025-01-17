cmake_minimum_required(VERSION 3.16)

project(ClusterGauge VERSION 0.1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt6 REQUIRED COMPONENTS Quick)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

set(CMAKE_VERBOSE_MAKEFILE ON)

set(CMAKE_AUTORCC ON)

qt_standard_project_setup(REQUIRES 6.5)

qt_add_executable(appClusterGauge
    main.cpp
)

qt_add_qml_module(appClusterGauge
    URI appClusterGauge
    VERSION 1.0
    QML_FILES
        Main.qml
        SOURCES System.cpp
        SOURCES CAN.cpp
        RESOURCES System.h

        RESOURCES assets/left.png
        RESOURCES assets/right.png
        RESOURCES assets/needle.png
        RESOURCES assets/base.png
        RESOURCES assets/headlight.png
        RESOURCES assets/distance.png
        RESOURCES CAN.h
        RESOURCES Enums.h
        RESOURCES DBC.h
        RESOURCES includes.h
        RESOURCES resourcemap.qrc
)


# Qt for iOS sets MACOSX_BUNDLE_GUI_IDENTIFIER automatically since Qt 6.1.
# If you are developing for iOS or macOS you should consider setting an
# explicit, fixed bundle identifier manually though.
set_target_properties(appClusterGauge PROPERTIES
#    MACOSX_BUNDLE_GUI_IDENTIFIER com.example.appClusterGauge
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

target_link_libraries(appClusterGauge
    PRIVATE Qt6::Quick
)

include(GNUInstallDirs)
install(TARGETS appClusterGauge
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
