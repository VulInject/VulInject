void FUN1(VAR1 *VAR2, const VAR3 *VAR4)
{
    const char *VAR5 = FUN2(VAR4, "");
    VAR6 *VAR7, *VAR8 = NULL, *VAR9 = NULL;
    int VAR10 = FUN3(VAR4, "");
    int VAR11 = FUN4(VAR4, "", -1);
    VAR12 *VAR13 = NULL;
    char *VAR14;
    int VAR15;
    while (1)
    {
        VAR14 = strchr(VAR5, '');
        VAR15 = VAR14 ? VAR14 - VAR5 : strlen(VAR5);
        if (VAR5[0] == '' && VAR15 == 1)
        {
            VAR5 = "";
            VAR15 = 4;
        }
        VAR7 = FUN5(sizeof(*VAR7));
        VAR7->VAR16 = FUN5(sizeof(*VAR7->VAR16));
        if (!VAR8)
        {
            VAR8 = VAR7;
        }
        if (VAR9)
        {
            VAR9->VAR17 = VAR7;
        }
        VAR9 = VAR7;
        if (FUN6(VAR5, "", NULL))
        {
            char *VAR18;
            int VAR16 = FUN7(VAR5, &VAR18, 0);
            assert(VAR18 <= VAR5 + VAR15);
            if (VAR18 != VAR5 + VAR15)
            {
                goto VAR19;
            }
            VAR7->VAR16->VAR20 = VAR21;
            VAR7->VAR16->VAR22.VAR23.VAR24 = VAR16;
        }
        else
        {
            int VAR25 = FUN8(VAR5, VAR15);
            if (VAR25 == VAR26)
            {
                goto VAR19;
            }
            VAR7->VAR16->VAR20 = VAR27;
            VAR7->VAR16->VAR22.VAR28.VAR24 = VAR25;
        }
        if (!VAR14)
        {
            break;
        }
        VAR5 = VAR14 + 1;
    }
    FUN9(VAR8, VAR10, VAR11, &VAR13);
    FUN10(VAR2, &VAR13);
VAR29:
    FUN11(VAR8);
    return;
VAR19:
    FUN12(VAR2, "", VAR15, VAR5);
    goto VAR29;
}