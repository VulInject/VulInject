static int FUN1(VAR1 *VAR2, VAR3 *VAR4, MOVAtom VAR5)
{
    uint32_t VAR6;
    uint32_t VAR7;
    if (VAR5.VAR8 < 8)
        return 0;
    FUN2(VAR4, 4);
    VAR6 = FUN3(VAR4);
    if (VAR6 > VAR9 / sizeof(*VAR2->VAR10))
    {
        FUN4(VAR2->VAR11, VAR12, "", VAR6);
        return VAR13;
    }
    VAR2->VAR14 = VAR6 + 1;
    VAR2->VAR10 = FUN5(VAR2->VAR14 * sizeof(*VAR2->VAR10));
    if (!VAR2->VAR10)
        return FUN6(VAR15);
    for (VAR7 = 1; VAR7 <= VAR6; ++VAR7)
    {
        uint32_t VAR16 = FUN3(VAR4);
        uint32_t VAR17 = FUN7(VAR4);
        if (VAR16 < 8)
        {
            FUN4(VAR2->VAR11, VAR12, "", VAR7, VAR16);
            return VAR13;
        }
        VAR16 -= 8;
        if (VAR17 != FUN8('', '', '', ''))
        {
            FUN2(VAR4, VAR16);
        }
        VAR2->VAR10[VAR7] = FUN5(VAR16 + 1);
        if (!VAR2->VAR10[VAR7])
            return FUN6(VAR15);
        FUN9(VAR4, VAR2->VAR10[VAR7], VAR16);
    }
    return 0;
}