#VAR1 ""
void FUN1()
{
    int64_t VAR2;
    VAR2 = 0LL;
    if(FUN2())
    {
        VAR2 = (VAR3)FUN3();
    }
    else
    {
        VAR2 = -2;
    }
    if(FUN2())
    {
        {
            int64_t VAR4 = VAR2 - 1;
            FUN4(VAR4);
        }
    }
    else
    {
        if (VAR2 > VAR5)
        {
            int64_t VAR4 = VAR2 - 1;
            FUN4(VAR4);
        }
        else
        {
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN1();
    return 0;
}