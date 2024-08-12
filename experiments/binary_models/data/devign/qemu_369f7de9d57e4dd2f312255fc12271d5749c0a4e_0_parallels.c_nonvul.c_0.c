static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, VAR6 **VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    int VAR11;
    ParallelsHeader VAR12;
    int VAR13;
    VAR13 = FUN2(VAR2->VAR14, 0, &VAR12, sizeof(VAR12));
    if (VAR13 < 0)
    {
        goto VAR15;
    }
    VAR2->VAR16 = FUN3(VAR12.VAR17);
    if (FUN4(VAR12.VAR18) != VAR19)
    {
        goto VAR20;
    }
    if (!memcmp(VAR12.VAR21, VAR22, 16))
    {
        VAR9->VAR23 = 1;
        VAR2->VAR16 = 0xffffffff & VAR2->VAR16;
    }
    else if (!memcmp(VAR12.VAR21, VAR24, 16))
    {
        VAR9->VAR23 = FUN4(VAR12.VAR25);
    }
    else
    {
        goto VAR20;
    }
    VAR9->VAR25 = FUN4(VAR12.VAR25);
    if (VAR9->VAR25 == 0)
    {
        FUN5(VAR7, "");
        VAR13 = -VAR26;
        goto VAR15;
    }
    if (VAR9->VAR25 > VAR27 / 513)
    {
        FUN5(VAR7, "");
        VAR13 = -VAR28;
        goto VAR15;
    }
    VAR9->VAR29 = FUN4(VAR12.VAR30);
    if (VAR9->VAR29 > VAR31 / sizeof(VAR32))
    {
        FUN5(VAR7, "");
        VAR13 = -VAR28;
        goto VAR15;
    }
    VAR9->VAR33 = FUN6(VAR32, VAR9->VAR29);
    if (VAR9->VAR29 && VAR9->VAR33 == NULL)
    {
        VAR13 = -VAR34;
        goto VAR15;
    }
    VAR13 = FUN2(VAR2->VAR14, sizeof(VAR35), VAR9->VAR33, VAR9->VAR29 * sizeof(VAR32));
    if (VAR13 < 0)
    {
        goto VAR15;
    }
    for (VAR11 = 0; VAR11 < VAR9->VAR29; VAR11++)
    {
        FUN7(&VAR9->VAR33[VAR11]);
    }
    VAR9->VAR36 = FUN8(VAR2->VAR14) && FUN9(VAR2->VAR14, FUN10(VAR2->VAR14)) == 0;
    FUN11(&VAR9->VAR37);
    return 0;
VAR20:
    FUN5(VAR7, "");
    VAR13 = -VAR26;
VAR15:
    FUN12(VAR9->VAR33);
    return VAR13;
}