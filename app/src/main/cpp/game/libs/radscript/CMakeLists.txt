add_library(
        # Library name
        radscript

        # Library type
        STATIC

        # Source files
        src/script/remotescript.cpp
        src/script/script.cpp
        src/typeinfo/TypeInfoEnum.cpp
        src/typeinfo/TypeInfoIntLiteral.cpp
        src/typeinfo/TypeInfoParam.cpp
        src/typeinfo/typeinfoinstance.cpp
        src/typeinfo/typeinfointerface.cpp
        src/typeinfo/typeinfoloader.cpp
        src/typeinfo/typeinfomethod.cpp
        src/typeinfo/typeinfosystem.cpp
#        src/typeinfo/win32/win32typeinfovfcall.cpp
        src/typeinfoutil/typeinfodistributor.cpp
        src/typeinfoutil/typeinfoutil.cpp
        src/factory/radfactory.cpp
        src/namespace/namespace.cpp
        src/pch/pch.cpp
)

target_include_directories(
        # Target
        radscript

        # Include directories
        PUBLIC

        ${CMAKE_CURRENT_SOURCE_DIR}
        ${CMAKE_CURRENT_SOURCE_DIR}/inc
        ${CMAKE_CURRENT_SOURCE_DIR}/src
        ${CMAKE_CURRENT_SOURCE_DIR}/src/pch
#        ${CMAKE_CURRENT_SOURCE_DIR}/src/typeinfo/win32
)