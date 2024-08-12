static int FUN1(VAR1 *VAR2, VAR3 *VAR4, FUN2 (*VAR5)[3], VAR6 *VAR7, int VAR8)
{
    int VAR9, VAR10, VAR11, VAR12, VAR13, VAR14;
    int VAR15;
    int VAR16;
    int VAR17;
    FUN3(VAR7, 2);
    VAR15 = FUN4(VAR7, 4);
    if (VAR4->VAR15 != VAR15)
        FUN5(VAR2, VAR18, ""
                                      "");
    VAR9 = FUN4(VAR7, 4);
    VAR10 = FUN4(VAR7, 4);
    VAR11 = FUN4(VAR7, 4);
    VAR12 = FUN4(VAR7, 2);
    VAR13 = FUN4(VAR7, 3);
    VAR14 = FUN4(VAR7, 4);
    if (FUN6(VAR7))
        FUN3(VAR7, 4);
    if (FUN6(VAR7))
        FUN3(VAR7, 4);
    if (FUN6(VAR7))
        FUN3(VAR7, 3);
    if (FUN7(VAR7) < 4 * (VAR9 + VAR10 + VAR11 + VAR12 + VAR13 + VAR14))
    {
        FUN5(VAR2, VAR19, "" VAR20);
        return -1;
    }
    FUN8(VAR5, VAR21, VAR7, VAR9);
    VAR17 = VAR9;
    FUN8(VAR5 + VAR17, VAR22, VAR7, VAR10);
    VAR17 += VAR10;
    FUN8(VAR5 + VAR17, VAR23, VAR7, VAR11);
    VAR17 += VAR11;
    FUN8(VAR5 + VAR17, VAR24, VAR7, VAR12);
    VAR17 += VAR12;
    FUN9(VAR7, 4 * VAR13);
    FUN8(VAR5 + VAR17, VAR25, VAR7, VAR14);
    VAR17 += VAR14;
    FUN10(VAR7, VAR8);
    VAR16 = FUN4(VAR7, 8) * 8;
    if (FUN7(VAR7) < VAR16)
    {
        FUN5(VAR2, VAR19, "" VAR20);
        return VAR26;
    }
    FUN9(VAR7, VAR16);
    return VAR17;
}