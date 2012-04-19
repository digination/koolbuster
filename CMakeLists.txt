cmake_minimum_required(VERSION 2.6)

project(koolbuster)

SET (CMAKE_C_FLAGS "-g -fPIE -I/usr/include/gtk-3.0/ -I/usr/include/glib-2.0/ -I/usr/lib/x86_64-linux-gnu/glib-2.0/include/ -I/usr/include/pango-1.0/ -I/usr/include/cairo/ -I/usr/include/gdk-pixbuf-2.0/ -I/usr/include/atk-1.0/")

add_definitions(-DDBNG_PREFIX=\"${CMAKE_INSTALL_PREFIX}\")

add_executable(
	koolbuster
	src/koolbuster.h
        src/koolbuster.c
        )

find_library (PTHREAD pthread) 
find_library (GTK-3 gtk-3)

target_link_libraries(
        koolbuster
        gtk-3
        pthread
)

install (TARGETS koolbuster DESTINATION bin)
