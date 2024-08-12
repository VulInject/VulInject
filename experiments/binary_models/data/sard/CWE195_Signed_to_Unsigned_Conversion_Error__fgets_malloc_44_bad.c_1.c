#VAR1 ""
#define FUN1 (3 * sizeof(VAR2) + 2)
void FUN2(int VAR2)
{
    if (VAR2 < 100)
    {
        char * VAR3 = (char *)malloc(VAR2);
        if (VAR3 == NULL) {FUN3(-1);}
        memset(VAR3, '', VAR2-1);
        VAR3[VAR2-1] = '';
        FUN4(VAR3);
        free(VAR3);
    }
}
void FUN5()
{
    int VAR2;
    void (*VAR4) (int) = VAR5;
    VAR2 = -1;
    {
        char VAR6[VAR7] = "";
        if (fgets(VAR6, VAR7, stdin) != NULL)
        {
            VAR2 = FUN6(VAR6);
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