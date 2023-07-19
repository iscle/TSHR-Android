add_library(
        # Library name
        radscript

        # Library type
        STATIC

        #    <ClCompile Include="..\..\src\script\remotescript.cpp" />
        #    <ClCompile Include="..\..\src\script\script.cpp" />
        #    <ClCompile Include="..\..\src\typeinfo\TypeInfoEnum.cpp" />
        #    <ClCompile Include="..\..\src\typeinfo\TypeInfoIntLiteral.cpp" />
        #    <ClCompile Include="..\..\src\typeinfo\TypeInfoParam.cpp" />
        #    <ClCompile Include="..\..\src\typeinfo\typeinfoinstance.cpp" />
        #    <ClCompile Include="..\..\src\typeinfo\typeinfointerface.cpp" />
        #    <ClCompile Include="..\..\src\typeinfo\typeinfoloader.cpp" />
        #    <ClCompile Include="..\..\src\typeinfo\typeinfomethod.cpp" />
        #    <ClCompile Include="..\..\src\typeinfo\typeinfosystem.cpp" />
        #    <ClCompile Include="..\..\src\typeinfo\win32\win32typeinfovfcall.cpp" />
        #    <ClCompile Include="..\..\src\typeinfoutil\typeinfodistributor.cpp" />
        #    <ClCompile Include="..\..\src\typeinfoutil\typeinfoutil.cpp" />
        #    <ClCompile Include="..\..\src\factory\radfactory.cpp" />
        #    <ClCompile Include="..\..\src\namespace\namespace.cpp" />
        #    <ClCompile Include="..\..\src\pch\pch.cpp">
        #      <PrecompiledHeader Condition="'$(Configuration)|$(Platform)'=='Debug|Win32'">Create</PrecompiledHeader>
        #      <PrecompiledHeader Condition="'$(Configuration)|$(Platform)'=='Release|Win32'">Create</PrecompiledHeader>
        #      <PrecompiledHeader Condition="'$(Configuration)|$(Platform)'=='Tune|Win32'">Create</PrecompiledHeader>
        #    </ClCompile>

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