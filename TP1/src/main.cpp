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
  HashMap map;

  if(argc<=1){
    cout << "Need file name as argument!" << endl;
    exit(1);
  }else{
    ifstream file;
    file.open(argv[1]);
    string word;
    while (file >> word){
      map.compteur(word);
      cout << word << endl;
    }
  }

  //utilisation normale
  string popword="";
  int popcount=0;
  vector<string> thekeys=map.getKeys();
  for(int i=0;i<thekeys.size();i++){
    int count=0;
    map.get(thekeys[i],count);
    if(count>popcount){
      popcount=count;
      popword=thekeys[i];
    }
  }

  cout << popword << " => " << popcount << endl;
  
  return 0;
}

