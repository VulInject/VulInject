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
    VAR11 = VAR5->VAR9;
    VAR7->VAR19 = VAR20;
    VAR20 = NULL;
    VAR11->VAR21 = VAR16;
    if (VAR22)
        VAR11->VAR23 = VAR22;
    if (VAR2->VAR17->VAR24 & VAR25)
    {
        VAR11->VAR24 |= VAR26;
    }
    if (VAR14)
    {
        VAR5->VAR27 = 1;
    }
    else
    {
        VAR11->VAR12 = VAR12;
        FUN7(VAR28[VAR16], VAR11, VAR29 | VAR30, VAR9);
    }
    if (VAR31)
    {
        FUN8(&VAR5->VAR32, "", VAR31, 0);
        FUN9(&VAR31);
    }
    VAR33 = 0;
    FUN9(&VAR15);
    VAR14 = 0;
}