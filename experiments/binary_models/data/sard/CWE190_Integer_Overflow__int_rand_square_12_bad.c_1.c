#VAR1 ""
#VAR1 <VAR2.VAR3>
void FUN1()
{
    int VAR4;
    VAR4 = 0;
    if(FUN2())
    {
        VAR4 = FUN3();
    }
    else
    {
        VAR4 = 2;
    }
    if(FUN2())
    {
        {
            int VAR5 = VAR4 * VAR4;
            FUN4(VAR5);
        }
    }
    else
    {
        if (VAR4 > VAR6 && FUN5(VAR4) < (long)FUN6((double)VAR7))
        {
            int VAR5 = VAR4 * VAR4;
            FUN4(VAR5);
        }
        else
        {
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN7(NULL) );
    FUN1();
    return 0;
}