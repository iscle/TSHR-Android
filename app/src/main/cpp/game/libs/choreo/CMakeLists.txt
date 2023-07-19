add_library(
        # Library name
        choreo

        # Library type
        STATIC

        # Source files
        src/blendtemplate.cpp
        src/constants.cpp
        src/driver.cpp
        src/internalanimation.cpp
        src/jointblenddriver.cpp
        src/jointblender.cpp
        src/replayblenddriver.cpp
        src/replayblender.cpp
        src/rootblenddriver.cpp
        src/rootblender.cpp
        src/utility.cpp
        src/basebank.cpp
        src/load.cpp
        src/scriptreader.cpp
        src/scriptwriter.cpp
        src/footblenddriver.cpp
        src/footblender.cpp
        src/footplanter.cpp
        src/bank.cpp
        src/engine.cpp
        src/partition.cpp
        src/puppet.cpp
        src/rig.cpp
        src/animation.cpp
        src/blend.cpp
        src/foot.cpp
        src/locomotion.cpp
        src/replay.cpp
        src/root.cpp
        src/synchronization.cpp
        src/transition.cpp
)

target_include_directories(
        # Target
        choreo

        # Include directories
        PUBLIC

        ${CMAKE_CURRENT_SOURCE_DIR}
        ${CMAKE_CURRENT_SOURCE_DIR}/inc
        ${CMAKE_CURRENT_SOURCE_DIR}/inc/choreo
)