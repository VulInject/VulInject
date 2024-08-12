#VAR1 ""
#define FUN1 (3 * sizeof(VAR2) + 2)
#VAR1 <VAR3.VAR4>
void FUN2(int VAR2)
{
    {
        int VAR5 = VAR2 * VAR2;
        FUN3(VAR5);
    }
}
void FUN4()
{
    int VAR2;
    VAR2 = 0;
    {
        char VAR6[VAR7] = "";
        if (fgets(VAR6, VAR7, stdin) != NULL)
        {
            VAR2 = FUN5(VAR6);
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