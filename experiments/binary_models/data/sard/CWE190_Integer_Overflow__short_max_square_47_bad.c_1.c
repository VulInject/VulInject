#VAR1 ""
#VAR1 <VAR2.VAR3>
void FUN1()
{
    short VAR4;
    VAR4 = 0;
    if(FUN2())
    {
        VAR4 = VAR5;
    }
    else
    {
        VAR4 = 2;
    }
    if(FUN2())
    {
        {
            short VAR6 = VAR4 * VAR4;
            FUN3(VAR6);
        }
    }
    else
    {
        if (FUN4((long)VAR4) <= (long)FUN5((double)VAR5))
        {
            short VAR6 = VAR4 * VAR4;
            FUN3(VAR6);
        }
        else
        {
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN6(NULL) );
    FUN1();
    return 0;
}