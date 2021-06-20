int print(int n){
    if(n == 1){
        cout << n << " ";
        return 0;
    }
    print(n - 1);
    cout << n << " ";
   
}

