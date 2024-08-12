#VAR1 ""
#define FUN1 (3 * sizeof(VAR2) + 2)
void FUN2()
{
    int VAR2;
    VAR2 = 0;
    goto VAR3;
VAR3:
    {
        char VAR4[VAR5] = "";
        if (fgets(VAR4, VAR5, stdin) != NULL)
        {
            VAR2 = FUN3(VAR4);
        }
        else
        {
        }
    }
    goto VAR6;
VAR6:
    {
        VAR2++;
        int VAR7 = VAR2;
        FUN4(VAR7);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN2();
    return 0;
}