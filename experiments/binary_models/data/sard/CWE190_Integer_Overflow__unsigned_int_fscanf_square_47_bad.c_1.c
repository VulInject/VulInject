#VAR1 ""
#VAR1 <VAR2.VAR3>
void FUN1()
{
    unsigned int VAR4;
    VAR4 = 0;
    if(FUN2())
    {
        fscanf (stdin, "", &VAR4);
    }
    else
    {
        VAR4 = 2;
    }
    if(FUN2())
    {
        {
            unsigned int VAR5 = VAR4 * VAR4;
            FUN3(VAR5);
        }
    }
    else
    {
        if (FUN4((long)VAR4) < (long)FUN5((double)VAR6))
        {
            unsigned int VAR5 = VAR4 * VAR4;
            FUN3(VAR5);
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