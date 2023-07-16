cmake_minimum_required(VERSION 3.1)

project(Metabench CXX)


list(APPEND CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR})
include(metabench)

set(CMAKE_CXX_STANDARD 20)

include(CheckCXXCompilerFlag)
macro(append_cxx_flag testname flag)
    check_cxx_compiler_flag(${flag} ${testname})
    if (${testname})
        add_compile_options(${flag})
    endif()
endmacro()

append_cxx_flag(HAS_W_FLAG                         -W)
append_cxx_flag(HAS_WALL_FLAG                      -Wall)
append_cxx_flag(HAS_WEXTRA_FLAG                    -Wextra)
append_cxx_flag(HAS_WNO_LONG_LONG_FLAG             -Wno-long-long)
append_cxx_flag(HAS_WNO_UNUSED_LOCAL_TYPEDEFS_FLAG -Wno-unused-local-typedefs)
append_cxx_flag(HAS_WNO_UNUSED_PARAMETER_FLAG      -Wno-unused-parameter)
append_cxx_flag(HAS_WWRITE_STRINGS_FLAG            -Wwrite-strings)
append_cxx_flag(HAS_STDCXX1Y_FLAG                  -std=c++20)
append_cxx_flag(HAS_PEDANTIC_FLAG                  -pedantic)
append_cxx_flag(HAS_WNO_GNU_STRING_UDL             -Wno-gnu-string-literal-operator-template)
append_cxx_flag(HAS_WNO_UNUSED_VARIABLE            -Wno-unused-variable)
append_cxx_flag(HAS_FTEMPLATE_DEPTH				   -ftemplate-depth=5000)


enable_testing()

include_directories(include)

add_subdirectory(speedUp)










