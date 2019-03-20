#include <iostream>
#include <conio.h>
using namespace std;

void quicksort (int simpan[],int kiri,int kanan)
{
    int i=kiri, j=kanan;
    int tmp;
    int pembagian=simpan[(kiri+kanan)/2];

    while(i<=j)
    {
        while(simpan[i]<pembagian)
        i++;
        while(simpan[j]>pembagian)
        j--;

        if(i<=j)
        {
            tmp=simpan[i];
            simpan[i]=simpan[j];
            simpan[j]=tmp;
            i++;
            j--;
        }
    }
        if (kiri<j)
            quicksort(simpan,kiri,j);
        if(i<kanan)
            quicksort(simpan,i,kanan);
}

main()
{
    int simpan[100];
    int i,n,lb,ub;
    lb=0;

    cout<<"MASUKKAN BANYAK DATA YANG AKAN DIURUTKAN :";
    cin>>n;

    ub=n;
    cout<<"MASUKKAN DATA : \n\n";
    for(i=1;i<=n;i++)
    {
        cout<<"\tDATA KE- "<<i<< ":";
        cin>>simpan[i];
    }
    quicksort(simpan,lb,ub);
    cout<<"\nHASIL PENGURUTAN :";
    for(i=1;i<=n;i++)
    cout<<" "<<simpan[i];
    getch();
}

