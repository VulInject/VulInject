#VAR1 ""
void FUN1()
{
    short VAR2;
    VAR2 = 0;
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
            short VAR4 = VAR2 * 2;
            FUN3(VAR4);
        }
    }
    else
    {
        if(VAR2 < 0) 
        {
            if (VAR2 > (VAR3/2))
            {
                short VAR4 = VAR2 * 2;
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