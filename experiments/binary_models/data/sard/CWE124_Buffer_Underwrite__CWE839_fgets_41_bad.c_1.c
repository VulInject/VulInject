#VAR1 ""
#define FUN1 (3 * sizeof(VAR2) + 2)
void FUN2(int VAR2)
{
    {
        int VAR3;
        int VAR4[10] = { 0 };
        if (VAR2 < 10)
        {
            VAR4[VAR2] = 1;
            for(VAR3 = 0; VAR3 < 10; VAR3++)
            {
                FUN3(VAR4[VAR3]);
            }
        }
        else
        {
        }
    }
}
void FUN4()
{
    int VAR2;
    VAR2 = -1;
    {
        char VAR5[VAR6] = "";
        if (fgets(VAR5, VAR6, stdin) != NULL)
        {
            VAR2 = FUN5(VAR5);
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