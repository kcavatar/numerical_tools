// Bisection method involves searching for a root within the bracket in which value the function 
// changes its sign from positive to negative or vice-versa
// Krishna Chand Avatar, 2016.
#include<iostream>
#include<math>
using namespace std;

float func(float x)
{
  float val;
  val = x*x - x + 1;   // Enter your own function here
  return val;
}
int main()
{
  cout<<"Bisection Method"<<endl<<endl;
  float x, xleft, xright, fxright, fxleft;
  cout<<"Enter left limit : \t";
  cin>>xleft;
  cout<<"Enter right limit : \t";
  cin>>xright;
  float tol = 0.0001;   // Enter your own tolerance value
  float err=1;
  fxright = func(xright); fxleft = func(xleft);
  while(err>=tol)
  {
    x = (xleft+xright)/2;
    float fx = func(x);
    if(fx*fxleft<0)
    { 
      err = abs(xright - x);
      xright = x;
    }
    else {
    err = abs(xright - x);
    xleft = x;
    }
  }
  cout<<"\nThe root of the given function is "<<x<<endl;
 }
