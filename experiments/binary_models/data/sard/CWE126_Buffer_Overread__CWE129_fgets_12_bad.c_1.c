#VAR1 ""
#define FUN1 (3 * sizeof(VAR2) + 2)
void FUN2()
{
    int VAR2;
    VAR2 = -1;
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
        VAR2 = 7;
    }
    if(FUN3())
    {
        {
            int VAR5[10] = { 0 };
            if (VAR2 >= 0)
            {
                FUN5(VAR5[VAR2]);
            }
            else
            {
            }
        }
    }
    else
    {
        {
            int VAR5[10] = { 0 };
            if (VAR2 >= 0 && VAR2 < (10))
            {
                FUN5(VAR5[VAR2]);
            }
            else
            {
            }
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN6(NULL) );
    FUN2();
    return 0;
}