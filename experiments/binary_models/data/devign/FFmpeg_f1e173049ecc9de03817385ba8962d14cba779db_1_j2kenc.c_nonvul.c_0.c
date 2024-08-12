static void FUN1(VAR1 *VAR2, int VAR3, int VAR4, int *VAR5, int VAR6)
{
    int VAR7, VAR8, VAR9, VAR10 = 1 << (VAR6 + VAR11);
    for (VAR7 = 0; VAR7 < VAR4; VAR7 += 4)
        for (VAR8 = 0; VAR8 < VAR3; VAR8++)
            for (VAR9 = VAR7; VAR9 < VAR4 && VAR9 < VAR7 + 4; VAR9++)
                if ((VAR2->VAR12[(VAR9 + 1) * VAR2->VAR13 + VAR8 + 1] & (VAR14 | VAR15)) == VAR14)
                {
                    int VAR16 = FUN2(VAR2->VAR12[(VAR9 + 1) * VAR2->VAR13 + VAR8 + 1]);
                    *VAR5 += FUN3(VAR2->VAR17[(VAR9)*VAR2->VAR13 + VAR8], VAR6 + VAR11);
                    FUN4(&VAR2->VAR18, VAR2->VAR18.VAR19 + VAR16, VAR2->VAR17[(VAR9)*VAR2->VAR13 + VAR8] & VAR10 ? 1 : 0);
                    VAR2->VAR12[(VAR9 + 1) * VAR2->VAR13 + VAR8 + 1] |= VAR20;
                }
}