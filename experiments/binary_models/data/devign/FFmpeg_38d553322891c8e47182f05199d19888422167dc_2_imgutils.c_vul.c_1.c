int FUN1(VAR1 *VAR2[4], int VAR3[4], int VAR4, int VAR5, enum PixelFormat VAR6, int VAR7)
{
    int VAR8, VAR9;
    VAR1 *VAR10;
    if ((VAR9 = FUN2(VAR4, VAR5, 0, NULL)) < 0)
        return VAR9;
    if ((VAR9 = FUN3(VAR3, VAR6, VAR4)) < 0)
        return VAR9;
    for (VAR8 = 0; VAR8 < 4; VAR8++)
        VAR3[VAR8] = FUN4(VAR3[VAR8], VAR7);
    if ((VAR9 = FUN5(VAR2, VAR6, VAR5, NULL, VAR3)) < 0)
        return VAR9;
    VAR10 = FUN6(VAR9 + VAR7);
    if (!VAR10)
        return FUN7(VAR11);
    if ((VAR9 = FUN5(VAR2, VAR6, VAR5, VAR10, VAR3)) < 0)
    {
        FUN8(VAR10);
        return VAR9;
    }
    if (VAR12[VAR6].VAR13 & VAR14)
        FUN9((VAR15 *)VAR2[1], VAR6);
    return VAR9;
}