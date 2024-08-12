#VAR1 ""
#define FUN1 (3 * sizeof(VAR2) + 2)
#VAR1 <VAR3.VAR4>
#define SLEEP VAR5
#VAR1 <VAR6.VAR4>
#define SLEEP VAR7
void FUN2()
{
    int VAR2;
    VAR2 = -1;
    if(FUN3())
    {
        {
            char VAR8[VAR9] = "";
            if (fgets(VAR8, VAR9, stdin) != NULL)
            {
                VAR2 = FUN4(VAR8);
            }
            else
            {
            }
        }
    }
    else
    {
        VAR2 = 20;
    }
    if(FUN3())
    {
        FUN5(VAR2);
    }
    else
    {
        if (VAR2 > 0 && VAR2 <= 2000)
        {
            FUN5(VAR2);
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