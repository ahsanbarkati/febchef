    #include<stdio.h>
    int main()
    {
        int c,sum=0,i,n,t,arr[100000];
        scanf("%d",&t);
        while(t--){sum=0;c=-1;
            scanf("%d",&n);
            for(i=0;i<n;i++)scanf("%d",&arr[i]);
            for(i=0;i<n;i++){sum=sum+1000;
                if(arr[i]==0)
                sum=sum+100;
                if(arr[i]==1){sum=sum-1000;
                if(++c!=i)
                sum+=100;
                }
            }
            printf("%d\n",sum);
        }
        return 0;
    } 
