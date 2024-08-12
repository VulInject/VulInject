static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    VAR7 *VAR8 = VAR3;
    const VAR9 *VAR10 = (VAR9 *)VAR6->VAR3;
    VAR9 *VAR11, *VAR12, *VAR13, VAR14 = FUN2(VAR2->VAR15, 4);
    int VAR16, VAR17, VAR18;
    if (VAR6->VAR19 < 4 * VAR2->VAR20 * VAR14)
    {
        FUN3(VAR2, VAR21, "");
        return FUN4(VAR22);
    }
    if ((VAR18 = FUN5(VAR2, VAR8, 0)) < 0)
        return VAR18;
    VAR8->VAR23 = 1;
    VAR8->VAR24 = VAR25;
    VAR11 = (VAR9 *)VAR8->VAR3[0];
    VAR12 = (VAR9 *)VAR8->VAR3[1];
    VAR13 = (VAR9 *)VAR8->VAR3[2];
    for (VAR16 = 0; VAR16 < VAR2->VAR20; VAR16++)
    {
        for (VAR17 = 0; VAR17 < VAR2->VAR15 >> 1; VAR17++)
        {
            VAR12[VAR17] = VAR10[4 * VAR17] << 2 | VAR10[4 * VAR17] >> 14;
            VAR11[2 * VAR17] = VAR10[4 * VAR17 + 1] << 2 | VAR10[4 * VAR17 + 1] >> 14;
            VAR13[VAR17] = VAR10[4 * VAR17 + 2] << 2 | VAR10[4 * VAR17 + 2] >> 14;
            VAR11[2 * VAR17 + 1] = VAR10[4 * VAR17 + 3] << 2 | VAR10[4 * VAR17 + 3] >> 14;
        }
        VAR11 += VAR8->VAR26[0] >> 1;
        VAR12 += VAR8->VAR26[1] >> 1;
        VAR13 += VAR8->VAR26[2] >> 1;
        VAR10 += VAR14 << 1;
    }
    *VAR4 = 1;
    return VAR6->VAR19;
}