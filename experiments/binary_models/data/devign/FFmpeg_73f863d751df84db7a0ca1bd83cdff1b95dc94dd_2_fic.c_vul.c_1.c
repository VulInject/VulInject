static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, int VAR7, VAR8 *VAR9)
{
    int VAR10, VAR11;
    if (FUN2(VAR4))
    {
        VAR2->VAR12->VAR13 = 0;
        VAR2->VAR12->VAR14 = VAR15;
        return 0;
    }
    memset(VAR9, 0, sizeof(*VAR9) * 64);
    VAR11 = FUN3(VAR4, 7);
    if (VAR11 > 64)
        return VAR16;
    for (VAR10 = 0; VAR10 < VAR11; VAR10++)
        VAR9[VAR17[VAR10]] = FUN4(VAR4) * VAR2->VAR18[VAR17[VAR10]];
    FUN5(VAR6, VAR7, VAR9);
    return 0;
}