static void FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5)
{
    VAR6 *VAR7 = VAR4->VAR8[VAR5];
    VAR9 *VAR10;
    VAR11 *VAR12;
    char VAR13[128];
    const char *VAR14;
    AVRational VAR15;
    struct print_buf VAR16 = {.VAR14 = NULL};
    FUN2("");
    FUN3("", VAR7->VAR17);
    if ((VAR10 = VAR7->VAR18))
    {
        if ((VAR12 = VAR10->VAR18))
        {
            FUN4("", VAR12->VAR19);
            FUN4("", VAR12->VAR20);
        }
        else
        {
            FUN5("", "");
            FUN5("", "");
        }
        VAR14 = FUN6(VAR10->VAR21);
        if (VAR14)
            FUN4("", VAR14);
        else
            FUN5("", "");
        FUN7("", "", VAR10->VAR22.VAR23, VAR10->VAR22.VAR24);
        FUN8(VAR13, sizeof(VAR13), VAR10->VAR25);
        FUN4("", VAR13);
        FUN7("", "", VAR10->VAR25);
        switch (VAR10->VAR21)
        {
        case VAR26:
            FUN3("", VAR10->VAR27);
            FUN3("", VAR10->VAR28);
            FUN3("", VAR10->VAR29);
            if (VAR10->VAR30.VAR23)
            {
                FUN7("", "", VAR10->VAR30.VAR23, VAR10->VAR30.VAR24);
                FUN9(&VAR15.VAR23, &VAR15.VAR24, VAR10->VAR27 * VAR10->VAR30.VAR23, VAR10->VAR28 * VAR10->VAR30.VAR24, 1024 * 1024);
                FUN7("", "", VAR15.VAR23, VAR15.VAR24);
            }
            else
            {
                FUN5("", "");
                FUN5("", "");
            }
            VAR14 = FUN10(VAR10->VAR31);
            if (VAR14)
                FUN4("", VAR14);
            else
                FUN5("", "");
            FUN3("", VAR10->VAR32);
            break;
        case VAR33:
            VAR14 = FUN11(VAR10->VAR34);
            if (VAR14)
                FUN4("", VAR14);
            else
                FUN5("", "");
            FUN12("", VAR10->VAR35, VAR36);
            FUN3("", VAR10->VAR37);
            FUN3("", FUN13(VAR10->VAR38));
            break;
        }
    }
    else
    {
        FUN5("", "");
    }
    if (VAR10->VAR18 && VAR10->VAR18->VAR39)
    {
        const VAR40 *VAR41 = NULL;
        while (VAR41 = FUN14(VAR10->VAR42, VAR41))
        {
            VAR43 *VAR44;
            if (VAR41->VAR45)
                continue;
            if (FUN15(VAR10->VAR42, VAR41->VAR19, 0, &VAR44) >= 0)
            {
                FUN4(VAR41->VAR19, VAR44);
                FUN16(VAR44);
            }
        }
    }
    if (VAR4->VAR46->VAR45 & VAR47)
        FUN7("", "", VAR7->VAR48);
    else
        FUN5("", "");
    FUN7("", "", VAR7->VAR49.VAR23, VAR7->VAR49.VAR24);
    FUN7("", "", VAR7->VAR50.VAR23, VAR7->VAR50.VAR24);
    FUN7("", "", VAR7->VAR22.VAR23, VAR7->VAR22.VAR24);
    FUN17("", VAR7->VAR51, &VAR7->VAR22);
    FUN17("", VAR7->VAR52, &VAR7->VAR22);
    if (VAR7->VAR53)
        FUN7("", "" VAR54, VAR7->VAR53);
    else
        FUN5("", "");
    FUN18(VAR7->VAR55);
    FUN19("");
    FUN16(VAR16.VAR14);
    FUN20(VAR56);
}