aux_source_directory(. http_file) #查找当前目录下的tool1相关文件

# include_directories(${PROJECT_SOURCE_DIR}/util)
message(STATUS "XXXXX:" ${PROJECT_SOURCE_DIR})
add_library(httplib ${http_file})   #将他们编译为一个叫tool1lib的文件