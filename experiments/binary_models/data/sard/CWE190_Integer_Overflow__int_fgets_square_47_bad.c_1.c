#VAR1 ""
#define FUN1 (3 * sizeof(VAR2) + 2)
#VAR1 <VAR3.VAR4>
void FUN2()
{
    int VAR2;
    VAR2 = 0;
    if(FUN3())
    {
        {
            char VAR5[VAR6] = "";
            if (fgets(VAR5, VAR6, stdin) != NULL)
            {
                VAR2 = FUN4(VAR5);
            }
            else
            {
            }
        }
    }
    else
    {
        VAR2 = 2;
    }
    if(FUN3())
    {
        {
            int VAR7 = VAR2 * VAR2;
            FUN5(VAR7);
        }
    }
    else
    {
        if (VAR2 > VAR8 && FUN6(VAR2) < (long)FUN7((double)VAR9))
        {
            int VAR7 = VAR2 * VAR2;
            FUN5(VAR7);
        }
        else
        {
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN8(NULL) );
    FUN2();
    return 0;
}