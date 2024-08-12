int FUN1(VAR1 *VAR2[4], int VAR3[4], int VAR4, int VAR5, enum AVPixelFormat VAR6, int VAR7)
{
    const VAR8 *VAR9 = FUN2(VAR6);
    int VAR10, VAR11;
    VAR1 *VAR12;
    if (!VAR9)
        return FUN3(VAR13);
    if ((VAR11 = FUN4(VAR4, VAR5, 0, NULL)) < 0)
        return VAR11;
    if ((VAR11 = FUN5(VAR3, VAR6, VAR7 > 7 ? FUN6(VAR4, 8) : VAR4)) < 0)
        return VAR11;
    for (VAR10 = 0; VAR10 < 4; VAR10++)
        VAR3[VAR10] = FUN6(VAR3[VAR10], VAR7);
    if ((VAR11 = FUN7(VAR2, VAR6, VAR5, NULL, VAR3)) < 0)
        return VAR11;
    VAR12 = FUN8(VAR11 + VAR7);
    if (!VAR12)
        return FUN3(VAR14);
    if ((VAR11 = FUN7(VAR2, VAR6, VAR5, VAR12, VAR3)) < 0)
    {
        FUN9(VAR12);
        return VAR11;
        if (VAR9->VAR15 & VAR16 || VAR9->VAR15 & VAR17)
            FUN10((VAR18 *)VAR2[1], VAR6);
        return VAR11