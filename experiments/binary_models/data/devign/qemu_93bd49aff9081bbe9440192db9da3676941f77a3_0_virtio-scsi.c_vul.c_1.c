void FUN1(VAR1 *VAR2, VAR3 **VAR4, HandleOutput VAR5, HandleOutput VAR6, HandleOutput VAR7)
{
    VAR8 *VAR9 = FUN2(VAR2);
    VAR10 *VAR11 = FUN3(VAR2);
    int VAR12;
    FUN4(VAR9, "", VAR13, sizeof(VAR14));
    if (VAR11->VAR15.VAR16 <= 0 || VAR11->VAR15.VAR16 > VAR17)
    {
        FUN5(VAR4, "" VAR18 ""
                         "",
                   VAR11->VAR15.VAR16, VAR17);
        return;
    }
    VAR11->VAR19 = FUN6(VAR11->VAR15.VAR16 * sizeof(VAR20 *));
    VAR11->VAR21 = VAR22;
    VAR11->VAR23 = VAR24;
    VAR11->VAR25 = FUN7(VAR9, VAR26, VAR5);
    VAR11->VAR27 = FUN7(VAR9, VAR26, VAR6);
    for (VAR12 = 0; VAR12 < VAR11->VAR15.VAR16; VAR12++)
    {
        VAR11->VAR19[VAR12] = FUN7(VAR9, VAR26, VAR7);
    }
    if (VAR11->VAR15.VAR28)
    {
        FUN8(FUN9(VAR11), VAR11->VAR15.VAR28);
    }