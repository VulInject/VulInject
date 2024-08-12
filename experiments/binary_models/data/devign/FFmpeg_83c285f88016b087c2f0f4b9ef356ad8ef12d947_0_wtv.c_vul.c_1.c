static VAR1 *FUN1(VAR2 *VAR3, const VAR4 *VAR5, int VAR6, const VAR4 *VAR7, int VAR8)
{
    const VAR4 *VAR9 = VAR5 + VAR6;
    while (VAR5 + 48 <= VAR9)
    {
        int VAR10, VAR11, VAR12, VAR13;
        uint64_t VAR14;
        const VAR4 *VAR15;
        if (FUN2(VAR5, VAR16))
        {
            FUN3(VAR3, VAR17, "" VAR18 ""
                                    "",
                   FUN4(VAR5));
            break;
        }
        VAR10 = FUN5(VAR5 + 16);
        VAR14 = FUN6(VAR5 + 24);
        VAR11 = 2 * FUN7(VAR5 + 32);
        if (VAR5 + 48 + VAR11 > VAR9)
        {
            FUN3(VAR3, VAR17, "");
            break;
        }
        VAR12 = FUN7(VAR5 + 40 + VAR11);
        VAR13 = FUN7(VAR5 + 44 + VAR11);
        VAR15 = VAR5 + 40;
        if (VAR11 >= VAR8 && !memcmp(VAR15, VAR7, VAR8) && (VAR11 < VAR8 + 2 || !FUN8(VAR15 + VAR8)))
            return FUN9(VAR12, VAR14, VAR13, VAR3);
        VAR5 += VAR10;
    }
    return 0;
}