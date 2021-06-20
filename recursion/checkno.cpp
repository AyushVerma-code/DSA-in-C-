bool checkNumber(int input[], int size, int x) {

        if(size==0)
            return false;
        if(size==1 && input[0]==x)
            return true;
        if(size==1&&input[0]!=x)
            return false;
        if(input[0]==x)
            return true;
        bool found=checkNumber(input+1,size-1,x);
        return  found;
}
