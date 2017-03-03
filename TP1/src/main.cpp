/* 
 * File:   main.cpp
 * Author: bram
 *
 * Created on November 8, 2015, 8:39 PM
 */

#include <fstream>
#include <iostream>
#include "HashMap.h"

using namespace std;

/* This function reads a file, then prints it, then tries out HashMap functions. */
int main(int argc, char** argv) {
  HashMap mymap;

  if(argc<=1){
    cout << "Need file name as argument!" << endl;
    exit(1);
  }else{
    ifstream file;
    file.open(argv[1]);
    string word;
    while (file >> word){
      cout << word << endl;
    }
  }

  //utilisation normale
  string popword="";
  int popcount=0;
  vector<string> thekeys=mymap.getKeys();
  for(int i=0;i<thekeys.size();i++){
    int count=0;
    mymap.get(thekeys[i],count);
    if(count>popcount){
      popcount=count;
      popword=thekeys[i];
    }
  }

  cout << popword << " => " << popcount << endl;

  HashMap hmap;
  hmap.put("v1",1);
  hmap.put("v3",1);
  hmap.put("v11",1);
  hmap.put("v13",13);
  
  int value;
  bool res = hmap.get("v13", value);
  if (res)
    cout << value << endl;
  
  hmap.remove("v1");
  res = hmap.get("v1", value);
  if (res)
    cout << "ERROR: " << value << endl;

  std::vector<std::string> keys=hmap.getKeys();
  for(int i=0;i<keys.size();i++){
    cout << keys[i] << endl;
  }
  
  return 0;
}

