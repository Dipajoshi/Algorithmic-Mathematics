#include <stdio.h>
#include <math.h>
float f(float x)
{
    return (x * x + 3 * x + 1);
}
int main()
{   int i= 1;
    float a, b, root, prevroot, realerror, error = 0.001;
    again:
    printf("enter initial guess\n");
    scanf("%f%f", &a, &b);
    prevroot=b;
    if (f(a)*f(b) > 0||f(a)>0)
    {
        printf("invalid initial guess\n");
        goto again;
    }
    realerror = b - a;
    if (realerror < 0)
    {
        realerror = -1 * realerror;
    }
    while (realerror > error)
    {
        root = (a + b) / 2;
        
        if (f(root) < 0)
        {
            a = root;
        }
        else
        {
            b = root;
        }
       

        realerror = root - prevroot;
        if (realerror < 0)
        {
            realerror = -1 * realerror;
        }
        prevroot = root;
       
        printf ("\n i=%d    a=%f    f(a)=%f   b=%f    f(b)=%f     root=%f      f(root)=%f   realerror=%f"  ,i,a,f(a),b,f(b),root,f(root), realerror);
    i++;
    }
    
    return 0;
}
      
