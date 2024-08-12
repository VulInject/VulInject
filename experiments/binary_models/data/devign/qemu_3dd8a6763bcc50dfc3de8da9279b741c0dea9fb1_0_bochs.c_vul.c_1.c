static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, VAR6 **VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    int VAR11;
    struct bochs_header VAR12;
    struct bochs_header_v1 VAR13;
    int VAR14;
    VAR2->VAR15 = 1;
    VAR14 = FUN2(VAR2->VAR16, 0, &VAR12, sizeof(VAR12));
    if (VAR14 < 0)
    {
        return VAR14;
    }
    if (strcmp(VAR12.VAR17, VAR18) || strcmp(VAR12.VAR19, VAR20) || strcmp(VAR12.VAR21, VAR22) || ((FUN3(VAR12.VAR23) != VAR24) && (FUN3(VAR12.VAR23) != VAR25)))
    {
        FUN4(VAR7, "");
        return -VAR26;
    }
    if (FUN3(VAR12.VAR23) == VAR25)
    {
        memcpy(&VAR13, &VAR12, sizeof(VAR12));
        VAR2->VAR27 = FUN5(VAR13.VAR28.VAR29.VAR30) / 512;
    }
    else
    {
        VAR2->VAR27 = FUN5(VAR12.VAR28.VAR29.VAR30) / 512;
    }
    VAR9->VAR31 = FUN3(VAR12.VAR28.VAR29.VAR32);
    VAR9->VAR33 = FUN6(VAR9->VAR31 * 4);
    VAR14 = FUN2(VAR2->VAR16, FUN3(VAR12.VAR34), VAR9->VAR33, VAR9->VAR31 * 4);
    if (VAR14 < 0)
    {
        goto VAR35;
    }
    for (VAR11 = 0; VAR11 < VAR9->VAR31; VAR11++)
        FUN7(&VAR9->VAR33[VAR11]);
    VAR9->VAR36 = FUN3(VAR12.VAR34) + (VAR9->VAR31 * 4);
    VAR9->VAR37 = 1 + (FUN3(VAR12.VAR28.VAR29.VAR38) - 1) / 512;
    VAR9->VAR39 = 1 + (FUN3(VAR12.VAR28.VAR29.VAR40) - 1) / 512;
    VAR9->VAR41 = FUN3(VAR12.VAR28.VAR29.VAR40);
    FUN8(&VAR9->VAR42);
    return 0;
VAR35:
    FUN9(VAR9->VAR33);
    return VAR14;
}