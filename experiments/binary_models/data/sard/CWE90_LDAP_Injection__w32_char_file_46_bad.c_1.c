#VAR1 ""
#define VAR2 ""
#define VAR2 ""
#VAR1 <VAR3.VAR4>
#VAR1 <VAR5.VAR4>
#VAR6 FUN1(VAR7, "")
void FUN2()
{
    char * VAR8;
    char VAR9[256] = "";
    VAR8 = VAR9;
    if(FUN3())
    {
        {
            size_t VAR10 = strlen(VAR8);
            VAR11 * VAR12;
            if (256-VAR10 > 1)
            {
                VAR12 = fopen(VAR2, "");
                if (VAR12 != NULL)
                {
                    if (fgets(VAR8+VAR10, (int)(256-VAR10), VAR12) == NULL)
                    {
                        VAR8[VAR10] = '';
                    }
                    fclose(VAR12);
                }
            }
        }
    }
    {
        VAR13* VAR14 = NULL;
        ULONG VAR15 = 0L;
        ULONG VAR16 = 0L;
        VAR17 *VAR18 = NULL;
        char VAR19[256];
        _snprintf(VAR19, 256-1, "", VAR8);
        VAR14 = FUN4("", VAR20);
        if (VAR14 == NULL)
        {
            FUN5(1);
        }
        VAR15 = FUN6(VAR14, NULL);
        if (VAR15 != VAR21)
        {
            FUN5(1);
        }
        VAR16 = FUN7(
                            VAR14,
                            "",
                            VAR22,
                            VAR19,
                            NULL,
                            0,
                            NULL,
                            NULL,
                            VAR23,
                            VAR23,
                            &VAR18);
        if (VAR16 != VAR21)
        {
            if (VAR18 != NULL)
            {
                FUN8(VAR18);
            }
            FUN5(1);
        }
        if (VAR18 != NULL)
        {
            FUN8(VAR18);
        }
        FUN9(VAR14);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN10(NULL) );
    FUN2();
    return 0;
}