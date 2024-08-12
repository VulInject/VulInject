#VAR1 ""
#VAR1 <VAR2.VAR3>
#VAR1 <VAR4.VAR3>
#VAR5 FUN1(VAR6, "")
void FUN2()
{
    char * VAR7;
    char * *VAR8 = &VAR7;
    char * *VAR9 = &VAR7;
    char VAR10[256] = "";
    VAR7 = VAR10;
    {
        char * VAR7 = *VAR8;
        {
            size_t VAR11 = strlen(VAR7);
            if (256-VAR11 > 1)
            {
                if (fgets(VAR7+VAR11, (int)(256-VAR11), stdin) != NULL)
                {
                    VAR11 = strlen(VAR7);
                    if (VAR11 > 0 && VAR7[VAR11-1] == '')
                    {
                        VAR7[VAR11-1] = '';
                    }
                }
                else
                {
                    VAR7[VAR11] = '';
                }
            }
        }
        *VAR8 = VAR7;
    }
    {
        char * VAR7 = *VAR9;
        {
            VAR12* VAR13 = NULL;
            ULONG VAR14 = 0L;
            ULONG VAR15 = 0L;
            VAR16 *VAR17 = NULL;
            char VAR18[256];
            _snprintf(VAR18, 256-1, "", VAR7);
            VAR13 = FUN3("", VAR19);
            if (VAR13 == NULL)
            {
                FUN4(1);
            }
            VAR14 = FUN5(VAR13, NULL);
            if (VAR14 != VAR20)
            {
                FUN4(1);
            }
            VAR15 = FUN6(
                                VAR13,
                                "",
                                VAR21,
                                VAR18,
                                NULL,
                                0,
                                NULL,
                                NULL,
                                VAR22,
                                VAR22,
                                &VAR17);
            if (VAR15 != VAR20)
            {
                if (VAR17 != NULL)
                {
                    FUN7(VAR17);
                }
                FUN4(1);
            }
            if (VAR17 != NULL)
            {
                FUN7(VAR17);
            }
            FUN8(VAR13);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN9(NULL) );
    FUN2();
    return 0;
}