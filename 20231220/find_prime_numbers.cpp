#include <iostream>
#include <time.h>

using namespace std;

#define MAX_NUM 60000
// storage
int prime_storage[MAX_NUM]; // global variable 全域變數

/*
n : find prime numbers from 0 ~ n
return : numbers of prime found
*/
int find_prime_in(int n)
{
    prime_storage[0] = 2;
    int storage_size = 1;
    int is_prime;

    for (int to_check = 3; to_check <= n; to_check++)
    {
        is_prime = 1;

        for (int i = 0; i < storage_size; i++)
        {
            if (to_check % prime_storage[i] == 0)
            {
                is_prime = 0;
                break;
            }
        }

        // check if is prime
        if (is_prime)
        {
            prime_storage[storage_size] = to_check;
            storage_size++;
        }
    }

    return storage_size;
}

/*
n :
return : the n-th prime number
*/
int find_prime_at(int n)
{
    prime_storage[0] = 2;
    int storage_size = 1;
    int is_prime;

    for (int to_check = 3; storage_size < n; to_check++)
    {
        is_prime = 1;

        for (int i = 0; i < storage_size; i++)
        {
            if (to_check % prime_storage[i] == 0)
            {
                is_prime = 0;
                break;
            }

            if(prime_storage[i]*prime_storage[i] > to_check)
            {
                break; // early stop
            }
        }

        // check if is prime
        if (is_prime)
        {
            prime_storage[storage_size++] = to_check;
        }
    }

    return prime_storage[storage_size-1]; // the last number found
}

void print_result(int s)
{
    cout << "["<< endl;
    for(int i = 0;i<s;i++)
    {
        cout << prime_storage[i] << ", ";
        if(i%10 == 9)
        {cout << endl;}
    }
    cout << endl << "]" << endl;
}

int main()
{
    //int s = find_prime_in(1000); // from 0 to 100
    //print_result(s);
    
    clock_t start_time,end_time;

    cout << "start" << endl;

    start_time = clock();
    int number = find_prime_at(50000);
    end_time = clock();

    cout << "stop" << endl;

    cout << number << endl;
    cout << "[Time cost] "<< end_time - start_time << " (ms)"<< endl;

    return 0;
}