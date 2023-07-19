add_library(
        # Library name
        radsound

        # Library type
        STATIC

        # Source files
        src/pch/pch.cpp
        src/hal/common/audioformat.cpp
        src/hal/common/banner.cpp
        src/hal/common/memoryregion.cpp
        src/hal/common/radsoundfile.cpp
        src/hal/common/rolloff.cpp
#        src/hal/win32/buffer.cpp
#        src/hal/win32/bufferloader.cpp
#        src/hal/win32/effect.cpp
#        src/hal/win32/listener.cpp
#        src/hal/win32/positionalgroup.cpp
#        src/hal/win32/radsoundwin.cpp
#        src/hal/win32/system.cpp
#        src/hal/win32/voice.cpp
        src/radsound/buffereddatasource.cpp
        src/radsound/clip.cpp
        src/radsound/clipplayer.cpp
        src/radsound/datacache.cpp
        src/radsound/memorydatasource.cpp
        src/radsound/memoryspaceobject.cpp
        src/radsound/radicaladpcm.cpp
        src/radsound/rsdfiledatasource.cpp
        src/radsound/stitcheddatasource.cpp
        src/radsound/streamplayer.cpp
        src/common/radsoundobject.cpp
        src/common/radsoundupdatableobject.cpp
        src/math/radsoundmath.cpp
)

target_include_directories(
        # Target
        radsound

        # Include directories
        PUBLIC

        ${CMAKE_CURRENT_SOURCE_DIR}
        ${CMAKE_CURRENT_SOURCE_DIR}/inc
        ${CMAKE_CURRENT_SOURCE_DIR}/src/pch
        ${CMAKE_CURRENT_SOURCE_DIR}/src/hal/common
        ${CMAKE_CURRENT_SOURCE_DIR}/src/hal/win32
        ${CMAKE_CURRENT_SOURCE_DIR}/src/radsound
        ${CMAKE_CURRENT_SOURCE_DIR}/src/common
)