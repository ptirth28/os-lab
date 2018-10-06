#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,k,a,b,ct[100],wt[100],tat[100];
    float a1=0,ttat=0,twt=0,a2;
    vector<pair <int,int > >v;

    printf("Enter the number of processes: \n");
    scanf("%d",&n);

    for(i=0;i<n;++i){
        printf("Enter a and b for process %d: ",i+1);
        scanf("%d %d",&a,&b);
        v.push_back(make_pair(a,b));
    }
    sort(v.begin(),v.end());

    for(i=0;i<n;i++)
        {
        if(i==0)
        {
           ct[i]= v[i].first+v[i].second;
        }
        else if(ct[i-1]>v[i].first)
        {
            ct[i]=ct[i-1]+v[i].second;
        }

        else
        ct[i]=v[i].first+v[i].second;



        }


    for(i=0;i<n;++i){
        tat[i]=ct[i]-v[i].first;
        ttat+=tat[i];
    }
    for(i=0;i<n;++i){
        wt[i]=tat[i]-v[i].second;
        twt+=wt[i];
    }


    printf("Process\t AT\t BT\t CT\t TAT\t WT\n");
    for(i=0;i<n;++i){
        printf("P[%d]\t %d\t %d\t %d\t %d\t %d\n",i+1,v[i].first,v[i].second,ct[i],tat[i],wt[i]);
    }

    printf("ATAT=%f \snAWT=%f\n",ttat/n,twt/n);



}
