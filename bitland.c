#include <stdio.h>



int main(void) {
    int w,nos,nod,arr[1000000];
    scanf("%d",&w);
    for(;w--;){
        int sum=0,i,j,k,p,t,f=0,s[100000],y;
        scanf("%d%d",&nos,&nod);			//nos is no of states and nod is no if dist in ech state
       
       for(i=0;i<nos*nod;i++)scanf("%d",&arr[i]);	//taking input of the rep of ech dist
        

        for(i=0;i<nos*nod;i++){
             // printf("i is %d\n",i);
            sum=0;
            for(y=0;y<nos;y++)s[y]=0;			//s is the sum of values of the dists in a state

            for(j=i,t=i;j<i+nos*nod;j++,t++){
                if(t>(nos*nod-1))t=t%(nos*nod);
                p=(j-i)/(nod);
              // printf("p is %d\n  ",p);
                s[p]+=arr[t];
                //printf("%d ",arr[t]);
                
            }
            for(k=0;k<nos;k++){
             //   printf("s%d is %d \n",k,s[k]); 
                sum+=s[k]/(nod/2+1);}
          
            //printf("sum is %d \n",sum);
            if(sum>=(nos+1)/2){printf("%d",1);f=1;break;}
        }
       // printf("f is %d",f);
        if(f==0)printf("%d",0);
        
    }

	return 0;
}

