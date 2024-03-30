#include <iostream>

using namespace std;

struct scoreborad
{
    int id;         // bias +0
    int score[10];  // bias +4,+8,+12,+16,...,+40
    int sum;        // bias +44
    float average;  // bias +48
}; // 52 bytes

// value
struct scoreborad calculate_sum(struct scoreborad s)
{
    s.sum = 0;
    for(int i=0;i<10;i++)
    {
        s.sum += s.score[i];
    }

    return s;
}

// reference
void calculate_sum_2(struct scoreborad *s_pointer)
{
    //(*s_pointer).sum = 0;
    s_pointer->sum = 0;
    for(int i=0;i<10;i++)
    {
        //(*s_pointer).sum += (*s_pointer).score[i];
        s_pointer->sum += s_pointer->score[i];
    }
}

int main()
{
    struct scoreborad s1 = {
        0,
        {90,80,96,95,95,84,100,96,97,95},
        0,
        0};

    //s1 = calculate_sum(s1); // call by value
    //cout << &s1 <<endl;
    calculate_sum_2(&s1); 
    cout << s1.sum << endl;

    return 0;
}