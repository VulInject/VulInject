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
    void (*VAR5) (int) = VAR6;
    VAR2 = -1;
    {
        char VAR7[VAR8] = "";
        if (fgets(VAR7, VAR8, stdin) != NULL)
        {
            VAR2 = FUN5(VAR7);
        }
        else
        {
        }
    }
    FUN6(VAR2);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN7(NULL) );
    FUN4();
    return 0;
}