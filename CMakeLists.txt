cmake_minimum_required (VERSION 2.6)
project (demangle)
add_executable(demangle demangle.cc)

install (TARGETS demangle DESTINATION /usr/local/bin/ )
