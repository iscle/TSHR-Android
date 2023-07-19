add_library(
        # Library name
        sim

        # Library type
        STATIC

        # Source files
        simcollision/collision.cpp
        simcollision/collisionanalyser.cpp
        simcollision/collisionanalyserdata.cpp
        simcollision/collisionanalyserdataUID.cpp
        simcollision/collisionanalyserevent.cpp
        simcollision/collisionanalyserinfo.cpp
        simcollision/collisionanalysertranslator.cpp
        simcollision/collisiondetector.cpp
        simcollision/collisiondisplay.cpp
        simcollision/collisionmanager.cpp
        simcollision/collisionobject.cpp
        simcollision/collisionvolume.cpp
        simcollision/impulsebasedcollisionsolver.cpp
        simcollision/proximitydetection.cpp
        simcollision/subcollisiondetector.cpp
        simcommon/arraymath.cpp
        simcommon/dline2.cpp
        simcommon/impulselink.cpp
        simcommon/kalmann.cpp
        simcommon/largesymmetricmatrix.cpp
        simcommon/physicsproperties.cpp
        simcommon/sbmatrix.cpp
        simcommon/simconstraint.cpp
        simcommon/simenvironment.cpp
        simcommon/simmath.cpp
        simcommon/simstate.cpp
        simcommon/simstatearticulated.cpp
        simcommon/simstateflexible.cpp
        simcommon/simstatetarget.cpp
        simcommon/simtarget.cpp
        simcommon/simulatedobject.cpp
        simcommon/simutility.cpp
        simcommon/skeletoninfo.cpp
        simcommon/symmatrix.cpp
        simcommon/tlist.cpp
        simcommon/trackerjointmodifier.cpp
        simcommon/trajectoryextrapolator.cpp
        simphysics/articulatedphysicsobject.cpp
        simphysics/physicsjoint.cpp
        simphysics/physicsobject.cpp
        simphysics/restingdetector.cpp
        simphysics/virtualcm.cpp
)

target_include_directories(
        # Target
        sim

        # Include directories
        PUBLIC

        ${CMAKE_CURRENT_SOURCE_DIR}
        ${CMAKE_CURRENT_SOURCE_DIR}/simcollision
        ${CMAKE_CURRENT_SOURCE_DIR}/simcommon
        ${CMAKE_CURRENT_SOURCE_DIR}/simphysics
)