#VAR1 ""
#VAR1 <VAR2.VAR3>
#VAR1 <VAR4.VAR3>
#VAR5 FUN1(VAR6, "")
void FUN2(char * VAR7)
{
    {
        VAR8* VAR9 = NULL;
        ULONG VAR10 = 0L;
        ULONG VAR11 = 0L;
        VAR12 *VAR13 = NULL;
        char VAR14[256];
        _snprintf(VAR14, 256-1, "", VAR7);
        VAR9 = FUN3("", VAR15);
        if (VAR9 == NULL)
        {
            FUN4(1);
        }
        VAR10 = FUN5(VAR9, NULL);
        if (VAR10 != VAR16)
        {
            FUN4(1);
        }
        VAR11 = FUN6(
                            VAR9,
                            "",
                            VAR17,
                            VAR14,
                            NULL,
                            0,
                            NULL,
                            NULL,
                            VAR18,
                            VAR18,
                            &VAR13);
        if (VAR11 != VAR16)
        {
            if (VAR13 != NULL)
            {
                FUN7(VAR13);
            }
            FUN4(1);
        }
        if (VAR13 != NULL)
        {
            FUN7(VAR13);
        }
        FUN8(VAR9);
    }
}
void FUN9()
{
    char * VAR7;
    void (*VAR19) (char *) = VAR20;
    char VAR21[256] = "";
    VAR7 = VAR21;
    {
        size_t VAR22 = strlen(VAR7);
        if (256-VAR22 > 1)
        {
            if (fgets(VAR7+VAR22, (int)(256-VAR22), stdin) != NULL)
            {
                VAR22 = strlen(VAR7);
                if (VAR22 > 0 && VAR7[VAR22-1] == '')
                {
                    VAR7[VAR22-1] = '';
                }
            }
            else
            {
                VAR7[VAR22] = '';
            }
        }
    }
    FUN10(VAR7);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN11(NULL) );
    FUN9();
    return 0;
}