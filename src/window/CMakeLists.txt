add_library(
	window
	window.hpp
	window.cpp
	draw.cpp
)

target_include_directories(window PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}")