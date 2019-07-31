#include <iostream>

using namespace std;

// 10000019              1, 5 0s, 19
// 100000007             1, 7 0s,  7
// 1000000007            1, 8 0s,  7
// 10000000019           1, 8 0s, 19
// 100000000003          1,10 0s,  3
// 1000000000039         1,10 0s, 39
// 10000000000037        1,11 0s, 37
// 100000000000031       1,12 0s, 31
// 1000000000000037      1,13 0s, 37
// 10000000000000061     1,14 0s, 61
// 100000000000000003    1,16 0s,  3
// 1000000000000000003   1,17 0s,  3
// 10000000000000000051  1,17 0s, 51
// 100000000000000000039 1,18 0s, 39

// 1000000014000000049   special

int main()
{
    uint64_t uNum = 0;
    bool rval = true;
    cout << "=====PRIME TESTER=====\n";
    while (true)
        {
        cout << "input integer for testing: ";
        cin >> uNum;
        if (1 < uNum) {
            bool rval=true;
            for(uint64_t i=2; i<uNum; i=i+1){
                if (uNum%i==0) {rval=false;break;}}
            if (rval) cout<<"the number "<<uNum<<" is prime\n";
            else      cout<<"the number "<<uNum<<" is not prime\n";}
        else
            if (uNum < 1) {cout << "====ALL DONE=====\n";break;}
            else          {cout << "====TRY AGAIN====\n";      }
        }
    return 0;
}
