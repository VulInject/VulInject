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
    VAR6 = (VAR4->VAR2.VAR15 - 202 * 256) / 16;
    VAR4->VAR16 = FUN3(VAR17, 0, VAR6);
    if (!VAR4->VAR16)
    {
        VAR18 *VAR19 = NULL;
        FUN4(&VAR4->VAR2, 2, "");
        VAR4->VAR20 = FUN5(VAR4->VAR15, &VAR19);
        if (VAR19)
        {
            VAR4->VAR20 = NULL;
        }
        if (VAR4->VAR20)
        {
            VAR21 *VAR22 = FUN6(VAR4->VAR23, VAR8);
            if (FUN7(&VAR4->VAR20, VAR4->VAR24, NULL, NULL, VAR7, VAR22, &VAR19) != 0)
            {
                FUN4(&VAR4->VAR2, 0, "", FUN8(VAR19));
                FUN9(VAR19);
                FUN10(VAR4->VAR20);
                VAR4->VAR20 = NULL;
            }
        }
        if (!VAR4->VAR20)
        {
            return -1;
        }
    }
    else
    {
        FUN4(&VAR4->VAR2, 2, "");
        VAR4->VAR20 = VAR4->VAR16->VAR25;
        if (FUN11(VAR4->VAR20) && !VAR8)
        {
            FUN4(&VAR4->VAR2, 0, "");
            VAR4->VAR20 = NULL;
            return -1;
        }
        FUN12(VAR4->VAR20);
    }
    FUN13(VAR4->VAR20, VAR4);
    VAR4->VAR26 = FUN14(VAR4->VAR20);
    if (VAR4->VAR26 < 0)
    {
        FUN4(&VAR4->VAR2, 1, "", (int)VAR4->VAR26, strerror(-VAR4->VAR26), FUN15(VAR4->VAR20) ?: "");
        VAR4->VAR26 = 0;
    }
    FUN4(VAR2, 1, ""%VAR27\""%VAR27\""%VAR27\""
                             "" VAR28 "" VAR28 "",
                  VAR4->VAR29, VAR4->VAR23, VAR4->VAR24, VAR4->VAR26, VAR4->VAR26 >> 20);
    FUN16(&VAR4->VAR2, "", VAR4->VAR30);
    FUN17(&VAR4->VAR2, "", VAR4->VAR26 / VAR4->VAR30);
    if (FUN18(&VAR4->VAR2, "", &VAR4->VAR31) == -1)
    {
        return -1;
    }
    if (FUN18(&VAR4->VAR2, "", &VAR4->VAR2.VAR32) == -1)
    {
        return -1;
    }
    if (FUN18(&VAR4->VAR2, "", &VAR5))
    {
        VAR4->VAR33 = VAR34;
    }
    else
    {
        VAR4->VAR33 = !!VAR5;
    }
    VAR4->VAR35 = VAR36;
    if (VAR4->VAR2.VAR35)
    {
        if (strcmp(VAR4->VAR2.VAR35, VAR37) == 0)
        {
            VAR4->VAR35 = VAR38;
        }
        if (strcmp(VAR4->VAR2.VAR35, VAR39) == 0)
        {
            VAR4->VAR35 = VAR40;
        }
    }
    VAR4->VAR41 = FUN19(VAR4->VAR2.VAR42, VAR4->VAR2.VAR43, VAR4->VAR31, VAR44 | VAR45);
    if (!VAR4->VAR41)
    {
        return -1;
    }
    VAR4->VAR46++;
    switch (VAR4->VAR35)
    {
    case VAR36:
    {
        VAR47 *VAR48 = VAR4->VAR41;
        FUN20(&VAR4->VAR49.VAR50, VAR48, VAR51);
        break;
    }
    case VAR38:
    {
        VAR52 *VAR53 = VAR4->VAR41;
        FUN20(&VAR4->VAR49.VAR54, VAR53, VAR51);
        break;
    }
    case VAR40:
    {
        VAR55 *VAR56 = VAR4->VAR41;
        FUN20(&VAR4->VAR49.VAR57, VAR56, VAR51);
        break;
    }
    }
    if (VAR4->VAR33)
    {
        VAR4->VAR58 = VAR59 * VAR60;
        VAR4->VAR61 = FUN21((VAR62)VAR63, NULL, NULL, (VAR64)VAR65);
        VAR4->VAR66 = 0;
    }
    FUN22(&VAR4->VAR2);
    FUN4(&VAR4->VAR2, 1, ""
                                      "",
                  VAR4->VAR2.VAR35, VAR4->VAR31, VAR4->VAR2.VAR32, VAR4->VAR2.VAR67);
    return 0;
}