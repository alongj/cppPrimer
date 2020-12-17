cmake_minimum_required(VERSION 3.8)
project(cppPrimer)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp head/studenti.h cpp/Student.cpp)
add_executable(cppPrimer ${SOURCE_FILES})

set(SOURCE_TMP cpp/tmp2tmp.cpp)
add_executable(cpp_tmp ${SOURCE_TMP})

set(manyfrnd cpp/manyfrnd.cpp)
add_executable(cpp_manyfrnd ${manyfrnd})


set(tvfm head/tvfm.h cpp/tvfmMain.cpp)
add_executable(cpp_tvfm ${tvfm})

set(str1 cpp/str1.cpp)
add_executable(str1 ${str1})

set(str2 cpp/str2.cpp)
add_executable(str2 ${str2})

set(strfile cpp/strfile.cpp)
add_executable(strfile ${strfile})

set(smartptrs cpp/smartptrs.cpp)
add_executable(smartptrs ${smartptrs})

set(vect2 cpp/vect2.cpp)
add_executable(vect2 ${vect2})

set(setops cpp/setops.cpp)
add_executable(setops ${setops})

set(sizeofPrinter cpp/sizeofPrinter.cpp)
add_executable(sizof ${sizeofPrinter})

set(arrayPtr cpp/arrayPtr.cpp)
add_executable(arrayPtr ${arrayPtr})

set(twoSum cpp/twoSum.cpp)
add_executable(twoSum ${twoSum})

set(mianshi_5_4  mianshi/mianshi_5_4.cpp)
add_executable(mianshi_5_4 ${mianshi_5_4})

set(mianshi_5_6  mianshi/mianshi_5_6.cpp)
add_executable(mianshi_5_6 ${mianshi_5_6})

set(mianshi_7_5  mianshi/mianshi_7_5.cpp)
add_executable(mianshi_7_5 ${mianshi_7_5})

set(mianshi_8_2  mianshi/ms_8_2.cpp)
add_executable(mianshi_8_2 ${mianshi_8_2})

set(leet100 leetcode/100_sametree.cpp)
add_executable(leet100 ${leet100})

set(leet101 leetcode/101_symmetrictree.cpp)
add_executable(leet101 ${leet101})

set(leet438 leetcode/leetcode438.cpp)
add_executable(leet438 ${leet438})

set(leet501 leetcode/leetcode501.cpp)
add_executable(leet501 ${leet501})

set(leet376 leetcode/leetcode376.cpp)
add_executable(leet376 ${leet376})

set(leet6 leetcode/leetcode6.cpp)
add_executable(leet6 ${leet6})

set(leet7 leetcode/leetcode7.cpp)
add_executable(leet7 ${leet7})

set(leet141 leetcode/leetcode141.cpp)
add_executable(leet141 ${leet141})

set(leet373 leetcode/leetcode373.cpp)
add_executable(leet373 ${leet373})

set(leet481 leetcode/leetcode481.cpp)
add_executable(leet481 ${leet481})

set(leet114 leetcode/leetcode114.cpp)
add_executable(leet114 ${leet114})

add_executable(leetcode1022 leetcode/leetcode1022.cpp)

add_executable(leetcode892 leetcode/leetcode892.cpp)

add_executable(taoTest mianshi/taoTest.cpp)

set(tcontainer struct/testTcontainer.cpp)
add_executable(tcontainer ${tcontainer})


add_executable(sigactionTest csignal/sigationTest.cpp)
#find_package(OpenGL REQUIRED)
#include_directories(${OPENGL_INCLUDE_DIR})
#
#find_package(GLUT REQUIRED)
#include_directories(${GLUT_INCLUDE_DIR})
#set(CMAKE_CXX_FLAGS "-g -Wall")


# 添加头文件
set(GLEW_H /usr/local/Cellar/glew/2.1.0/include/GL)
set(GLFW_H /usr/local/Cellar/glfw/3.2.1/include/GLFW)
include_directories(${GLEW_H} ${GLFW_H})

# 添加目标链接
set(GLEW_LINK /usr/local/Cellar/glew/2.1.0/lib/libGLEW.2.1.dylib)
set(GLFW_LINK /usr/local/Cellar/glfw/3.2.1/lib/libglfw.3.dylib)
link_libraries(${OPENGL} ${GLEW_LINK} ${GLFW_LINK})

set(openglTest  opengl/openglTest.cpp opengl/LoadShaders.cpp)
#add_executable(openglTest ${openglTest} ${GLUT_LIBRARY} ${OPENGL_LIBRARY})

add_executable(openglTest ${openglTest})

if (APPLE)
    target_link_libraries(openglTest "-framework OpenGL -framework GLUT")

endif()