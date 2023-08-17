#include<stdio.h>
#include<math.h>
#define fun x*x+3x+1
float bisection(float root)
{
return(root*root+3*root+1);
}
int main()
{
    float a,b,root,prevroot=1,realerror,error=0.001;
    printf("enter two numbers");
    scanf("%f%f",&a,&b);
    realerror=1;
    while(realerror>error){
        root=(a+b)/2;
        if(bisection(root)<0)
        {
            a=root;
        }
        else{
            b=root;
        }
        
        realerror=root-prevroot;
        if(realerror<0)
        {
            realerror=-1*realerror;
        }
        prevroot=root;
        printf("r=%f\n",realerror);
    printf("root=%f\n",root);
  }
    printf("r=%f",realerror);
    printf("root=%f",root);
  
    return 0;
}
/*
float guess;
if(guess=random());
*/