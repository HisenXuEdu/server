project(webserver)

include_directories(${PROJECT_SOURCE_DIR}/util ${PROJECT_SOURCE_DIR}/http ${PROJECT_SOURCE_DIR}/CGImysql)
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_CURRENT_SOURCE_DIR})

add_subdirectory(CGImysql)
add_subdirectory(http)
link_libraries(pthread httplib mysqllib)
add_executable(test main.cpp)
# target_link_libraries(pthread)