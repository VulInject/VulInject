static int FUN1(VAR1 *VAR2, VAR3 *VAR4, FUN2 (*VAR5)[3], VAR6 *VAR7)
{
    int VAR8, VAR9, VAR10, VAR11, VAR12, VAR13, VAR14;
    int VAR15;
    int VAR16;
    FUN3(VAR7, 2);
    VAR14 = FUN4(VAR7, 4);
    if (VAR4->VAR14 != VAR14)
        FUN5(VAR2, VAR17, "");
    VAR8 = FUN4(VAR7, 4);
    VAR9 = FUN4(VAR7, 4);
    VAR10 = FUN4(VAR7, 4);
    VAR11 = FUN4(VAR7, 2);
    VAR12 = FUN4(VAR7, 3);
    VAR13 = FUN4(VAR7, 4);
    if (FUN6(VAR7))
        FUN3(VAR7, 4);
    if (FUN6(VAR7))
        FUN3(VAR7, 4);
    if (FUN6(VAR7))
        FUN3(VAR7, 3);
    if (FUN7(VAR7) < 4 * (VAR8 + VAR9 + VAR10 + VAR11 + VAR12 + VAR13))
    {
        FUN5(VAR2, VAR18, VAR19);
        return -1;
    }
    FUN8(VAR5, VAR20, VAR7, VAR8);
    VAR16 = VAR8;
    FUN8(VAR5 + VAR16, VAR21, VAR7, VAR9);
    VAR16 += VAR9;
    FUN8(VAR5 + VAR16, VAR22, VAR7, VAR10);
    VAR16 += VAR10;
    FUN8(VAR5 + VAR16, VAR23, VAR7, VAR11);
    VAR16 += VAR11;
    FUN9(VAR7, 4 * VAR12);
    FUN8(VAR5 + VAR16, VAR24, VAR7, VAR13);
    VAR16 += VAR13;
    FUN10(VAR7);
    VAR15 = FUN4(VAR7, 8) * 8;
    if (FUN7(VAR7) < VAR15)
    {
        FUN5(VAR2, VAR18, VAR19);
        return -1;
    }
    FUN9(VAR7, VAR15);
    return VAR16;
}