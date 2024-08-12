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
        if (!VAR7->VAR20 && VAR7->VAR21 == &VAR22)
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
    {
        snprintf(VAR5->VAR28, sizeof(VAR5->VAR28), "", (int)random(), (int)random());
    }
    VAR13 = FUN4(VAR5->VAR28);
    if (!VAR13)
    {
        VAR15 = FUN5(VAR5, VAR29);
        if (!VAR15)
        {
            VAR15 = FUN5(VAR5, VAR30);
            if (!VAR15)
            {
                FUN3(VAR2, VAR31);
                return;
            }
        }
        VAR13 = FUN6(&VAR2->VAR32, VAR7, VAR5->VAR28, VAR15->VAR33);
        if (!VAR13)
        {
            FUN3(VAR2, VAR34);
            return;
        }
        if (FUN7(VAR13, "") < 0)
        {
            FUN3(VAR2, VAR35);
            return;
        }
    }
    if (VAR13->VAR7 != VAR7)
    {
        FUN3(VAR2, VAR27);
        return;
    }
    if (VAR13->VAR36[VAR8])
    {
        FUN3(VAR2, VAR37);
        return;
    }
    VAR15 = FUN5(VAR5, VAR13->VAR38);
    if (!VAR15 || (VAR15->VAR33 == VAR29 && VAR15->VAR39 <= 0))
    {
        FUN3(VAR2, VAR31);
        return;
    }
    VAR17.VAR40[0] = '';
    VAR16 = VAR13->VAR32;
    VAR16.VAR41 = FUN8(VAR15->VAR39);
    if (VAR42)
    {
        VAR17.VAR43 = FUN9(VAR16.VAR44.VAR45);
        if (FUN10(VAR46, VAR13->VAR28, (char *)&VAR17, sizeof(VAR17), VAR7->VAR47) < 0)
        {
            FUN3(VAR2, VAR31);
            return;
        }
        VAR16.VAR44.VAR45 = FUN11(VAR17.VAR43);
    }
    if (FUN12(VAR13, VAR8, &VAR16, VAR2) < 0)
    {
        FUN3(VAR2, VAR31);
        return;
    }
    FUN13(VAR2, VAR48);
    FUN14(VAR2->VAR49, "", VAR13->VAR28);
    switch (VAR13->VAR38)
    {
    case VAR29:
        VAR9 = FUN15(VAR13->VAR50[VAR8]);
        FUN14(VAR2->VAR49, ""
                           "",
                    VAR15->VAR39, VAR15->VAR39 + 1, VAR9, VAR9 + 1);
        break;
    case VAR30:
        FUN14(VAR2->VAR49, "", VAR8 * 2, VAR8 * 2 + 1);
        break;
    default:
        break;
    }
    if (VAR17.VAR40[0] != '')
    {
        FUN14(VAR2->VAR49, "", VAR17.VAR40);
    }
    FUN14(VAR2->VAR49, "");
    FUN14(VAR2->VAR49, "");
}