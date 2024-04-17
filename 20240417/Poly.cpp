#include "Poly.h"
#include <iostream>

using namespace std;

// .cpp: 我實際是在做甚麼?怎麼做?

Poly::Poly()
{
    this->level = 0;
    this->coef = new int[1];
    this->coef[0] = 0; // 係數都歸零
}

Poly::Poly(int level)
{
    this->level = level;
    this->coef = new int[level+1];
    //this->coef = (int*)malloc(sizeof(int)*(level+1));
    for(int i = 0;i <= level;i++)
    {
        this->coef[i] = 0; // 係數都歸零
    }
}

Poly::Poly(int level,  int* coef)
{
    this->level = level;
    this->coef = new int[level+1];
    //this->coef = (int*)malloc(sizeof(int)*(level+1));
    for(int i = 0;i <= level;i++)
    {
        this->coef[i] = coef[i]; // 係數填值
    }
}


Poly::~Poly()
{
    //free(this->coef);
    delete[] this->coef;
}

void Poly::print_out()
{
    for(int i = level;i>0;i--)
    {
        cout << coef[i] << "x^" << i << " + ";
    }
    cout << coef[0] << endl;
}

// 互動
ostream &operator<<(ostream &o, const Poly &p)
{
    for(int i = p.level;i>0;i--)
    {
        o << p.coef[i] << "x^" << i << " + ";
    }
    o << p.coef[0];
    return o;
}

Poly Poly::operator*(int c)
{
    Poly result(level);
    cout << "operator*(int c)" << endl;
    for(int i = 0;i<=level;i++)
    {
        result.coef[i] = coef[i] * c;
    }
    return result;
}

Poly operator*(int c,const Poly &p)
{
    Poly result(p.level);
    cout << "operator*(int c,Poly p)" << endl;
    for(int i = 0;i<=result.level;i++)
    {
        result.coef[i] = p.coef[i] * c;
    }
    return result;
}

Poly Poly::operator=(const Poly &p)
{
    this->level = p.level;
    delete[] this->coef;
    this->coef = new int[level];
    for(int i = 0;i<=level;i++)
    {
        this->coef[i] = p.coef[i];
    }
    return *this;
}

Poly Poly::operator*(const Poly &P)
{
    int max_level = level + P.level;
    Poly result(max_level);
    for(int i=0;i<=level;i++)
    {
        for(int j=0;j<=P.level;j++)
        {
            result.coef[i+j] += coef[i] * P.coef[j]; // 2x^2 * X^1 = 2x^3
        }
    }
    return result;
}