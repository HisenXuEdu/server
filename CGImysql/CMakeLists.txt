aux_source_directory(. mysql_file) #查找当前目录下的tool1相关文件

# include_directories(${PROJECT_SOURCE_DIR}/util)

link_libraries(mysqlclient)
add_library(mysqllib ${mysql_file})   #将他们编译为一个叫tool1lib的文件
message(STATUS "XXXXXmysql" ${PROJECT_SOURCE_DIR})