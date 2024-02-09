#include <iostream>
using namespace std;
#include <stdlib.h>
#include "sorting.h"

int main(int argc, char *argv[]) {
    
 
  cout<<"argc is "<<argc<<endl;
    int i,N=argc-1;
    int Bmoves,Smoves,Imoves;
    int *a= new int[N];
    for(i=1;i<argc;i++){
        cout<<"argv[" << i<<"]" <<argv[i]<<endl;
        a[i-1] = atoi(argv[i]);
    }
  cout<<"Bsorting"<<endl;
    Bsorting(a,N,Bmoves);
    cout<<"bubble's number moves :"<<Bmoves<<endl;

  cout<<"Ssorting"<<endl;
    Ssorting(a,N,Smoves);
    cout<<"select's number moves :"<<Smoves<<endl;

  cout<<"Isorting"<<endl;
    Isorting(a,N,Imoves);
    cout<<"insert's number moves :"<<Imoves<<endl;
    
    
    return 0;
}