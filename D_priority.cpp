#include <stdio.h>
#include<iostream>
using namespace std;
int main()
{
    int at[4]={1,3,4,5},bt[4]={3,4,2,6};
    int ct[4],bt1[4]={3,4,2,6};
    int pr[4]={2,3,1,4};
    int pr1[4]={2,3,1,4};
    int tat[4];
    int cnt,total=0,min=999;
    int c;
    while(1)
    {
        min=999;
        cnt=0;
        for(int i=0;i<4;i++)
        {
            if(at[i]<=total)
            {
                cnt++;
                if(pr[i]<min)
                {
                    min=pr[i];
                    c=i;
                }
            }
        }
        if(cnt==0)
        {
            total++;
            continue;
        }
        if(min==999)
        {
            break;
        }
        pr[c]=999;
        total=total+bt1[c];
        ct[c]=total;
        tat[c]=ct[c]-at[c];
    }
    cout<<"P  "<<"at"<<"  "<<"bt"<<"  "<<"tat"<<"  "<<"ct"<<"  "<<"pr"<<endl;
    for(int i=0;i<4;i++)
    {
        cout<<i+1<<"  "<<at[i]<<"   "<<bt1[i]<<"   "<<tat[i]<<"   "<<ct[i]<<"  "<<pr1[i]<<endl;
    }
    return 0;
}

