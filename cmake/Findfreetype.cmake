# Another mismatch... Upstream is freetype but CMake is Freetype::Freetype
find_package(freetype CONFIG QUIET)


if(NOT TARGET freetype)
    unset(CMAKE_MODULE_PATH)
    find_package(Freetype MODULE)
    set(CMAKE_MODULE_PATH ${CMAKE_CURRENT_LIST_DIR})

    if(FREETYPE_FOUND)
        if(NOT TARGET freetype)
            add_library(freetype ALIAS Freetype::Freetype)
        endif()
    elseif(Freetype_FIND_REQUIRED)
        message(FATAL_ERROR "Could NOT find freetype")
    endif()
endif()
