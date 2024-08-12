static void FUN1(VAR1 *VAR2, const char *VAR3, VAR4 *VAR5)
{
    VAR6 *VAR7;
    int VAR8, VAR9;
    char VAR10[1024];
    char VAR11[1024];
    const char *VAR12;
    VAR1 *VAR13;
    VAR14 *VAR15;
    struct sockaddr_in VAR16;
    RTSPActionServerSetup VAR17;
    FUN2(NULL, 0, NULL, 0, NULL, 0, NULL, VAR11, sizeof(VAR11), VAR3);
    VAR12 = VAR11;
    if (*VAR12 == '')
        VAR12++;
    for (VAR7 = VAR18; VAR7 != NULL; VAR7 = VAR7->VAR19)
    {
        if (!VAR7->VAR20 && !strcmp(VAR7->VAR21->VAR22, ""))
        {
            if (!strcmp(VAR12, VAR7->VAR23))
            {
                if (VAR7->VAR24 != 1)
                {
                    FUN3(VAR2, VAR25);
                    return;
                }
                VAR8 = 0;
                goto VAR26;
            }
            for (VAR8 = 0; VAR8 < VAR7->VAR24; VAR8++)
            {
                snprintf(VAR10, sizeof(VAR10), "", VAR7->VAR23, VAR8);
                if (!strcmp(VAR12, VAR10))
                    goto VAR26;
            }
        }
    }
    FUN3(VAR2, VAR27);
    return;
VAR26:
    if (VAR5->VAR28[0] == '')
        snprintf(VAR5->VAR28, sizeof(VAR5->VAR28), "", FUN4(&VAR29), FUN4(&VAR29));
    VAR13 = FUN5(VAR5->VAR28);
    if (!VAR13)
    {
        VAR15 = FUN6(VAR5, VAR30);
        if (!VAR15)
        {
            VAR15 = FUN6(VAR5, VAR31);
            if (!VAR15)
            {
                FUN3(VAR2, VAR32);
                return;
            }
        }
        VAR13 = FUN7(&VAR2->VAR33, VAR7, VAR5->VAR28, VAR15->VAR34);
        if (!VAR13)
        {
            FUN3(VAR2, VAR35);
            return;
        }
        if (FUN8(VAR13, "") < 0)
        {
            FUN3(VAR2, VAR36);
            return;
        }
    }
    if (VAR13->VAR7 != VAR7)
    {
        FUN3(VAR2, VAR27);
        return;
    }
    if (VAR13->VAR37[VAR8])
    {
        FUN3(VAR2, VAR38);
        return;
    }
    VAR15 = FUN6(VAR5, VAR13->VAR39);
    if (!VAR15 || (VAR15->VAR34 == VAR30 && VAR15->VAR40 <= 0))
    {
        FUN3(VAR2, VAR32);
        return;
    }
    VAR17.VAR41[0] = '';
    VAR16 = VAR13->VAR33;
    VAR16.VAR42 = FUN9(VAR15->VAR40);
    if (FUN10(VAR13, VAR8, &VAR16, VAR2) < 0)
    {
        FUN3(VAR2, VAR32);
        return;
    }
    FUN11(VAR2, VAR43);
    FUN12(VAR2->VAR44, "", VAR13->VAR28);
    switch (VAR13->VAR39)
    {
    case VAR30:
        VAR9 = FUN13(VAR13->VAR45[VAR8]);
        FUN12(VAR2->VAR44, ""
                           "",
                    VAR15->VAR40, VAR15->VAR40 + 1, VAR9, VAR9 + 1);
        break;
    case VAR31:
        FUN12(VAR2->VAR44, "", VAR8 * 2, VAR8 * 2 + 1);
        break;
    default:
        break;
    }
    if (VAR17.VAR41[0] != '')
        FUN12(VAR2->VAR44, "", VAR17.VAR41);
    FUN12(VAR2->VAR44, "");
    FUN12(VAR2->VAR44, "");
}