add_library(
        # Library name
        radmovie

        # Library type
        STATIC

        # Source files
        src/common/binkmovieplayer.cpp
        src/common/binkradfile.cpp
        src/common/binkrenderstrategy.cpp
        src/pch/pch.cpp
)

target_include_directories(
        # Target
        radmovie

        # Include directories
        PUBLIC

        ${CMAKE_CURRENT_SOURCE_DIR}
        ${CMAKE_CURRENT_SOURCE_DIR}/inc
        ${CMAKE_CURRENT_SOURCE_DIR}/src/common
        ${CMAKE_CURRENT_SOURCE_DIR}/src/pch
)