#include <stdio.h>
#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    /* string to token(字串片段) */

    char names[] = "Name:Eason,Billy,Amy,Mark,Cindy,Jack,Aric";
    //char names[] = "Eason Billy";
    int origin_len = strlen(names); // string length

    //cout << origin_len << endl;
    //char *result = strtok(names," "); // 在 names 字串中以 " " 作為分割點(seperator)

    // result 是分割後的字串起始位置
    //cout << result << endl;

    //result = strtok(NULL," "); // 來源字串如果是 NULL，表示沿用前一次的字串結果
    //cout << result << endl;

    char *result;
    result = strtok(names, ":");
    while(result != NULL)
    {
        cout << "Token: "<< result << endl;
        result = strtok(NULL, ",");
    }

    cout << names << endl;

    for(int i = 0;i<origin_len;i++)
    {
        if(names[i]!='\0')cout << names[i];
        else cout << "_";
    }
    cout << endl;


    char ques_str[] = "Name:Eason,Phone:0987654321";

    

    char *name; // cout << name << endl; -> "Eason"
    char *phonenumber; // cout << phonenumber << endl; -> "0987654321"


    return 0;
}

