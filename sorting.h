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

    int i,j;
    for(i=N-1;i>=0;i--){
        for(j=0;j<N-1;j++){
            if(a[j] > a[j+1]) {swap(a[j],a[j+1]); Bmoves++;}
        }
    }
}

void Ssorting(int a[], int N, int &Smoves){

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
}

void Isorting(int a[],int N, int &Imoves){

    int i,j,v;
    for(i=1;i<N;i++){
        v=a[i];
         for(j=i-1;j>=0;j--){
                if(a[j]>v) { a[j+1]=a[j]; Imoves++; }
                else break;
        }//j
        a[j+1]=v;
    }//i
}
