int fibnacciseries(int n){
    int n;
    scanf("%d",&n);
    int fib[n];
    int fib[0]=0;
    int fib[1]=1;
    for(int i=2;i<n;i++){
        fib[i]=fib[i-1]+fib[i-2];
        printf("%d \t",fib[i]);
    }
    printf("\n");
    return 0; 

}