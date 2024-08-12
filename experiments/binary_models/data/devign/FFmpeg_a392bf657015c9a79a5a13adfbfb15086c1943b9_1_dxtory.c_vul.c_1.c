static int FUN1(VAR1 *VAR2, VAR3 *VAR4, const VAR5 *VAR6, int VAR7, int VAR8, int VAR9)
{
    int VAR10;
    VAR5 *VAR11;
    int VAR12;
    if (VAR7 < VAR2->VAR13 * VAR2->VAR14 * VAR9)
    {
        FUN2(VAR2, VAR15, "");
        return VAR16;
    }
    VAR2->VAR17 = VAR8;
    if ((VAR12 = FUN3(VAR2, VAR4, 0)) < 0)
        return VAR12;
    VAR11 = VAR4->VAR18[0];
    for (VAR10 = 0; VAR10 < VAR2->VAR14; VAR10++)
    {
        memcpy(VAR11, VAR6, VAR2->VAR13 * VAR9);
        VAR6 += VAR2->VAR13 * VAR9;
        VAR11 += VAR4->VAR19[0];
    }
    return 0;
}