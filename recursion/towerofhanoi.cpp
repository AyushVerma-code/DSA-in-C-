void th(int n, char from_rod,char to_rod, char aux_rod)
{
   	if(n==0)
        return;
    if (n == 1)
    {
        cout<< from_rod <<" "<< to_rod<<endl;
        return;
    }
    th(n - 1, from_rod, aux_rod, to_rod);
    cout <<from_rod<<" "<< to_rod << endl;
    th(n - 1, aux_rod, to_rod, from_rod);
}
void towerOfHanoi(int n, char source, char auxiliary, char destination) 
{
    th(n,source,destination,auxiliary);
}
