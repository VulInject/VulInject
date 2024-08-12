#VAR1 ""
#define FUN1 (3 * sizeof(VAR2) + 2)
void FUN2(int VAR2)
{
    {
        size_t VAR3 = 0;
        for (VAR3 = 0; VAR3 < (VAR4)VAR2; VAR3++)
        {
        }
    }
}
void FUN3()
{
    int VAR2;
    VAR2 = -1;
    {
        char VAR5[VAR6] = "";
        if (fgets(VAR5, VAR6, stdin) != NULL)
        {
            VAR2 = FUN4(VAR5);
        }
        else
        {
        }
    }
    FUN2(VAR2);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN3();
    return 0;
}