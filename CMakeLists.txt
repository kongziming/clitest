cmake_minimum_required(VERSION 3.8.0)

project(SimpleWidget)

find_package(Qt5 REQUIRED Core Gui Widgets)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)

set(TARGET_HEADERS
	SimpleWidget.h
)
set(TARGET_SOURCES
	SimpleButton.cpp
	SimpleWidget.cpp
	main.cpp
)
set(TARGET_FORMS
	SimpleWidget.ui
)
set(TARGET_RESOURCES
	SimpleWidget.qrc
)

add_executable(${PROJECT_NAME}
	${TARGET_SOURCES}
	${TARGET_RESOURCES}
)
target_link_libraries(${PROJECT_NAME}
	Qt5::Core
	Qt5::Gui
	Qt5::Widgets
)