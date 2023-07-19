add_library(
        # Library name
        scrooby

        # Library type
        STATIC

        # Source files
        src/FeApp.cpp
        src/FeBoundedDrawable.cpp
        src/FeDrawable.cpp
        src/FeEntity.cpp
        src/FeGroup.cpp
        src/FeLanguage.cpp
        src/FeLayer.cpp
        src/FeMovie.cpp
        src/FeOwner.cpp
        src/FePage.cpp
        src/FeParent.cpp
        src/FePolygon.cpp
        src/FeProject.cpp
        src/FePure3dObject.cpp
        src/FeScreen.cpp
        src/FeSprite.cpp
        src/FeText.cpp
        src/FeTextBible.cpp
        src/FeTextStyle.cpp
        src/scrooby/App.cpp
        src/FeChunkHandler.cpp
        src/FeLoaders.cpp
        src/utility/BufferReader.cpp
        src/xml/XMLParser.cpp
        src/xml/XMLTree.cpp
        src/utility/AsyncFileLoader.cpp
        src/utility/EnumConversion.cpp
        src/utility/debugMessages.cpp
        src/tLinearTable.cpp
        src/ResourceManager/FeResourceManager.cpp
        Src/strings/UnicodeString.cpp
        src/strings/pcstring.cpp
        src/strings/stricmp.cpp
)

target_include_directories(
        # Target
        scrooby

        # Include directories
        PUBLIC

        ${CMAKE_CURRENT_SOURCE_DIR}
        ${CMAKE_CURRENT_SOURCE_DIR}/src
        ${CMAKE_CURRENT_SOURCE_DIR}/inc
        ${CMAKE_CURRENT_SOURCE_DIR}/src/utility
        ${CMAKE_CURRENT_SOURCE_DIR}/src/xml
        ${CMAKE_CURRENT_SOURCE_DIR}/src/ResourceManager
        ${CMAKE_CURRENT_SOURCE_DIR}/src/strings
)