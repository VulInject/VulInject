#VAR1 ""
#define FUN1 (3 * sizeof(VAR2) + 2)
int FUN2(int VAR2)
{
    {
        char VAR3[VAR4] = "";
        if (fgets(VAR3, VAR4, stdin) != NULL)
        {
            VAR2 = FUN3(VAR3);
        }
        else
        {
        }
    }
    return VAR2;
}
void FUN4()
{
    int VAR2;
    VAR2 = -1;
    VAR2 = FUN2(VAR2);
    {
        int VAR5;
        int VAR6[10] = { 0 };
        if (VAR2 < 10)
        {
            VAR6[VAR2] = 1;
            for(VAR5 = 0; VAR5 < 10; VAR5++)
            {
                FUN5(VAR6[VAR5]);
            }
        }
        else
        {
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN6(NULL) );
    FUN4();
    return 0;
}