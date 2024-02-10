void display(int *a, int N){
    int i;
    for(i=0;i<N;i++) cout<<a[i]<<" ";
    cout<<endl;
}

void swap(int &x, int &y){
    int temp;
    temp=x;
    x=y;
    y=temp;
}

void Bsorting(int a[], int N, int &Bmoves){
    Bmoves=0;
    int i,j;
for(i=N-1;i>=0;i--){
    for(j=0;j<N-1;j++){
        if(a[j] > a[j+1]) {swap(a[j],a[j+1]); Bmoves++;}
    }
}
display(a,N);
}

void Ssorting(int a[], int N, int &Smoves){
     Smoves = 0;
    int i,j,min,m;
    for(j=0;j<N-1;j++){
        
    for(i=j+1;i<N;i++){
        min=a[j];
         m=j;
        if(min>a[i]){ 
            min=a[i]; m=i;
    } //if
    swap(a[m],a[j]);
    if(a[m]!=a[j]) Smoves++;
} //i

    } //j
    display(a,N);
}

void Isorting(int a[],int N, int &Imoves){
    Imoves=0;
    int i,j,v;
    for(i=1;i<N;i++){
        v=a[i];
    for(j=i-1;j>=0;j--){
        if(a[j]>v) { a[j+1]=a[j]; Imoves++; }
        else break;
    }//j
    a[j+1]=v;
    }//i
    display(a,N);
}

//-------------------------------------------------------------------
void generateSortedData(int a[], int N) {
    for (int i = 0; i < N; ++i) {
        a[i] = i;
    }
}

void generateReverseSortedData(int a[], int N) {
    for (int i = 0; i < N; ++i) {
        a[i] = N - i - 1;
    }
}

void generateRandomData(int a[], int N) {
    srand(time(0));
    for (int i = 0; i < N; ++i) {
        a[i] = rand() % 1000; // Generating random numbers between 0 and 999
    }
}