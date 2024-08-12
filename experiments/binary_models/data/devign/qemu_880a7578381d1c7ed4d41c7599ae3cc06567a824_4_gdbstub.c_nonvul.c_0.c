static void FUN1(void *VAR1, int VAR2)
{
    VAR3 *VAR4 = VAR5;
    VAR6 *VAR7 = VAR4->VAR8;
    char VAR9[256];
    const char *VAR10;
    int VAR11;
    if (VAR4->VAR12 == VAR13)
        return;
    FUN2(VAR7, 0);
    if (VAR2 == VAR14)
    {
        if (VAR7->VAR15)
        {
            switch (VAR7->VAR15->VAR16 & VAR17)
            {
            case VAR18:
                VAR10 = "";
                break;
            case VAR17:
                VAR10 = "";
                break;
            default:
                VAR10 = "";
                break;
            }
            snprintf(VAR9, sizeof(VAR9), "" VAR19 "", VAR20, VAR7->VAR21 + 1, VAR10, VAR7->VAR15->VAR22);
            FUN3(VAR4, VAR9);
            VAR7->VAR15 = NULL;
            return;
        }
        FUN4(VAR7);
        VAR11 = VAR20;
    }
    else if (VAR2 == VAR23)
    {
        VAR11 = VAR24;
    }
    else
    {
        VAR11 = 0;
    }
    snprintf(VAR9, sizeof(VAR9), "", VAR11, VAR7->VAR21 + 1);
    FUN3(VAR4, VAR9);
}