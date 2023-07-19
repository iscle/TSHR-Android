add_library(
        # Library name
        radcontent

        # Library type
        STATIC

        # Source files
        src/radload/hashtable.cpp
        src/radload/inventory.cpp
        src/radload/manager.cpp
        src/radload/object.cpp
        src/radload/queue.cpp
        src/radload/request.cpp
        src/radload/stream.cpp
)

target_include_directories(
        # Target
        radcontent

        # Include directories
        PUBLIC

        ${CMAKE_CURRENT_SOURCE_DIR}
        ${CMAKE_CURRENT_SOURCE_DIR}/inc
        ${CMAKE_CURRENT_SOURCE_DIR}/inc/radload
        ${CMAKE_CURRENT_SOURCE_DIR}/inc/radload/utility
)