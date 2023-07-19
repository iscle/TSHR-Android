add_library(
        # Library name
        radmusic

        # Library type
        STATIC

        # Source files
        src/pch/pch.cpp
        src/radmusic/framework/framework.cpp
        src/radmusic/schema/schema_util.cpp
        src/radmusic/resource/resource_manager.cpp
        src/radmusic/music/music_composition.cpp
        src/radmusic/music/music_engine.cpp
        src/radmusic/music/music_engine_state_fade.cpp
        src/radmusic/music/music_engine_state_steady.cpp
        src/radmusic/music/music_engine_state_stitch.cpp
        src/radmusic/music/music_engine_state_stopped.cpp
        src/radmusic/music/music_performance.cpp
        src/radmusic/sequence/sequence_player.cpp
        src/radmusic/sequence/sequence_region.cpp
        src/radmusic/sequence/sequence_stream_graph.cpp
        src/memory/memory.cpp
        src/ods/ods.cpp
        src/ods/ods_codegen.cpp
        src/ods/ods_memory.cpp
        src/ods/ods_parser.cpp
        src/ods/ods_util.cpp
)

target_include_directories(
        # Target
        radmusic

        # Include directories
        PUBLIC

        ${CMAKE_CURRENT_SOURCE_DIR}
        ${CMAKE_CURRENT_SOURCE_DIR}/inc
        ${CMAKE_CURRENT_SOURCE_DIR}/inc/radmusic
        ${CMAKE_CURRENT_SOURCE_DIR}/inc/ods
        ${CMAKE_CURRENT_SOURCE_DIR}/inc/memory
        ${CMAKE_CURRENT_SOURCE_DIR}/src/pch
        ${CMAKE_CURRENT_SOURCE_DIR}/src/radmusic
        ${CMAKE_CURRENT_SOURCE_DIR}/src/radmusic/schema
        ${CMAKE_CURRENT_SOURCE_DIR}/src/radmusic/resource
        ${CMAKE_CURRENT_SOURCE_DIR}/src/radmusic/music
        ${CMAKE_CURRENT_SOURCE_DIR}/src/radmusic/sequence
)