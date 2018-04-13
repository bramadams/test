#include <iostream>
#include "average.h"

using namespace std;

double average(int values[],int n)
{
  double res=0.0;

#ifdef FEATURE
  cout << "working on feature" << endl;
#else
  if(n==0){
    return 0;
  }
#endif
  
  for(int i=0;i<n;i++){
    res+=values[i];
  }

  res/=n;

  return res;
}
 
