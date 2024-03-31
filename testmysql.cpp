#include <mysql/mysql.h>
#include <string>
#include <iostream>
#include<stdio.h>
#include "sql_connection_pool.h"

int main(){
    MYSQL *mysql = mysql_init(NULL);
    MYSQL_RES* res;//查询结果集
	  MYSQL_ROW row;//记录结构体


    std::string host   = "localhost";
    std::string user   = "root"; //该用户必须有远程访问权限
    std::string passwd = "";
    std::string db     = "test_table";
    unsigned int port   = 3306;
    if(mysql_real_connect(mysql, "localhost", "root", "", "test_table", port, NULL, 0)==NULL){
		printf("错误原因: %s\n", mysql_error(mysql));
		printf("连接失败！\n");
		exit(-1);
    }
    printf("连接成功！\n");


    int ret = mysql_query(mysql, "select * from student;");
	printf("ret: %d\n", ret);

    
	res = mysql_store_result(mysql);

	while (row = mysql_fetch_row(res))
	{
		printf("%s ", row[0]);//学号
		printf("%s ", row[1]);//姓名
		printf("%s \n", row[2]);//分数
    }

    //connectionRAII conRAII();
    m_connPool = connection_pool::GetInstance();
    m_connPool->init("localhost", "root", "", "test_table", 3306, 6, 0);
}