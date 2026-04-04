cmake_minimum_required(VERSION 3.21)

project(HostChanger VERSION 1.0.0 LANGUAGES CXX)

add_executable(host_ch
    src/main.cpp
    src/color.hpp
)

target_compile_features(host_ch PRIVATE cxx_std_17)

target_include_directories(host_ch PRIVATE src)

if(MSVC)
    target_compile_options(host_ch PRIVATE /W4 /permissive-)
    target_link_options(host_ch PRIVATE
        "/MANIFEST:EMBED"
        "/MANIFESTUAC:level='requireAdministrator' uiAccess='false'"
    )
else()
    target_compile_options(host_ch PRIVATE -Wall -Wextra -Wpedantic)
endif()
