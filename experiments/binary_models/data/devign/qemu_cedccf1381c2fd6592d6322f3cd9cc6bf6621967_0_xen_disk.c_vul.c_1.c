static int FUN1(struct VAR1 *VAR2)
{
    struct VAR3 *VAR4 = FUN2(VAR2, struct VAR3, VAR2);
    int VAR5, VAR6, VAR7;
    bool VAR8 = true;
    if (VAR4->VAR9)
    {
        VAR7 = VAR10 | VAR11;
    }
    else
    {
        VAR7 = VAR12;
    }
    if (strcmp(VAR4->VAR13, "") == 0)
    {
        VAR7 |= VAR14;
        VAR8 = false;
    }
    if (VAR4->VAR15)
    {
        VAR7 |= VAR16;
    }
    VAR6 = (VAR4->VAR2.VAR17 - 202 * 256) / 16;
    VAR4->VAR18 = FUN3(VAR19, 0, VAR6);
    if (!VAR4->VAR18)
    {
        VAR20 *VAR21 = NULL;
        FUN4(&VAR4->VAR2, 2, "");
        VAR4->VAR22 = FUN5(VAR4->VAR17, &VAR21);
        if (VAR21)
        {
            VAR4->VAR22 = NULL;
        }
        if (VAR4->VAR22)
        {
            VAR23 *VAR24 = FUN6(VAR4->VAR25, VAR8);
            if (FUN7(&VAR4->VAR22, VAR4->VAR26, NULL, NULL, VAR7, VAR24, &VAR21) != 0)
            {
                FUN4(&VAR4->VAR2, 0, "", FUN8(VAR21));
                FUN9(VAR21);
                FUN10(VAR4->VAR22);
                VAR4->VAR22 = NULL;
            }
        }
        if (!VAR4->VAR22)
        {
            return -1;
        }
    }
    else
    {
        FUN4(&VAR4->VAR2, 2, "");
        VAR4->VAR22 = VAR4->VAR18->VAR27;
        if (FUN11(VAR4->VAR22) && !VAR8)
        {
            FUN4(&VAR4->VAR2, 0, "");
            VAR4->VAR22 = NULL;
            return -1;
        }
        FUN12(VAR4->VAR22);
    }
    FUN13(VAR4->VAR22, VAR4);
    VAR4->VAR28 = FUN14(VAR4->VAR22);
    if (VAR4->VAR28 < 0)
    {
        FUN4(&VAR4->VAR2, 1, "", (int)VAR4->VAR28, strerror(-VAR4->VAR28), FUN15(VAR4->VAR22) ?: "");
        VAR4->VAR28 = 0;
    }
    FUN4(VAR2, 1, ""%VAR29\""%VAR29\""%VAR29\""
                             "" VAR30 "" VAR30 "",
                  VAR4->VAR31, VAR4->VAR25, VAR4->VAR26, VAR4->VAR28, VAR4->VAR28 >> 20);
    FUN16(&VAR4->VAR2, "", VAR4->VAR32);
    FUN17(&VAR4->VAR2, "", VAR4->VAR28 / VAR4->VAR32);
    if (FUN18(&VAR4->VAR2, "", &VAR4->VAR33) == -1)
    {
        return -1;
    }
    if (FUN18(&VAR4->VAR2, "", &VAR4->VAR2.VAR34) == -1)
    {
        return -1;
    }
    if (FUN18(&VAR4->VAR2, "", &VAR5))
    {
        VAR4->VAR35 = VAR36;
    }
    else
    {
        VAR4->VAR35 = !!VAR5;
    }
    VAR4->VAR37 = VAR38;
    if (VAR4->VAR2.VAR37)
    {
        if (strcmp(VAR4->VAR2.VAR37, VAR39) == 0)
        {
            VAR4->VAR37 = VAR40;
        }
        if (strcmp(VAR4->VAR2.VAR37, VAR41) == 0)
        {
            VAR4->VAR37 = VAR42;
        }
    }
    VAR4->VAR43 = FUN19(VAR4->VAR2.VAR44, VAR4->VAR2.VAR45, VAR4->VAR33, VAR46 | VAR47);
    if (!VAR4->VAR43)
    {
        return -1;
    }
    VAR4->VAR48++;
    switch (VAR4->VAR37)
    {
    case VAR38:
    {
        VAR49 *VAR50 = VAR4->VAR43;
        FUN20(&VAR4->VAR51.VAR52, VAR50, VAR53);
        break;
    }
    case VAR40:
    {
        VAR54 *VAR55 = VAR4->VAR43;
        FUN20(&VAR4->VAR51.VAR56, VAR55, VAR53);
        break;
    }
    case VAR42:
    {
        VAR57 *VAR58 = VAR4->VAR43;
        FUN20(&VAR4->VAR51.VAR59, VAR58, VAR53);
        break;
    }
    }
    if (VAR4->VAR35)
    {
        VAR4->VAR60 = VAR61 * VAR62;
        VAR4->VAR63 = FUN21((VAR64)VAR65, NULL, NULL, (VAR66)VAR67);
        VAR4->VAR68 = 0;
    }
    FUN22(&VAR4->VAR2);
    FUN4(&VAR4->VAR2, 1, ""
                                      "",
                  VAR4->VAR2.VAR37, VAR4->VAR33, VAR4->VAR2.VAR34, VAR4->VAR2.VAR69);
    return 0;
}