cmake_minimum_required(VERSION 3.17)
project(uml_drawer)

set(CMAKE_CXX_STANDARD 20)

find_package(Qt6 COMPONENTS Widgets QuickControls2 REQUIRED)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)

add_executable(uml_drawer
        resources/qml/application.qml
        src/Application.cpp
        resources/qrc/qml.qrc
)

target_link_libraries(uml_drawer PRIVATE Qt6::Qml Qt6::Widgets Qt6::QuickControls2)