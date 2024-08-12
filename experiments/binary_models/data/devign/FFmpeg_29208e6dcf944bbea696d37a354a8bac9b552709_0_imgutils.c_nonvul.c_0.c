int FUN1(VAR1 *VAR2[4], int VAR3[4], const VAR1 *VAR4, enum AVPixelFormat VAR5, int VAR6, int VAR7, int VAR8)
{
    int VAR9, VAR10;
    if ((VAR9 = FUN2(VAR6, VAR7, 0, NULL)) < 0)
        return VAR9;
    if ((VAR9 = FUN3(VAR3, VAR5, VAR6)) < 0)
        return VAR9;
    for (VAR10 = 0; VAR10 < 4; VAR10++)
        VAR3[VAR10] = FUN4(VAR3[VAR10], VAR8);
    return FUN5(VAR2, VAR5, VAR7, (VAR1 *)VAR4, VAR3);
}