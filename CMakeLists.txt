CMAKE_MINIMUM_REQUIRED(VERSION 2.8)
PROJECT(test)
enable_language(Fortran)
enable_language(CXX)
add_library(square square.f03)
add_executable(test test.c)
target_link_libraries(test square)
set_target_properties(square PROPERTIES LINKER_LANGUAGE Fortran)
set_target_properties(test PROPERTIES LINKER_LANGUAGE CXX)
set_source_files_properties(test.c PROPERTIES LANGUAGE CXX)
set_source_files_properties(square.f03 PROPERTIES LANGUAGE Fortran)
target_link_libraries(test ${FORTRAN90_LIB} )
