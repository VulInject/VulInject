static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, VAR6 **VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    uint32_t VAR11;
    struct bochs_header VAR12;
    int VAR13;
    VAR2->VAR14 = FUN2(NULL, VAR4, "", VAR2, &VAR15, false, VAR7);
    if (!VAR2->VAR14)
    {
        return -VAR16;
    }
    VAR13 = FUN3(VAR2, true, VAR7);
    if (VAR13 < 0)
    {
        return VAR13;
    }
    VAR13 = FUN4(VAR2->VAR14, 0, &VAR12, sizeof(VAR12));
    if (VAR13 < 0)
    {
        return VAR13;
    }
    if (strcmp(VAR12.VAR17, VAR18) || strcmp(VAR12.VAR19, VAR20) || strcmp(VAR12.VAR21, VAR22) || ((FUN5(VAR12.VAR23) != VAR24) && (FUN5(VAR12.VAR23) != VAR25)))
    {
        FUN6(VAR7, "");
        return -VAR16;
    }
    if (FUN5(VAR12.VAR23) == VAR25)
    {
        VAR2->VAR26 = FUN7(VAR12.VAR27.VAR28.VAR29) / 512;
    }
    else
    {
        VAR2->VAR26 = FUN7(VAR12.VAR27.VAR30.VAR29) / 512;
    }
    VAR9->VAR31 = FUN5(VAR12.VAR32);
    if (VAR9->VAR31 > 0x100000)
    {
        FUN6(VAR7, "");
        return -VAR33;
    }
    VAR9->VAR34 = FUN8(VAR35, VAR9->VAR31);
    if (VAR9->VAR31 && VAR9->VAR34 == NULL)
    {
        FUN6(VAR7, "");
        return -VAR36;
    }
    VAR13 = FUN4(VAR2->VAR14, FUN5(VAR12.VAR37), VAR9->VAR34, VAR9->VAR31 * 4);
    if (VAR13 < 0)
    {
        goto VAR38;
    }
    for (VAR11 = 0; VAR11 < VAR9->VAR31; VAR11++)
        FUN9(&VAR9->VAR34[VAR11]);
    VAR9->VAR39 = FUN5(VAR12.VAR37) + (VAR9->VAR31 * 4);
    VAR9->VAR40 = 1 + (FUN5(VAR12.VAR41) - 1) / 512;
    VAR9->VAR42 = 1 + (FUN5(VAR12.VAR43) - 1) / 512;
    VAR9->VAR44 = FUN5(VAR12.VAR43);
    if (VAR9->VAR44 < VAR45)
    {
        FUN6(VAR7, "");
        VAR13 = -VAR16;
        goto VAR38;
    }
    else if (!FUN10(VAR9->VAR44))
    {
        FUN6(VAR7, "" VAR46 "", VAR9->VAR44);
        VAR13 = -VAR16;
        goto VAR38;
    }
    else if (VAR9->VAR44 > 0x800000)
    {
        FUN6(VAR7, "" VAR46 "", VAR9->VAR44);
        VAR13 = -VAR16;
        goto VAR38;
    }
    if (VAR9->VAR31 < FUN11(VAR2->VAR26, VAR9->VAR44 / VAR45))
    {
        FUN6(VAR7, "");
        VAR13 = -VAR16;
        goto VAR38;
    }
    FUN12(&VAR9->VAR47);
    return 0;
VAR38:
    FUN13(VAR9->VAR34);
    return VAR13;
}