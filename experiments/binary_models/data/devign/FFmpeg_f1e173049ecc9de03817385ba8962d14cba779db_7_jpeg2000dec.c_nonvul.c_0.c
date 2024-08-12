static void FUN1(VAR1 *VAR2, int VAR3, int VAR4, int VAR5, int VAR6, int VAR7)
{
    int VAR8 = 3 << (VAR5 - 1), VAR9, VAR10, VAR11;
    for (VAR9 = 0; VAR9 < VAR4; VAR9 += 4)
        for (VAR10 = 0; VAR10 < VAR3; VAR10++)
            for (VAR11 = VAR9; VAR11 < VAR4 && VAR11 < VAR9 + 4; VAR11++)
            {
                int VAR12 = -1;
                if (VAR7 && VAR11 == VAR9 + 3)
                    VAR12 &= ~(VAR13 | VAR14 | VAR15 | VAR16);
                if ((VAR2->VAR17[(VAR11 + 1) * VAR2->VAR18 + VAR10 + 1] & VAR19 & VAR12) && !(VAR2->VAR17[(VAR11 + 1) * VAR2->VAR18 + VAR10 + 1] & (VAR20 | VAR21)))
                {
                    if (FUN2(&VAR2->VAR22, VAR2->VAR22.VAR23 + FUN3(VAR2->VAR17[(VAR11 + 1) * VAR2->VAR18 + VAR10 + 1] & VAR12, VAR6)))
                    {
                        int VAR24, VAR25 = FUN4(VAR2->VAR17[(VAR11 + 1) * VAR2->VAR18 + VAR10 + 1] & VAR12, &VAR24);
                        if (VAR2->VAR22.VAR26)
                            VAR2->VAR27[(VAR11)*VAR2->VAR18 + VAR10] = FUN2(&VAR2->VAR22, VAR2->VAR22.VAR23 + VAR25) ? -VAR8 : VAR8;
                        else
                            VAR2->VAR27[(VAR11)*VAR2->VAR18 + VAR10] = (FUN2(&VAR2->VAR22, VAR2->VAR22.VAR23 + VAR25) ^ VAR24) ? -VAR8 : VAR8;
                        FUN5(VAR2, VAR10, VAR11, VAR2->VAR27[(VAR11)*VAR2->VAR18 + VAR10] < 0);
                    }
                    VAR2->VAR17[(VAR11 + 1) * VAR2->VAR18 + VAR10 + 1] |= VAR21;
                }
            }
}