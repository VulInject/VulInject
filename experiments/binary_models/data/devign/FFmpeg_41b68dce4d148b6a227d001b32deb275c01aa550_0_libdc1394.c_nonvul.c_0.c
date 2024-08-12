static inline int FUN1(VAR1 *VAR2, VAR3 *VAR4, struct VAR5 **VAR6, struct VAR7 **VAR8)
{
    VAR9 *VAR10 = VAR2->VAR11;
    VAR12 *VAR13;
    struct VAR5 *VAR14;
    struct VAR7 *VAR15;
    enum PixelFormat VAR16;
    int VAR17, VAR18;
    AVRational VAR19;
    int VAR20 = 0;
    if ((VAR16 = FUN2(VAR10->VAR21)) == VAR22)
    {
        FUN3(VAR2, VAR23, "", VAR10->VAR21);
        VAR20 = FUN4(VAR24);
        goto VAR25;
    }
    if ((VAR20 = FUN5(&VAR17, &VAR18, VAR10->VAR26)) < 0)
    {
        FUN3(VAR2, VAR23, "", VAR10->VAR26);
        goto VAR25;
    }
    if ((VAR20 = FUN6(&VAR19, VAR10->VAR19)) < 0)
    {
        FUN3(VAR2, VAR23, "", VAR10->VAR19);
        goto VAR25;
    }
    if (VAR4->VAR17 > 0)
        VAR17 = VAR4->VAR17;
    if (VAR4->VAR18 > 0)
        VAR18 = VAR4->VAR18;
    if (VAR4->VAR16)
        VAR16 = VAR4->VAR16;
    if (VAR4->VAR27.VAR28)
        VAR19 = (VAR29){VAR4->VAR27.VAR30, VAR4->VAR27.VAR28};
    VAR10->VAR31 = FUN7(1000, VAR19.VAR28, VAR19.VAR30);
    for (VAR14 = VAR32; VAR14->VAR17; VAR14++)
        if (VAR14->VAR16 == VAR16 && VAR14->VAR17 == VAR17 && VAR14->VAR18 == VAR18)
            break;
    for (VAR15 = VAR33; VAR15->VAR31; VAR15++)
        if (VAR15->VAR31 == VAR10->VAR31)
            break;
    if (!VAR15->VAR31 || !VAR14->VAR17)
    {
        FUN3(VAR2, VAR23, "", FUN8(VAR16), VAR17, VAR18, VAR10->VAR31);
        VAR20 = FUN4(VAR24);
        goto VAR25;
    }
    VAR13 = FUN9(VAR2, 0);
    if (!VAR13)
    {
        VAR20 = FUN4(VAR34);
        goto VAR25;
    }
    FUN10(VAR13, 64, 1, 1000);
    VAR13->VAR35->VAR36 = VAR37;
    VAR13->VAR35->VAR38 = VAR39;
    VAR13->VAR35->VAR27.VAR30 = VAR19.VAR28;
    VAR13->VAR35->VAR27.VAR28 = VAR19.VAR30;
    VAR13->VAR35->VAR17 = VAR14->VAR17;
    VAR13->VAR35->VAR18 = VAR14->VAR18;
    VAR13->VAR35->VAR16 = VAR14->VAR16;
    FUN11(&VAR10->VAR40);
    VAR10->VAR40.VAR41 = FUN12(VAR14->VAR16, VAR14->VAR17, VAR14->VAR18);
    VAR10->VAR40.VAR42 = VAR13->VAR43;
    VAR10->VAR40.VAR44 |= VAR45;
    VAR10->VAR46 = 0;
    VAR13->VAR35->VAR47 = FUN7(VAR10->VAR40.VAR41 * 8, VAR15->VAR31, 1000);
    *VAR8 = VAR15;
    *VAR6 = VAR14;
VAR25:
    return VAR20;
}