#include <iostream>
#include <time.h>

using namespace std;

#define MAX_NUM 60000
// storage
long long prime_storage[MAX_NUM]; // global variable 全域變數
long long prime_power[MAX_NUM]; // 該質數的次方

int  prime_factorize(long long n)
{
    int storage_size = 1;
    prime_storage[0] = 2;

    while(1) // 一直做
    {
        // check the power
        prime_power[storage_size-1] = 0;
        //cout << "[check] " << prime_storage[storage_size-1] << endl;
        while(n%prime_storage[storage_size-1] == 0) // 如果可以被當下的質數整除
        {
            n /= prime_storage[storage_size-1]; // 除掉質數
            prime_power[storage_size-1]++; // 次方+1
        }
        // if n == 1
        if(n == 1) // stop
        {
            break;
        }

        // 提前認定是質數
        if(prime_storage[storage_size-1]*prime_storage[storage_size-1] > n)
        {
            prime_storage[storage_size] = n;
            prime_power[storage_size] = 1;
            storage_size++;
            break;
        }

        // find next prime number
        int next_num = prime_storage[storage_size-1]+1; // 假設下一個數字就是質數
        // 當還沒找到下一個質數的時候就一直重複，但是next_num會遞增
        for(int is_prime = 0;is_prime == 0;next_num++)
        {
            //cout << "[check prime] " << next_num << endl;
            //int x;
            //cin >> x; 
            // 假設當下的next_num是質數
            is_prime = 1;
            // 逐一驗證
            for(int i = 0;i<storage_size;i++)
            {
                if(next_num % prime_storage[i] == 0){
                    is_prime = 0; // 發現是和數
                    break; // 中斷檢查
                }

                // 提前結束
                if(prime_storage[i]*prime_storage[i] > next_num)
                {
                    break;
                }
            }
        }
        next_num--; // 處理for loop造成的+1
        //cout << "[next prime] " << next_num << endl;
        // 已經找到下一個質數了
        prime_storage[storage_size] = next_num; // 儲存質數
        storage_size++; // 有效儲存大小+1
    }

    return storage_size;
}

void print_factorize_result(int s)
{
    for(int i=0;i<s;i++)
    {
        if(prime_power[i] == 0) continue;
        cout << prime_storage[i];
        if(prime_power[i]>1) cout << "^" << prime_power[i];
        if (i != s-1)
        {
            cout << " * ";
        }
    }
    cout << endl;
}

int main()
{
    clock_t start_time,end_time;
    int x;
    cin >> x;

    //cout << "start" << endl;

    //start_time = clock();
    int s = prime_factorize(x);
    //end_time = clock();

    //cout << "stop" << endl;

    print_factorize_result(s);

    //cout << "[Time cost] "<< end_time - start_time << " (ms)"<< endl;

    return 0;
}