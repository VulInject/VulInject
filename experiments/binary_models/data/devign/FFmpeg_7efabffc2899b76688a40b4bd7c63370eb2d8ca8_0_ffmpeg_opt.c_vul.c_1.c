static VAR1 *FUN1(VAR2 *VAR3, VAR4 *VAR5, int VAR6)
{
    VAR7 *VAR8;
    VAR1 *VAR9;
    VAR10 *VAR11;
    char *VAR12 = NULL, *VAR13 = NULL;
    VAR9 = FUN2(VAR3, VAR5, VAR14, VAR6);
    VAR8 = VAR9->VAR8;
    VAR11 = VAR9->VAR15;
    FUN3(VAR16, VAR17, VAR12, VAR5, VAR8);
    if (VAR12 && FUN4(&VAR9->VAR12, VAR12) < 0)
    {
        FUN5(NULL, VAR18, "", VAR12);
        FUN6(1);
    }
    if (VAR12 && VAR19 == VAR20)
        FUN5(NULL, VAR21, "");
    FUN3(VAR22, VAR17, VAR13, VAR5, VAR8);
    if (VAR13)
    {
        AVRational VAR23;
        if (FUN7(&VAR23, VAR13, 255, 0, NULL) < 0 || VAR23.VAR24 <= 0 || VAR23.VAR25 <= 0)
        {
            FUN5(NULL, VAR18, "", VAR13);
            FUN6(1);
        }
        VAR9->VAR13 = VAR23;
    }
    FUN3(VAR26, VAR17, VAR9->VAR27, VAR5, VAR8);
    FUN3(VAR28, VAR17, VAR9->VAR28, VAR5, VAR8);
    if (!VAR9->VAR29)
    {
        const char *VAR30 = NULL;
        char *VAR31 = NULL;
        char *VAR32 = NULL;
        char *VAR33 = NULL, *VAR34 = NULL;
        char *VAR35 = NULL;
        int VAR36 = 0;
        int VAR37;
        FUN3(VAR38, VAR17, VAR31, VAR5, VAR8);
        if (VAR31 && FUN8(&VAR11->VAR39, &VAR11->VAR40, VAR31) < 0)
        {
            FUN5(NULL, VAR18, "", VAR31);
            FUN6(1);
        }
        VAR11->VAR41 = VAR42;
        FUN3(VAR43, VAR17, VAR32, VAR5, VAR8);
        if (VAR32 && *VAR32 == '')
        {
            VAR9->VAR44 = 1;
            if (!*++VAR32)
                VAR32 = NULL;
        }
        if (VAR32 && (VAR11->VAR45 = FUN9(VAR32)) == VAR46)
        {
            FUN5(NULL, VAR18, "", VAR32);
            FUN6(1);
        }
        VAR8->VAR47 = VAR11->VAR47;
        if (VAR48)
            VAR11->VAR49 = 0;
        FUN3(VAR50, VAR17, VAR33, VAR5, VAR8);
        if (VAR33)
        {
            if (!(VAR11->VAR33 = FUN10(sizeof(*VAR11->VAR33) * 64)))
            {
                FUN5(NULL, VAR18, "");
                FUN6(1);
            }
            FUN11(VAR11->VAR33, VAR33);
        }
        FUN3(VAR51, VAR17, VAR35, VAR5, VAR8);
        if (VAR35)
        {
            VAR52 *VAR30 = FUN10(sizeof(*VAR11->VAR35) * 64);
            if (!VAR30)
            {
                FUN5(NULL, VAR18, "");
                FUN6(1);
            }
            FUN12(VAR11, VAR30);
            FUN11(VAR30, VAR35);
        }
        FUN3(VAR53, VAR17, VAR34, VAR5, VAR8);
        if (VAR34)
        {
            if (!(VAR11->VAR34 = FUN10(sizeof(*VAR11->VAR34) * 64)))
            {
                FUN5(NULL, VAR18, "");
                FUN6(1);
            }
            FUN11(VAR11->VAR34, VAR34);
        }
        FUN3(VAR54, VAR17, VAR30, VAR5, VAR8);
        for (VAR37 = 0; VAR30; VAR37++)
        {
            int VAR55, VAR56, VAR23;
            int VAR57 = sscanf(VAR30, "", &VAR55, &VAR56, &VAR23);
            if (VAR57 != 3)
            {
                FUN5(NULL, VAR18, "");
                FUN6(1);
            }
            VAR11->VAR58 = FUN13(VAR11->VAR58, VAR37 + 1, sizeof(VAR59));
            VAR11->VAR58[VAR37].VAR60 = VAR55;
            VAR11->VAR58[VAR37].VAR61 = VAR56;
            if (VAR23 > 0)
            {
                VAR11->VAR58[VAR37].VAR62 = VAR23;
                VAR11->VAR58[VAR37].VAR63 = 1.0;
            }
            else
            {
                VAR11->VAR58[VAR37].VAR62 = 0;
                VAR11->VAR58[VAR37].VAR63 = -VAR23 / 100.0;
            }
            VAR30 = strchr(VAR30, '');
            if (VAR30)
                VAR30++;
        }
        VAR11->VAR64 = VAR37;
        if (VAR65)
            VAR11->VAR66 |= VAR67;
        FUN3(VAR68, VAR37, VAR36, VAR5, VAR8);
        if (VAR36)
        {
            if (VAR36 & 1)
            {
                VAR11->VAR66 |= VAR69;
                FUN14(&VAR9->VAR70, "", "", VAR71);
            }
            if (VAR36 & 2)
            {
                VAR11->VAR66 |= VAR72;
                FUN14(&VAR9->VAR70, "", "", VAR71);
            }
        }
        FUN3(VAR73, VAR17, VAR9->VAR74, VAR5, VAR8);
        if (VAR9->VAR74 && !(VAR9->VAR74 = FUN15(VAR9->VAR74)))
            FUN6(1);
        FUN3(VAR75, VAR17, VAR9->VAR76, VAR5, VAR8);
        if (VAR9->VAR76)
            VAR9->VAR76 = FUN15(VAR9->VAR76);
        FUN3(VAR77, VAR37, VAR9->VAR77, VAR5, VAR8);
        VAR9->VAR78 = -1;
        FUN3(VAR78, VAR37, VAR9->VAR78, VAR5, VAR8);
        VAR9->VAR79 = FUN16(VAR3, VAR5, VAR9);
        if (!VAR9->VAR79)
            FUN6(1);
    }
    else
    {
        FUN3(VAR80, VAR37, VAR9->VAR80, VAR5, VAR8);
    }
    if (VAR9->VAR29)
        FUN17(VAR3, VAR5, VAR9, VAR14);
    return VAR9;
}