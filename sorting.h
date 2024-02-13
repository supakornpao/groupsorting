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
            if(a[j] > a[j+1]) {swap(a[j],a[j+1]); Bmoves++; }
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
    } //i
    Smoves++;
    swap(a[m],a[j]);
    } //j
}

void Isorting(int a[],int N, int &Imoves){

    int i,j,v;
    for(i=1;i<N;i++){
        v=a[i];
         for(j=i-1;j>=0;j--){
                if(a[j]>v) { a[j+1]=a[j];}
                else break;
        }//j
        a[j+1]=v;
        Imoves++; 
        
    }//i
}

void heapify(int a[], int N, int i)
{
    int largest = i; // Initialize largest as root Since we are using 0 based indexing
    int l = 2 * i + 1; // left = 2*i + 1
    int r = 2 * i + 2; // right = 2*i + 2
 
    // If left child is larger than root
    if (l < N && a[l] > a[largest])
        largest = l;
 
    // If right child is larger than largest so far
    if (r < N && a[r] > a[largest])
        largest = r;
 
    // If largest is not root
    if (largest != i) {
        swap(a[i], a[largest]);
        // Recursively heapify the affected sub-tree
        display(a,N);
        
        heapify(a, N, largest);
    }
}

void heapSort(int a[], int N)
{
    // Build heap (rearrange array)
    for (int i = N / 2 - 1; i >= 0; i--)
        heapify(a, N, i);
 
    // One by one extract an element from heap
    for (int i = N - 1; i >= 0; i--) {
        // Move current root to end
        swap(a[0], a[i]);
        display(a,N);
        // call max heapify on the reduced heap
        heapify(a, i, 0);
    }
}
