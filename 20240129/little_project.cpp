#include <iostream>
#include <stdlib.h>
#include <cmath>

using namespace std;

float calculate(int a,char c, int b) // c = '+','-','*','/','^'
{
    float r;

    switch (c)
    {
        case '+':
            r = a+b;
            break;
        case '-':
            r = a-b;
            break;
        case '*':
            r = a*b;
            break;
        case '/':
            r = a/b;
            break;
        case '^':
            r = pow(a,b);
            break;
        default:
            r = 0;
    }

    return r;
}

int main()
{
    FILE *question_file = fopen("D:\\CODE\\C++_Benjamin\\20240129\\question.txt","r");
    FILE *answer_file = fopen("D:\\CODE\\C++_Benjamin\\20240129\\answer.txt","w");

    int number_A;
    int number_B;
    char symbol;

    float result;

    while(!feof(question_file)) // 當還沒(!)到檔案結尾(feof)
    {
        fscanf(question_file,"%d %c %d\n",&number_A,&symbol,&number_B); // read from file
        result = calculate(number_A,symbol,number_B); // calculate (+-*/)
        fprintf(answer_file,"%d %c %d = %.2f\n",number_A, symbol, number_B, result); // write out answer
    }

    fclose(question_file);
    fclose(answer_file);
    cout << "Calculate Done" << endl;

    return 0;
}