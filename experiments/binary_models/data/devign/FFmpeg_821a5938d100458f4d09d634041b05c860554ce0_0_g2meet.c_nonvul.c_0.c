static int FUN1(VAR1 *VAR2)
{
    int VAR3;
    if (!VAR2->VAR4 || VAR2->VAR5 < VAR2->VAR6 || VAR2->VAR7 < VAR2->VAR8)
    {
        VAR2->VAR9 = FUN2(VAR2->VAR6 * 3, 16);
        VAR3 = FUN2(VAR2->VAR8, 16);
        FUN3(VAR2->VAR4);
        VAR2->VAR4 = FUN4(VAR2->VAR9 * VAR3);
        if (!VAR2->VAR4)
            return FUN5(VAR10);
    }
    if (!VAR2->VAR11 || !VAR2->VAR12 || VAR2->VAR13 < VAR2->VAR14 || VAR2->VAR15 < VAR2->VAR16)
    {
        VAR2->VAR17 = FUN2(VAR2->VAR14, 16) * 3;
        VAR3 = FUN2(VAR2->VAR16, 16);
        FUN3(VAR2->VAR11);
        FUN3(VAR2->VAR12);
        FUN3(VAR2->VAR18);
        FUN3(VAR2->VAR19);
        VAR2->VAR11 = FUN4(VAR2->VAR17 * VAR3);
        VAR2->VAR12 = FUN4(VAR2->VAR17 * VAR3);
        VAR2->VAR18 = FUN4((VAR2->VAR14 + 1) * VAR3 + VAR20);
        VAR2->VAR19 = FUN4(VAR2->VAR14 * VAR3);
        if (!VAR2->VAR11 || !VAR2->VAR12 || !VAR2->VAR18 || !VAR2->VAR19)
            return FUN5(VAR10);
    }
    return 0;
}