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
    VAR2 = -1;
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
    if (VAR2 < 100)
    {
        char * VAR5 = (char *)malloc(VAR2);
        if (VAR5 == NULL) {FUN6(-1);}
        memset(VAR5, '', VAR2-1);
        VAR5[VAR2-1] = '';
        FUN7(VAR5);
        free(VAR5);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN8(NULL) );
    FUN4();
    return 0;
}