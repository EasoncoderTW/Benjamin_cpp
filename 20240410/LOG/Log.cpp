#include "Log.h"
#include <fstream>
#include <time.h>
#include <string.h>

// 都使用預設值建構
Log::Log()
{
    this->filename = "log.txt";
    this->buffer_size = 5;
    this->log_buffer = new string[5];
    log_count = 0;
}

//採用filename存檔，其餘參數使用預設值
Log::Log(string filename)
{
    this->filename = filename;
    this->buffer_size = 5;
    this->log_buffer = new string[5];
    log_count = 0;
}

//採用filename存檔，緩衝區也跟著設定
Log::Log(string filename,int buffer_size)
{
    this->filename = filename;
    this->buffer_size = buffer_size;
    this->log_buffer = new string[buffer_size];
    log_count = 0;
} 

// 解構式
Log::~Log()
{
    cout << "Log Magager is closing. Auto saving." << endl;
    this -> save();
    cout << "Closing..." << endl;
    delete[] log_buffer; // release memory
}

// 功能

// 新增紀錄
void Log::add(string s)
{
    time_t t = time(0); // 取得時間
    char *time_s = ctime(&t); // 時間轉為字串
    int l = strlen(time_s); // 取得字串長度
    time_s[l-1] = 0; // 將字串的最後一個位置填0(把"\n"覆蓋掉)
    log_buffer[log_count] = "[" + string(time_s) + "]:" + s; // 時間戳記字串 + log字串
    log_count++;
    if(log_count >= buffer_size)
    {
        save();
    }
}

// 存檔
void Log::save()
{
    ofstream ofile;// output file stream 檔案輸出串流
    ofile.open(filename,ios::app); // 開檔 "append mode"
    for(int i =0;i<log_count;i++)
    {
        ofile << log_buffer[i] << endl;
    }
    ofile.close();
    cout << "Save to "<< filename << endl;
    log_count = 0;
} 

// Log2
void Log2::concat(Log2 x)
{
    // copy buffer
    for(int i = 0;i< x.log_count; i++)
    {
        add(x.log_buffer[i]);
    }
    // 通知完成合併
    cout << "[Concat] Complete (" << filename <<"<-"<< x.filename <<")" << endl;
}