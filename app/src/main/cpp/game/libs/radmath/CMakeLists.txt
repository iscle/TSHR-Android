add_library(
        # Library name
        radmath

        # Library type
        STATIC

        # Source files
        radmath/matrix.cpp
        radmath/numerical.cpp
        radmath/plane.cpp
        radmath/quaternion.cpp
        radmath/radmath.cpp
        radmath/random.cpp
        radmath/spline.cpp
        radmath/triangle.cpp
        radmath/trig.cpp
        radmath/vector.cpp
)

target_include_directories(
        # Target
        radmath

        # Include directories
        PUBLIC

        radmath
        ${CMAKE_CURRENT_SOURCE_DIR}/radmath
)