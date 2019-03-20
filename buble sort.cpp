#include <iostream>
using namespace std;
int main()
{
int inputdata,a,b;
bool adatukar;
                int simpandata[100],temp;
                cout<< " JUMLAH DATA YANG DIINPUTKAN : ";
                cin>>inputdata;
                a = 0;
                    while (a < inputdata)
                {
                    cout<<"INPUTKAN DATA KE-" << a + 1 << ": ";
                    cin>>simpandata[a];
                    a++;
                }

                    adatukar=true;
                    a=1;

                    while (a<inputdata && adatukar)
                {
                    b=1;
                    adatukar=false;
                    while (b<=(inputdata-1))
                {
                        if (simpandata[b-1] > simpandata[b])
                {
                        adatukar=true;
                        temp=simpandata[b-1];
                        simpandata[b-1]=simpandata[b];
                        simpandata[b]=temp;
                }
                        b++;
                }
                        a++;
                }
                        a = 0;
                        cout<<endl<<endl;
                        cout<<"DATA YANG TER-URUT : ";
                        while (a<inputdata)
                {
                        cout<<simpandata[a]<<" " ;
                        a++;
                }
                        cout<<"ENJOYING (^_^)"<<endl<<endl;
                        return 0;
}
