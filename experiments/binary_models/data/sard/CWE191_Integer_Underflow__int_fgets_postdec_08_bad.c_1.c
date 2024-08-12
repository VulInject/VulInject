#VAR1 ""
#define FUN1 (3 * sizeof(VAR2) + 2)
int FUN2()
{
    return 1;
}
int FUN3()
{
    return 0;
}
void FUN4()
{
    int VAR2;
    VAR2 = 0;
    if(FUN2())
    {
        {
            char VAR3[VAR4] = "";
            if (fgets(VAR3, VAR4, stdin) != NULL)
            {
                VAR2 = FUN5(VAR3);
            }
            else
            {
            }
        }
    }
    if(FUN2())
    {
        {
            VAR2--;
            int VAR5 = VAR2;
            FUN6(VAR5);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN7(NULL) );
    FUN4();
    return 0;
}