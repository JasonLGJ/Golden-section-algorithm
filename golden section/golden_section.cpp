//This is a Golden section algorithum code;
//function is x^2-x+2;
//At the beginning, you need to input the stop error(e), and the start numbers 'a' and 'b';
//Then the program start to iteration. Of course, you can alter the function, the 'e', the 'a' 'b';
#include <iostream>  
#include <math.h>  
using namespace std;  

double function(double x)  
{      
    return (x*x-x+2);  
}  

void solve(double e, double a1, double b1)  
{  
    double x1, x2, a=a1, b=b1;  
    int count=0;  
    while((b-a-e)>0.000000001)  
    {   count+=1;  
        cout<<"the times of iteration: "<<count<<endl;  
        x2=a+0.618*(b-a);  
        x1=a+0.382*(b-a);  
        cout<<"x1="<<x1<<"\tx2="<<x2<<endl;  
        cout<<"f(x1)= "<<function(x1)<<"\tf(x2)= "<<function(x2)<<endl;  
        if(function(x1) - function(x2) > 0)  
        {  
            a=x1;  
            cout<<"f(x1)>f(x2)"<<endl;  
        }  
        else if(function(x1) - function(x2) < 0)  
        {  
            b=x2;  
            cout<<"f(x1)<f(x2)"<<endl;  
        }
		else
		{
			a=x1;
			b=x2;
			cout<<"f(x1)=f(x2)"<<endl;
		}
        cout<<"a="<<a<<"\tb="<<b<<endl;  
    }  
    cout<<"the times of iteration: "<<count<<"\nthe best x: "<<((a+b)/2)<<"\nthe best answer: "<<function((a+b)/2)<<endl;  
}  
int main()  
{  
    double er,a,b;  
    cout<<"Please input the e: ";  
    cin>>er;  
    cout<<"Please input the a and b: "<<endl;  
    cin>>a>>b;  
    solve(er,a,b);      
}
