cmake_minimum_required(VERSION 3.20)
project(pruebaRAID5)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)


find_package(Qt5 COMPONENTS
        Core
        Gui
        Widgets
        REQUIRED)

add_executable(pruebaRAID5 main.cpp MainWindow.cpp MainWindow.h MainWindow.ui StorageManger.cpp StorageManger.h)
target_link_libraries(pruebaRAID5
        Qt5::Core
        Qt5::Gui
        Qt5::Widgets
        )

