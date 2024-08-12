static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, void *VAR6)
{
    int VAR7, VAR8;
    VAR9 *VAR10 = VAR2->VAR11;
    VAR10->VAR4 = VAR10->VAR12 = VAR4;
    VAR10->VAR13 = VAR4 + VAR5;
    VAR10->VAR14 = VAR6;
    VAR10->VAR15 = VAR10->VAR14->VAR16 * VAR17;
    FUN2(VAR10);
    FUN3(VAR10);
    if (VAR10->VAR13 - VAR10->VAR4 < 2)
        return -1;
    FUN4(&VAR10->VAR4, VAR18);
    if (VAR8 = FUN5(VAR10))
        return VAR8;
    if (VAR8 = FUN6(VAR10))
        return VAR8;
    if (VAR8 = FUN7(VAR10, 0))
        return VAR8;
    for (VAR7 = 0; VAR7 < VAR10->VAR19 * VAR10->VAR20; VAR7++)
    {
        VAR3 *VAR21;
        if ((VAR21 = FUN8(VAR10, VAR7)) < 0)
            return VAR21;
        if (VAR10->VAR13 - VAR10->VAR4 < 2)
            return -1;
        FUN4(&VAR10->VAR4, VAR22);
        if (VAR8 = FUN9(VAR10, VAR10->VAR23 + VAR7, VAR7))
            return VAR8;
        FUN10(&VAR21, VAR10->VAR4 - VAR21 + 6);
    }
    if (VAR10->VAR13 - VAR10->VAR4 < 2)
        return -1;
    FUN4(&VAR10->VAR4, VAR24);
    FUN11(VAR10->VAR2, VAR25, "");
    return VAR10->VAR4 - VAR10->VAR12;
}