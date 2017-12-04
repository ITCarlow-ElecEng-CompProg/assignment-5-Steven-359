/**

25/09/17
Steven O' Brien
Method of Least Squares of Linear Regression
Exercise 5

*/

#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main()
{
    //Displays program title
    cout << "Method of Least Squares of Linear Regression " << endl;

    //Variable Declarations
    double x[100]={0},y[100]={0},a,b,AvgX,AvgY;
    double xsum=0,x2sum=0,ysum=0,xysum=0;
    int i, n;

    //To find the size of arrays
    cout<<"\nEnter the no. of data pairs to be entered:\n";
    cin>>n;

    //Input x-values
    cout<<"\nEnter the x, y coordinates:\n";
    for (i=0;i<n;i++)
    {
        cin>>x[i]>>y[i];
    }


    for (i=0;i<n;i++)
    {
        xsum=xsum+x[i];                                 //calculate sigma(xi)
        ysum=ysum+y[i];                                 //calculate sigma(yi)
        x2sum=x2sum+pow(x[i],2);                        //calculate sigma(x^2i)
        xysum=xysum+x[i]*y[i];                          //calculate sigma(xi*yi)
    }

    AvgX = xsum/n;                                      //calculate X average
    AvgY = ysum/n;                                      //calculate Y average

    a=(n*xysum-xsum*ysum)/(n*x2sum-xsum*xsum);           //calculate slope
    b=(AvgY)-(a*AvgX);                                  //calculate intercept



    //print the best fit line
    cout<<"\nThe linear fit line is of the form:\n\n"<<a<<"x + "<<b<<endl;


    return 0;
}
