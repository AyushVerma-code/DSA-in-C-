int ui=0;
void h(int num,string output,string op[10],string a[100])
{
    if(num==0)
    {
        a[ui]=output;
        // cout<<output<<endl;
        ui=ui+1;
        return;
    }
    int digit=num%10;
    int i=0;
    while(i<op[digit].length())
    {
        h(num/10,op[digit][i]+output,op);
    	i++;
    }
    return;
}
int keypad(int num, string output[])
{
    string options[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    h(num,"",options,output);
    return;

}
