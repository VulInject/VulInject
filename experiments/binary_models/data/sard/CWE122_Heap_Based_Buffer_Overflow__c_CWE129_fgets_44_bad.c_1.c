#VAR1 ""
#define FUN1 (3 * sizeof(VAR2) + 2)
void FUN2(int VAR2)
{
    {
        int VAR3;
        int * VAR4 = (int *)malloc(10 * sizeof(int));
        if (VAR4 == NULL) {FUN3(-1);}
        for (VAR3 = 0; VAR3 < 10; VAR3++)
        {
            VAR4[VAR3] = 0;
        }
        if (VAR2 >= 0)
        {
            VAR4[VAR2] = 1;
            for(VAR3 = 0; VAR3 < 10; VAR3++)
            {
                FUN4(VAR4[VAR3]);
            }
        }
        else
        {
        }
        free(VAR4);
    }
}
void FUN5()
{
    int VAR2;
    void (*VAR5) (int) = VAR6;
    VAR2 = -1;
    {
        char VAR7[VAR8] = "";
        if (fgets(VAR7, VAR8, stdin) != NULL)
        {
            VAR2 = FUN6(VAR7);
        }
        else
        {
        }
    }
    FUN7(VAR2);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN8(NULL) );
    FUN5();
    return 0;
}