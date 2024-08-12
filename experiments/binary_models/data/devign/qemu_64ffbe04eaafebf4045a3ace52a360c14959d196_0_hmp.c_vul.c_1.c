void FUN1(VAR1 *VAR2, const VAR3 *VAR4)
{
    const char *VAR5 = FUN2(VAR4, "");
    VAR6 *VAR7, *VAR8 = NULL, *VAR9 = NULL;
    int VAR10 = FUN3(VAR4, "");
    int VAR11 = FUN4(VAR4, "", -1);
    VAR12 *VAR13 = NULL;
    char VAR14[16];
    char *VAR15;
    int VAR16;
    while (1)
    {
        VAR15 = strchr(VAR5, '');
        VAR16 = VAR15 ? VAR15 - VAR5 : strlen(VAR5);
        FUN5(VAR14, sizeof(VAR14), VAR5);
        if (!FUN6(VAR14, "", 1) && VAR16 == 1)
        {
            FUN5(VAR14, sizeof(VAR14), "");
            VAR16 = 4;
        }
        VAR14[VAR16] = 0;
        VAR7 = FUN7(sizeof(*VAR7));
        VAR7->VAR17 = FUN7(sizeof(*VAR7->VAR17));
        if (!VAR8)
        {
            VAR8 = VAR7;
        }
        if (VAR9)
        {
            VAR9->VAR18 = VAR7;
        }
        VAR9 = VAR7;
        if (FUN8(VAR14, "", NULL))
        {
            char *VAR19;
            int VAR17 = FUN9(VAR14, &VAR19, 0);
            if (*VAR19 != '')
            {
                goto VAR20;
            }
            VAR7->VAR17->VAR21 = VAR22;
            VAR7->VAR17->VAR23.VAR24 = VAR17;
        }
        else
        {
            int VAR25 = FUN10(VAR14);
            if (VAR25 == VAR26)
            {
                goto VAR20;
            }
            VAR7->VAR17->VAR21 = VAR27;
            VAR7->VAR17->VAR23.VAR28 = VAR25;
        }
        if (!VAR15)
        {
            break;
        }
        VAR5 = VAR15 + 1;
    }
    FUN11(VAR8, VAR10, VAR11, &VAR13);
    FUN12(VAR2, &VAR13);
VAR29:
    FUN13(VAR8);
    return;
VAR20:
    FUN14(VAR2, "", VAR14);
    goto VAR29;
}