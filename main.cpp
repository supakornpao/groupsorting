#include <iostream>
#include <cstring>
#include <chrono>
using namespace std;
#include <stdlib.h>
#include "sorting.h"

int main(int argc, char *argv[]) {
    
 
    cout<<"argc is "<<argc<<endl;
    int i,N=argc-2;
    int Bmoves=0,Smoves=0,Imoves=0;
    int *a= new int[N];
    for(i=2;i<argc;i++){
        a[i-2] = atoi(argv[i]);
    }

    auto started = std::chrono::high_resolution_clock::now();

    if(strcmp(argv[1],"bubble")==0){
        cout << "======Bubble Sort======" << endl;
        Bsorting(a,N,Bmoves);
        cout<<"Bubble's number of moves :"<<Bmoves<<endl;
    }
    else if(strcmp(argv[1],"selection")==0){
         cout << "======Selection Sort======" << endl;
        Ssorting(a,N,Smoves);
        cout<<"Selection's number of moves :"<<Smoves<<endl;
    }
    else if(strcmp(argv[1],"insertion")==0){
         cout << "======Insertion Sort======" << endl;
        Isorting(a,N,Imoves);
        cout<<"Insertion's number of moves :"<<Imoves<<endl;
    }
    else {
      cout<<"This sorting algorithm does not exist in this program"<<endl; 
    }
    
    
    auto done = std::chrono::high_resolution_clock::now();

    display(a,N);

    auto duration = std::chrono::duration_cast<std::chrono::nanoseconds>(done-started); //time difference calculation (nanoseconds)

    cout<<"Time taken by the program: ";
    double sorting_time = duration.count()*0.000001; //from ns to ms


    cout<<sorting_time<<" ms"<<endl;
    delete[] a;
    
    return 0;
}