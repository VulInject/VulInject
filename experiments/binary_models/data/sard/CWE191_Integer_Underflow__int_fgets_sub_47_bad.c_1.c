#VAR1 ""
#define FUN1 (3 * sizeof(VAR2) + 2)
void FUN2()
{
    int VAR2;
    VAR2 = 0;
    if(FUN3())
    {
        {
            char VAR3[VAR4] = "";
            if (fgets(VAR3, VAR4, stdin) != NULL)
            {
                VAR2 = FUN4(VAR3);
            }
            else
            {
            }
        }
    }
    else
    {
        VAR2 = -2;
    }
    if(FUN3())
    {
        {
            int VAR5 = VAR2 - 1;
            FUN5(VAR5);
        }
    }
    else
    {
        if (VAR2 > VAR6)
        {
            int VAR5 = VAR2 - 1;
            FUN5(VAR5);
        }
        else
        {
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN6(NULL) );
    FUN2();
    return 0;
}