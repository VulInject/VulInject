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
    if(VAR10)
    {
        {
            size_t VAR11 = strlen(VAR8);
            VAR12 * VAR13;
            if (256-VAR11 > 1)
            {
                VAR13 = fopen(VAR2, "");
                if (VAR13 != NULL)
                {
                    if (fgets(VAR8+VAR11, (int)(256-VAR11), VAR13) == NULL)
                    {
                        VAR8[VAR11] = '';
                    }
                    fclose(VAR13);
                }
            }
        }
    }
    {
        VAR14* VAR15 = NULL;
        ULONG VAR16 = 0L;
        ULONG VAR17 = 0L;
        VAR18 *VAR19 = NULL;
        char VAR20[256];
        _snprintf(VAR20, 256-1, "", VAR8);
        VAR15 = FUN3("", VAR21);
        if (VAR15 == NULL)
        {
            FUN4(1);
        }
        VAR16 = FUN5(VAR15, NULL);
        if (VAR16 != VAR22)
        {
            FUN4(1);
        }
        VAR17 = FUN6(
                            VAR15,
                            "",
                            VAR23,
                            VAR20,
                            NULL,
                            0,
                            NULL,
                            NULL,
                            VAR24,
                            VAR24,
                            &VAR19);
        if (VAR17 != VAR22)
        {
            if (VAR19 != NULL)
            {
                FUN7(VAR19);
            }
            FUN4(1);
        }
        if (VAR19 != NULL)
        {
            FUN7(VAR19);
        }
        FUN8(VAR15);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN9(NULL) );
    FUN2();
    return 0;
}