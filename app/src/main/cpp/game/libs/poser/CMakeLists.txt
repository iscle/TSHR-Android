add_library(
        # Library name
        poser

        # Library type
        STATIC

        # Source files
        src/joint.cpp
        src/pose.cpp
        src/posedriver.cpp
        src/poseengine.cpp
        src/transform.cpp
)

target_include_directories(
        # Target
        poser

        # Include directories
        PUBLIC

        ${CMAKE_CURRENT_SOURCE_DIR}
        ${CMAKE_CURRENT_SOURCE_DIR}/inc
        ${CMAKE_CURRENT_SOURCE_DIR}/inc/poser
)