add_library(
        # Library name
        radcore

        # Library type
        STATIC

        # Source files
        src/pch/pch.cpp
        src/raddebug/debug.cpp
        src/radobject/object.cpp
        src/raddispatch/dispatcher.cpp
        src/radtime/stopwatch.cpp
        src/radtime/time.cpp
        src/radmemory/align.cpp
        src/radmemory/binallocator.cpp
        src/radmemory/dlheap.cpp
        src/radmemory/externalmemoryheap.cpp
        src/radmemory/externalmemoryobject.cpp
        src/radmemory/memorymanager.cpp
        src/radmemory/memoryobject.cpp
        src/radmemory/memorypool.cpp
        src/radmemory/memoryspacewin32.cpp
        src/radmemory/platalloc.cpp
        src/radmemory/staticheap.cpp
        src/radmemory/trackingheap.cpp
        src/radmemory/twowayallocator.cpp
        src/radstring/string.cpp
        src/radplatform/platform.cpp
        src/radobjectlist/dynamicarray.cpp
        src/radobjectlist/objectlist.cpp
        src/radobjectlist/weakcallbackwrapper.cpp
        src/radobjectlist/weakinterfacewrapper.cpp
        src/raddebugcommunication/host.cpp
#        src/raddebugcommunication/host1394socket.cpp
        src/raddebugcommunication/hostchannel.cpp
#        src/raddebugcommunication/hosthiosocket.cpp
        src/raddebugcommunication/targetconnection.cpp
        src/raddebugcommunication/targetsocketchannel.cpp
        src/raddebugcommunication/targetx.cpp
        src/raddebugconsole/consoleclient.cpp
        src/raddebugwatch/watchclient.cpp
        src/radremotecommand/functionlist.cpp
        src/radremotecommand/remotecommandserver.cpp
        src/radremotecommand/remotecommandtarget.cpp
#        src/radcontroller/directinputcontroller.cpp
        src/radfile/common/cementer.cpp
        src/radfile/common/drive.cpp
        src/radfile/common/drivethread.cpp
        src/radfile/common/file.cpp
        src/radfile/common/filecache.cpp
        src/radfile/common/filesystem.cpp
        src/radfile/common/instancedrive.cpp
        src/radfile/common/platformdrives.cpp
        src/radfile/common/radfile.cpp
        src/radfile/common/remotedrive.cpp
        src/radfile/common/requests.cpp
        src/radfile/win32/win32drive.cpp
        src/radthread/mutex.cpp
        src/radthread/semaphore.cpp
        src/radthread/system.cpp
        src/radthread/thread.cpp
        src/rad1394/win32lib/rad1394master.cpp
        src/radobjectbtree/objectavltree.cpp
        src/radobjectbtree/objectbtree.cpp
        src/radstacktrace/win32/stacktrace.cpp
        src/raddebugfileserver/fileserver.cpp
        src/radstats/simplestat.cpp
        src/radstats/statmanager.cpp
        src/radtextdisplay/textdisplay.cpp
        src/radmemorymonitor/memmonitorclient.cpp
        src/radmemorymonitor/memmonitorclienthelp.cpp
        src/radprofiler/profiler.cpp
        src/radprofiler/profiler2.cpp
        src/radprofiler/profilesample.cpp
        src/radkey/radkey.cpp
)

target_include_directories(
        # Target
        radcore

        # Include directories
        PUBLIC

        ${CMAKE_CURRENT_SOURCE_DIR}
        ${CMAKE_CURRENT_SOURCE_DIR}/inc
        ${CMAKE_CURRENT_SOURCE_DIR}/src/pch
        ${CMAKE_CURRENT_SOURCE_DIR}/src/raddispatch
        ${CMAKE_CURRENT_SOURCE_DIR}/src/radtime
        ${CMAKE_CURRENT_SOURCE_DIR}/src/radmemory
        ${CMAKE_CURRENT_SOURCE_DIR}/src/raddebugcommunication
        ${CMAKE_CURRENT_SOURCE_DIR}/src/raddebugconsole
        ${CMAKE_CURRENT_SOURCE_DIR}/src/radprotocols
        ${CMAKE_CURRENT_SOURCE_DIR}/src/raddebugwatch
        ${CMAKE_CURRENT_SOURCE_DIR}/src/radremotecommand
        ${CMAKE_CURRENT_SOURCE_DIR}/src/radfile/common
        ${CMAKE_CURRENT_SOURCE_DIR}/src/radfile/win32
        ${CMAKE_CURRENT_SOURCE_DIR}/src/radthread
        ${CMAKE_CURRENT_SOURCE_DIR}/src/rad1394/win32lib
        ${CMAKE_CURRENT_SOURCE_DIR}/src/radobjectbtree
        ${CMAKE_CURRENT_SOURCE_DIR}/src/raddebugfileserver
        ${CMAKE_CURRENT_SOURCE_DIR}/src/radstats
        ${CMAKE_CURRENT_SOURCE_DIR}/src/radtextdisplay
        ${CMAKE_CURRENT_SOURCE_DIR}/src/radmemorymonitor
        ${CMAKE_CURRENT_SOURCE_DIR}/src/radprofiler
)