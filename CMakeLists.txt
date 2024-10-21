cmake_minimum_required(VERSION 3.16)

project(reverse_do_whileloop LANGUAGES C)

add_executable(reverse_do_whileloop main.c)

include(GNUInstallDirs)
install(TARGETS reverse_do_whileloop
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
