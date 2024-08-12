static void FUN1(VAR1 *VAR2, int64_t VAR3)
{
    VAR4 *VAR5 = VAR2->VAR6;
    int VAR7;
    int64_t VAR8, VAR9, VAR10[2];
    VAR11 *VAR12;
    int VAR13, VAR14, VAR15, VAR16;
    GetBitContext VAR17;
    if (VAR2->VAR18 == 0)
    {
        FUN2(VAR2, VAR19, "");
        return;
    }
    FUN3(VAR2->VAR20, VAR3, VAR21);
    FUN4(VAR2->VAR20, &VAR7, &VAR8);
    if (VAR7 != VAR22)
    {
        FUN2(VAR2, VAR19, "");
        return;
    }
    if (VAR8 > VAR23 / 10 || VAR8 <= 0)
    {
        FUN2(VAR2, VAR19, "");
        return;
    }
    if (!(VAR12 = FUN5(VAR8 + VAR24)))
        return;
    VAR16 = FUN6(VAR2->VAR20, VAR12, VAR8);
    if (VAR16 != VAR8)
    {
        FUN2(VAR2, VAR19, "");
        FUN7(VAR12);
        return;
    }
    memset(VAR12 + VAR8, 0, VAR24);
    FUN8(&VAR17, VAR12, VAR8 * 8);
    VAR8 = FUN9(&VAR17);
    if (VAR8 > VAR25 / 4 || VAR8 > VAR5->VAR26 / 1152)
    {
        FUN2(VAR2, VAR19, "");
        return;
    }
    VAR15 = FUN10(&VAR17, 4);
    for (VAR13 = 0; VAR13 < 2; VAR13++)
    {
        VAR9 = FUN9(&VAR17) + VAR5->VAR27;
        VAR10[1 - VAR13] = VAR9;
        FUN11(VAR2->VAR28[0], VAR9, VAR13, 0, 0, VAR29);
    }
    for (; VAR13 < VAR8; VAR13++)
    {
        VAR14 = FUN12(&VAR17, 1, 33) << 12;
        VAR14 += FUN10(&VAR17, 12);
        if (VAR14 & 1)
            VAR14 = -(VAR14 & ~1);
        VAR9 = (VAR14 >> 1) + VAR10[0] * 2 - VAR10[1];
        FUN11(VAR2->VAR28[0], VAR9, VAR13 << VAR15, 0, 0, VAR29);
        VAR10[1] = VAR10[0];
        VAR10[0] = VAR9;
    }
    FUN7(VAR12);
}