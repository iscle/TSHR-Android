add_library(
        # Library name
        pure3d

        # Library type
        STATIC

        # Source files
        p3d/ambientlight.cpp
        p3d/billboardobject.cpp
        p3d/bmp.cpp
        p3d/camera.cpp
        p3d/cameraloader.cpp
        p3d/chunkfile.cpp
        p3d/context.cpp
        p3d/debugdraw.cpp
        p3d/directionallight.cpp
        p3d/displaylist.cpp
        p3d/drawable.cpp
        p3d/dxtn.cpp
        p3d/entity.cpp
        p3d/error.cpp
        p3d/file.cpp
        p3d/fileftt.cpp
        p3d/font.cpp
        p3d/gameattr.cpp
        p3d/geometry.cpp
        p3d/image.cpp
        p3d/imageconverter.cpp
        p3d/imagefactory.cpp
        p3d/imagefont.cpp
        p3d/inventory.cpp
        p3d/light.cpp
        p3d/lightloader.cpp
        p3d/lightschooser.cpp
        p3d/loaders.cpp
        p3d/loadmanager.cpp
        p3d/locator.cpp
        p3d/lzr.cpp
        p3d/matrixstack.cpp
        p3d/memheap.cpp
        p3d/memory.cpp
        p3d/memorysection.cpp
        p3d/png.cpp
        p3d/pointcamera.cpp
        p3d/pointlight.cpp
        p3d/primgroup.cpp
        p3d/rawimage.cpp
        p3d/refcounted.cpp
        p3d/shader.cpp
        p3d/spotlight.cpp
        p3d/sprite.cpp
        p3d/table.cpp
        p3d/targa.cpp
        p3d/textdataparser.cpp
        p3d/textstring.cpp
        p3d/texture.cpp
        p3d/texturefont.cpp
        p3d/unicode.cpp
        p3d/utility.cpp
        p3d/vectorcamera.cpp
        p3d/vertexlist.cpp
        p3d/view.cpp
#        p3d/platform/win32/plat_filemap.cpp
#        p3d/platform/win32/platform.cpp
        p3d/anim/animate.cpp
        p3d/anim/animatedobject.cpp
        p3d/anim/billboardobjectanimation.cpp
        p3d/anim/cameraanimation.cpp
        p3d/anim/channel.cpp
        p3d/anim/compositedrawable.cpp
        p3d/anim/drawablepose.cpp
        p3d/anim/event.cpp
        p3d/anim/eventanimation.cpp
        p3d/anim/expression.cpp
        p3d/anim/expressionanimation.cpp
        p3d/anim/expressionoffsets.cpp
        p3d/anim/instancedgeometry.cpp
        p3d/anim/lightanimation.cpp
        p3d/anim/multicontroller.cpp
        p3d/anim/polyskin.cpp
        p3d/anim/pose.cpp
        p3d/anim/poseanimation.cpp
        p3d/anim/sequencer.cpp
        p3d/anim/shaderanimation.cpp
        p3d/anim/skeleton.cpp
        p3d/anim/textureanimation.cpp
        p3d/anim/vertexanimcontroller.cpp
        p3d/anim/vertexanimkey.cpp
        p3d/anim/vertexanimobject.cpp
        p3d/anim/vertexoffsetexpression.cpp
        p3d/anim/visibilityanimation.cpp
        p3d/effects/effect.cpp
        p3d/effects/optic.cpp
        p3d/effects/opticlensflare.cpp
        p3d/effects/opticloader.cpp
        p3d/effects/particlearray.cpp
        p3d/effects/particleemitter.cpp
        p3d/effects/particlegenerator.cpp
        p3d/effects/particleloader.cpp
        p3d/effects/particlepool.cpp
        p3d/effects/particlesystem.cpp
        p3d/effects/particletype.cpp
        p3d/effects/particleutility.cpp
        p3d/effects/transitionmanager.cpp
        p3d/scenegraph/nodeanimation.cpp
        p3d/scenegraph/scenegraph.cpp
        p3d/shadow/shadow_common.cpp
        p3d/shadow/shadow_generic.cpp
)

target_include_directories(
        # Target
        pure3d

        # Include directories
        PUBLIC

        ${CMAKE_CURRENT_SOURCE_DIR}
        ${CMAKE_CURRENT_SOURCE_DIR}/p3d
#        ${CMAKE_CURRENT_SOURCE_DIR}/p3d/platform/win32
        ${CMAKE_CURRENT_SOURCE_DIR}/p3d/anim
        ${CMAKE_CURRENT_SOURCE_DIR}/p3d/effects
        ${CMAKE_CURRENT_SOURCE_DIR}/p3d/scenegraph
        ${CMAKE_CURRENT_SOURCE_DIR}/constants
        ${CMAKE_CURRENT_SOURCE_DIR}/p3d/shadow
        ${CMAKE_CURRENT_SOURCE_DIR}/../constants
)