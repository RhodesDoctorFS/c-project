int zhishu(int a){
    if (a==1||a%2==0&&a!=2)
    {
        return 0;
    }  
    for (int i = 2; i <= sqrt(a) ; i++)//等号必须有
    {
        if (a%i==0)
        {
            return 0;
        }       
    }
    return 1;
}
