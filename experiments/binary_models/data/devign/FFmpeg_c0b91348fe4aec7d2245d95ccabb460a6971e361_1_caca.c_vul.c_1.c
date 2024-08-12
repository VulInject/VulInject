static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    VAR6 *VAR7 = VAR2->VAR8[0];
    VAR9 *VAR10 = VAR7->VAR11;
    int VAR12, VAR13;
    VAR4->VAR14 = VAR2;
    if (VAR4->VAR15)
    {
        FUN2(VAR4);
        return VAR16;
    }
    if (VAR4->VAR17)
    {
        if (!strcmp(VAR4->VAR17, ""))
        {
            FUN3(VAR4);
        }
        else if (!strcmp(VAR4->VAR17, ""))
        {
            FUN4(VAR4);
        }
        else if (!strcmp(VAR4->VAR17, ""))
        {
            FUN5(VAR4);
        }
        else if (!strcmp(VAR4->VAR17, ""))
        {
            FUN6(VAR4);
        }
        else
        {
            FUN7(VAR2, VAR18, ""
                                    "",
                   VAR4->VAR17);
            return FUN8(VAR19);
        }
        return VAR16;
    }
    if (VAR2->VAR20 > 1 || VAR10->VAR21 != VAR22 || VAR10->VAR23 != VAR24)
    {
        FUN7(VAR2, VAR18, "");
        return FUN8(VAR19);
    }
    if (VAR10->VAR25 != VAR26)
    {
        FUN7(VAR2, VAR18, "", FUN9(VAR10->VAR25));
        return FUN8(VAR19);
    }
    VAR4->VAR27 = FUN10(VAR4->VAR28, VAR4->VAR29);
    if (!VAR4->VAR27)
    {
        FUN7(VAR2, VAR18, "");
        return FUN8(VAR30);
    }
    VAR4->VAR31 = FUN11(VAR4->VAR27, VAR4->VAR32);
    if (!VAR4->VAR31)
    {
        FUN7(VAR2, VAR18, "");
        FUN2(VAR4);
        FUN12(VAR4->VAR27);
        return FUN8(VAR30);
    }
    if (!VAR4->VAR28 || !VAR4->VAR29)
    {
        VAR4->VAR28 = FUN13(VAR4->VAR27);
        VAR4->VAR29 = FUN14(VAR4->VAR27);
    }
    VAR13 = FUN15(&VAR33[VAR10->VAR25]);
    VAR4->VAR34 = FUN16(VAR13, VAR10->VAR35, VAR10->VAR36, VAR13 / 8 * VAR10->VAR35, 0x0000ff, 0x00ff00, 0xff0000, 0);
    if (!VAR4->VAR34)
    {
        FUN7(VAR2, VAR18, "");
        VAR12 = FUN8(VAR30);
        goto VAR37;
    }
    if (VAR38##FUN17(VAR4->VAR34, VAR4->VAR39) < 0)
    {
        VAR12 = FUN8(VAR30);
        FUN7(VAR2, VAR18, "", VAR4->VAR39, #VAR39);
        goto VAR37;
    }
    FUN18(VAR40);
    FUN18(VAR41);
    FUN18(VAR42);
    FUN18(VAR43);
    if (!VAR4->VAR44)
        VAR4->VAR44 = FUN19(VAR2->VAR45);
    FUN20(VAR4->VAR31, VAR4->VAR44);
    FUN21(VAR4->VAR31, FUN22(1, VAR7->VAR11->VAR46, VAR47));
    return 0;
VAR37:
    FUN23(VAR2);
    return VAR12;
}