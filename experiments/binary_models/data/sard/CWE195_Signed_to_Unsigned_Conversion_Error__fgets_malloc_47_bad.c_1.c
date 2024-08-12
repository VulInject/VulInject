#VAR1 ""
#define FUN1 (3 * sizeof(VAR2) + 2)
void FUN2()
{
    int VAR2;
    VAR2 = -1;
    if(FUN3())
    {
        {
            char VAR3[VAR4] = "";
            if (fgets(VAR3, VAR4, stdin) != NULL)
            {
                VAR2 = FUN4(VAR3);
            }
            else
            {
            }
        }
    }
    else
    {
        VAR2 = 100-1;
    }
    if (VAR2 < 100)
    {
        char * VAR5 = (char *)malloc(VAR2);
        if (VAR5 == NULL) {FUN5(-1);}
        memset(VAR5, '', VAR2-1);
        VAR5[VAR2-1] = '';
        FUN6(VAR5);
        free(VAR5);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN7(NULL) );
    FUN2();
    return 0;
}