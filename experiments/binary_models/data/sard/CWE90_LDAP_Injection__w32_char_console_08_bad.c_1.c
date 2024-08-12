#VAR1 ""
#VAR1 <VAR2.VAR3>
#VAR1 <VAR4.VAR3>
#VAR5 FUN1(VAR6, "")
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
    char * VAR7;
    char VAR8[256] = "";
    VAR7 = VAR8;
    if(FUN2())
    {
        {
            size_t VAR9 = strlen(VAR7);
            if (256-VAR9 > 1)
            {
                if (fgets(VAR7+VAR9, (int)(256-VAR9), stdin) != NULL)
                {
                    VAR9 = strlen(VAR7);
                    if (VAR9 > 0 && VAR7[VAR9-1] == '')
                    {
                        VAR7[VAR9-1] = '';
                    }
                }
                else
                {
                    VAR7[VAR9] = '';
                }
            }
        }
    }
    {
        VAR10* VAR11 = NULL;
        ULONG VAR12 = 0L;
        ULONG VAR13 = 0L;
        VAR14 *VAR15 = NULL;
        char VAR16[256];
        _snprintf(VAR16, 256-1, "", VAR7);
        VAR11 = FUN5("", VAR17);
        if (VAR11 == NULL)
        {
            FUN6(1);
        }
        VAR12 = FUN7(VAR11, NULL);
        if (VAR12 != VAR18)
        {
            FUN6(1);
        }
        VAR13 = FUN8(
                            VAR11,
                            "",
                            VAR19,
                            VAR16,
                            NULL,
                            0,
                            NULL,
                            NULL,
                            VAR20,
                            VAR20,
                            &VAR15);
        if (VAR13 != VAR18)
        {
            if (VAR15 != NULL)
            {
                FUN9(VAR15);
            }
            FUN6(1);
        }
        if (VAR15 != NULL)
        {
            FUN9(VAR15);
        }
        FUN10(VAR11);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN11(NULL) );
    FUN4();
    return 0;
}