cmake_minimum_required(VERSION 3.0)

link_directories(.)

add_executable(main main.cpp)
target_link_libraries(main private)

add_custom_command(
        TARGET main
        PRE_BUILD
        COMMAND llc -filetype=obj ${CMAKE_CURRENT_SOURCE_DIR}/../private/libprivate.bc -o libprivate.a)
