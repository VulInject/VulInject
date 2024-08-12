#VAR1 ""
#VAR1 <VAR2.VAR3>
void FUN1()
{
    char VAR4;
    VAR4 = '';
    if(FUN2())
    {
        VAR4 = (char)FUN3();
    }
    else
    {
        VAR4 = 2;
    }
    if(FUN2())
    {
        {
            char VAR5 = VAR4 * VAR4;
            FUN4(VAR5);
        }
    }
    else
    {
        if (FUN5((long)VAR4) <= (long)FUN6((double)VAR6))
        {
            char VAR5 = VAR4 * VAR4;
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