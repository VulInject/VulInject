static int FUN1(VAR1 *VAR2, int VAR3, int VAR4)
{
    if (VAR3 != VAR2->VAR5->VAR3 || VAR4 != VAR2->VAR5->VAR4)
    {
        if (FUN2(VAR3, VAR4, 0, VAR2->VAR5))
            return VAR6;
        FUN3(VAR2->VAR5, 1, 0, 1);
        FUN4(VAR2->VAR5, VAR3, VAR4);
    }
    VAR2->VAR7 = (VAR2->VAR5->VAR8 + 15) / 16;
    VAR2->VAR9 = (VAR2->VAR5->VAR10 + 15) / 16;
    VAR2->VAR11 = FUN5((VAR2->VAR7 + VAR2->VAR9 * 2 + 1) * sizeof(*VAR2->VAR12));
    VAR2->VAR13 = FUN5(VAR2->VAR7 * sizeof(*VAR2->VAR13));
    VAR2->VAR14 = FUN5(VAR2->VAR7 * 4);
    VAR2->VAR15 = FUN5(VAR2->VAR7 * sizeof(*VAR2->VAR15));
    VAR2->VAR16 = FUN5((VAR2->VAR7 + 1) * sizeof(*VAR2->VAR16));
    if (!VAR2->VAR11 || !VAR2->VAR13 || !VAR2->VAR14 || !VAR2->VAR15 || !VAR2->VAR16)
        return FUN6(VAR17);
    VAR2->VAR12 = VAR2->VAR11 + 1;
    return 0;
}