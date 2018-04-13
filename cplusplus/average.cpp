double average(int values[],int n)
{
  double res=0.0;

  if(n==0){
    return 0;
  }
  
  for(int i=0;i<n;i++){
    res+=values[i];
  }

  res/=n;

  return res;
}
 
