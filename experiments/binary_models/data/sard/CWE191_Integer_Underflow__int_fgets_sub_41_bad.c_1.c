#VAR1 ""
#define FUN1 (3 * sizeof(VAR2) + 2)
void FUN2(int VAR2)
{
    {
        int VAR3 = VAR2 - 1;
        FUN3(VAR3);
    }
}
void FUN4()
{
    int VAR2;
    VAR2 = 0;
    {
        char VAR4[VAR5] = "";
        if (fgets(VAR4, VAR5, stdin) != NULL)
        {
            VAR2 = FUN5(VAR4);
        }
        else
        {
        }
    }
    FUN2(VAR2);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN6(NULL) );
    FUN4();
    return 0;
}