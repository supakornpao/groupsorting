#include <iostream>
#include <cstring>
using namespace std;
#include <stdlib.h>
#include "sorting.h"

int main(int argc, char *argv[]) {
    
 
  cout<<"argc is "<<argc<<endl;
    int i,N=argc-2;
    int Bmoves=0,Smoves=0,Imoves=0;
    int *a= new int[N];
    for(i=2;i<argc;i++){
        cout<<"argv[" << i<<"]" <<argv[i]<<endl;
        a[i-2] = atoi(argv[i]);
    }

     if(strcmp(argv[1],"bubble")==0){
        cout << "Bubble Sort:" << endl;
        Bsorting(a,N,Bmoves);
        cout<<"bubble's number of moves :"<<Bmoves<<endl;
      }
       if (strcmp(argv[1],"selection")==0){
         cout << "Selection Sort:" << endl;
        Ssorting(a,N,Smoves);
        cout<<"Selection's number of moves :"<<Smoves<<endl;
      }
    if (strcmp(argv[1],"insertion")==0){
         cout << "Insertion Sort:" << endl;
        Isorting(a,N,Imoves);
        cout<<"Insertion's number of moves :"<<Imoves<<endl;
      }
   
  
  
  /*
  cout<<"Bsorting"<<endl;
    Bsorting(a,N,Bmoves);
    cout<<"bubble's number moves :"<<Bmoves<<endl;

  cout<<"Ssorting"<<endl;
    Ssorting(a,N,Smoves);
    cout<<"select's number moves :"<<Smoves<<endl;

  cout<<"Isorting"<<endl;
    Isorting(a,N,Imoves);
    cout<<"insert's number moves :"<<Imoves<<endl;
    */
    
    return 0;
}