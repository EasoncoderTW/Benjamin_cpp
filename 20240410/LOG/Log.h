#include <iostream>
using namespace std;

/* Log class */
/*
    1. 儲存記錄(文字記錄)
    2. 擁有時間戳記(v2)
    3. 自動存檔
*/

class Log
{
    protected:
        string filename; // 存檔位置
        string *log_buffer; // 暫存紀錄(預設五段話)
        int buffer_size;
        int log_count;
    
    public:
        Log(); 
        Log(string filename); //採用filename存檔，其餘參數使用預設值
        Log(string filename,int buffer_size); //採用filename存檔，緩衝區也跟著設定
        virtual ~Log(); // 解構式
        // 功能
        void add(string s);// 新增紀錄
        void save(); // 存檔
};

/* 合併 log file */
class Log2:public Log{
    public:
        Log2():Log(){}; 
        Log2(string filename):Log(filename){}; //採用filename存檔，其餘參數使用預設值
        Log2(string filename,int buffer_size):Log(filename,buffer_size){}; //採用filename存檔，緩衝區也跟著設定
        void concat(Log2 x);
};
