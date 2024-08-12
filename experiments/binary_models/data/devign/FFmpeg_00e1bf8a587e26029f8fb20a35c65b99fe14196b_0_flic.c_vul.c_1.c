static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    VAR6 *VAR7 = VAR2->VAR7;
    unsigned char VAR8[VAR9];
    VAR10 *VAR11, *VAR12;
    int VAR13;
    int VAR14;
    unsigned char VAR15[VAR16];
    VAR4->VAR17 = 0;
    if (FUN2(VAR7, VAR8, VAR9) != VAR9)
        return FUN3(VAR18);
    VAR14 = FUN4(&VAR8[4]);
    VAR13 = FUN5(&VAR8[0x10]);
    if (VAR13 == 0)
        VAR13 = VAR19;
    VAR11 = FUN6(VAR2, NULL);
    if (!VAR11)
        return FUN3(VAR20);
    VAR4->VAR21 = VAR11->VAR22;
    VAR11->VAR23->VAR24 = VAR25;
    VAR11->VAR23->VAR26 = VAR27;
    VAR11->VAR23->VAR28 = 0;
    VAR11->VAR23->VAR29 = FUN4(&VAR8[0x08]);
    VAR11->VAR23->VAR30 = FUN4(&VAR8[0x0A]);
    if (!VAR11->VAR23->VAR29 || !VAR11->VAR23->VAR30)
    {
        FUN7(VAR2, VAR31, "");
        VAR11->VAR23->VAR29 = 640;
        VAR11->VAR23->VAR30 = 480;
    }
    VAR11->VAR23->VAR32 = VAR9;
    VAR11->VAR23->VAR33 = FUN8(VAR9);
    memcpy(VAR11->VAR23->VAR33, VAR8, VAR9);
    if (FUN2(VAR7, VAR15, VAR16) != VAR16)
    {
        FUN7(VAR2, VAR34, "");
        return FUN3(VAR18);
    }
    FUN9(VAR7, -VAR16, VAR35);
    if (FUN4(&VAR15[4]) == VAR36)
    {
        VAR12 = FUN6(VAR2, NULL);
        if (!VAR12)
            return FUN3(VAR20);
        VAR4->VAR37 = VAR12->VAR22;
        VAR12->VAR23->VAR38 = FUN5(&VAR15[0]);
        VAR12->VAR23->VAR24 = VAR39;
        VAR12->VAR23->VAR26 = VAR40;
        VAR12->VAR23->VAR28 = 0;
        VAR12->VAR23->VAR41 = VAR42;
        VAR12->VAR23->VAR43 = 1;
        VAR12->VAR23->VAR44 = VAR11->VAR23->VAR41 * 8;
        VAR12->VAR23->VAR45 = 8;
        VAR12->VAR23->VAR46 = VAR47;
        VAR12->VAR23->VAR32 = 0;
        FUN10(VAR11, 64, VAR12->VAR23->VAR38, VAR42);
        FUN10(VAR12, 64, 1, VAR42);
    }
    else if (FUN4(&VAR8[0x10]) == VAR48)
    {
        FUN10(VAR11, 64, VAR49, 70);
        FUN9(VAR7, 12, VAR50);
        FUN11(VAR11->VAR23->VAR33);
        VAR11->VAR23->VAR32 = 12;
        VAR11->VAR23->VAR33 = FUN8(12);
        memcpy(VAR11->VAR23->VAR33, VAR8, 12);
    }
    else if (VAR14 == VAR51)
    {
        FUN10(VAR11, 64, VAR13, 70);
    }
    else if ((VAR14 == VAR52) || (VAR14 == VAR53))
    {
        FUN10(VAR11, 64, VAR13, 1000);
    }
    else
    {
        FUN7(VAR2, VAR34, "");
        return VAR54;
    }
    return 0;
}