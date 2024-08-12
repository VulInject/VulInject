static double FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR3 *VAR5)
{
    VAR6 *VAR7 = VAR2->VAR8;
    double VAR9 = 0;
    FUN2(VAR2, "");
    if (VAR4->VAR10 == VAR5->VAR10 && VAR4->VAR11 == VAR5->VAR11)
    {
        int64_t VAR12;
        double VAR13, VAR14;
        FUN2(VAR2, "");
        if (VAR7->VAR15 == 8)
            VAR12 = FUN3(VAR7, VAR4->VAR16[0], VAR4->VAR17[0], VAR5->VAR16[0], VAR5->VAR17[0], VAR4->VAR10);
        else
            VAR12 = FUN4(VAR7, (const VAR18 *)VAR4->VAR16[0], VAR4->VAR17[0] >> 1, (const VAR18 *)VAR5->VAR16[0], VAR5->VAR17[0] >> 1, VAR4->VAR10);
        VAR13 = (double)VAR12 * 100.0 / (VAR4->VAR10 * VAR4->VAR11) / (1 << VAR7->VAR15);
        VAR14 = FUN5(VAR13 - VAR7->VAR19);
        VAR9 = FUN6(FUN7(VAR13, VAR14), 0, 100.0);
        VAR7->VAR19 = VAR13;
    }
    FUN2(VAR2, "", VAR9);
    return VAR9;
}