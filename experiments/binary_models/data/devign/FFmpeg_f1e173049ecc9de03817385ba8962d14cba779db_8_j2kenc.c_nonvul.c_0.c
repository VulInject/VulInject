static void FUN1(VAR1 *VAR2, int VAR3, int VAR4, int VAR5, int *VAR6, int VAR7)
{
    int VAR8, VAR9, VAR10, VAR11 = 1 << (VAR7 + VAR12);
    for (VAR8 = 0; VAR8 < VAR4; VAR8 += 4)
        for (VAR9 = 0; VAR9 < VAR3; VAR9++)
            for (VAR10 = VAR8; VAR10 < VAR4 && VAR10 < VAR8 + 4; VAR10++)
            {
                if (!(VAR2->VAR13[(VAR10 + 1) * VAR2->VAR14 + VAR9 + 1] & VAR15) && (VAR2->VAR13[(VAR10 + 1) * VAR2->VAR14 + VAR9 + 1] & VAR16))
                {
                    int VAR17 = FUN2(VAR2->VAR13[(VAR10 + 1) * VAR2->VAR14 + VAR9 + 1], VAR5), VAR18 = VAR2->VAR19[(VAR10)*VAR2->VAR14 + VAR9] & VAR11 ? 1 : 0;
                    FUN3(&VAR2->VAR20, VAR2->VAR20.VAR21 + VAR17, VAR18);
                    if (VAR18)
                    {
                        int VAR22;
                        int VAR17 = FUN4(VAR2->VAR13[(VAR10 + 1) * VAR2->VAR14 + VAR9 + 1], &VAR22);
                        FUN3(&VAR2->VAR20, VAR2->VAR20.VAR21 + VAR17, (VAR2->VAR13[(VAR10 + 1) * VAR2->VAR14 + VAR9 + 1] >> 15) ^ VAR22);
                        *VAR6 += FUN5(VAR2->VAR19[(VAR10)*VAR2->VAR14 + VAR9], VAR7 + VAR12);
                        FUN6(VAR2, VAR9, VAR10, VAR2->VAR13[(VAR10 + 1) * VAR2->VAR14 + VAR9 + 1] >> 15);
                    }
                    VAR2->VAR13[(VAR10 + 1) * VAR2->VAR14 + VAR9 + 1] |= VAR23;
                }
            }
}