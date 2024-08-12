static void FUN1(VAR1 *VAR2, int VAR3)
{
    VAR4 *VAR5;
    VAR6 *VAR7;
    VAR8 *VAR9 = NULL;
    VAR10 *VAR11;
    enum CodecID VAR12 = VAR13;
    if (!VAR14)
    {
        if (VAR15)
        {
            VAR12 = FUN2(VAR15, VAR16, 1);
            VAR9 = FUN3(VAR15);
        }
        else
        {
            VAR12 = FUN4(VAR2->VAR17, NULL, VAR2->VAR18, NULL, VAR16);
            VAR9 = FUN5(VAR12);
        }
    }
    VAR7 = FUN6(VAR2, VAR3, VAR9);
    VAR5 = VAR7->VAR5;
    VAR7->VAR19 = VAR20;
    VAR20 = NULL;
    VAR5->VAR9->VAR21 = VAR21;
    VAR11 = VAR5->VAR9;
    VAR11->VAR22 = VAR16;
    if (VAR23)
        VAR11->VAR24 = VAR23;
    if (VAR2->VAR17->VAR25 & VAR26)
    {
        VAR11->VAR25 |= VAR27;
    }
    if (VAR14)
    {
        VAR5->VAR28 = 1;
    }
    else
    {
        VAR11->VAR12 = VAR12;
        FUN7(VAR11, VAR29[VAR16], VAR30 | VAR31, VAR9);
        if (VAR32 > VAR33)
        {
            VAR11->VAR25 |= VAR34;
            VAR11->VAR35 = VAR36 * VAR32;
        }
        if (VAR37)
            VAR11->VAR38 = VAR37;
        if (VAR39 != VAR40)
            VAR11->VAR41 = VAR39;
        if (VAR42)
            VAR11->VAR43 = VAR42;
    }
    if (VAR44)
    {
        FUN8(&VAR5->VAR45, "", VAR44, 0);
        FUN9(&VAR44);
    }
    VAR46 = 0;
    FUN9(&VAR15);
    VAR14 = 0;
}