#VAR1 ""
void FUN1()
{
    int64_t VAR2;
    VAR2 = 0LL;
    if(FUN2())
    {
        VAR2 = VAR3;
    }
    else
    {
        VAR2 = -2;
    }
    if(FUN2())
    {
        if(VAR2 < 0) 
        {
            int64_t VAR4 = VAR2 * 2;
            FUN3(VAR4);
        }
    }
    else
    {
        if(VAR2 < 0) 
        {
            if (VAR2 > (VAR3/2))
            {
                int64_t VAR4 = VAR2 * 2;
                FUN3(VAR4);
            }
            else
            {
            }
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}