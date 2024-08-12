static void FUN1(VAR1 *VAR2, int VAR3, int VAR4, int VAR5, int *VAR6, int VAR7)
{
    int VAR8, VAR9, VAR10, VAR11 = 1 << (VAR7 + VAR12);
    for (VAR8 = 0; VAR8 < VAR4; VAR8 += 4)
        for (VAR9 = 0; VAR9 < VAR3; VAR9++)
        {
            if (VAR8 + 3 < VAR4 && !((VAR2->VAR13[(VAR8 + 1) * VAR2->VAR14 + VAR9 + 1] & (VAR15 | VAR16 | VAR17)) || (VAR2->VAR13[(VAR8 + 2) * VAR2->VAR14 + VAR9 + 1] & (VAR15 | VAR16 | VAR17)) || (VAR2->VAR13[(VAR8 + 3) * VAR2->VAR14 + VAR9 + 1] & (VAR15 | VAR16 | VAR17)) || (VAR2->VAR13[(VAR8 + 4) * VAR2->VAR14 + VAR9 + 1] & (VAR15 | VAR16 | VAR17))))
            {
                int VAR18;
                for (VAR18 = 0; VAR18 < 4; VAR18++)
                    if (VAR2->VAR19[(VAR8 + VAR18) * VAR2->VAR14 + VAR9] & VAR11)
                        break;
                FUN2(&VAR2->VAR20, VAR2->VAR20.VAR21 + VAR22, VAR18 != 4);
                if (VAR18 == 4)
                    continue;
                FUN2(&VAR2->VAR20, VAR2->VAR20.VAR21 + VAR23, VAR18 >> 1);
                FUN2(&VAR2->VAR20, VAR2->VAR20.VAR21 + VAR23, VAR18 & 1);
                for (VAR10 = VAR8 + VAR18; VAR10 < VAR8 + 4; VAR10++)
                {
                    if (!(VAR2->VAR13[(VAR10 + 1) * VAR2->VAR14 + VAR9 + 1] & (VAR17 | VAR16)))
                    {
                        int VAR24 = FUN3(VAR2->VAR13[(VAR10 + 1) * VAR2->VAR14 + VAR9 + 1], VAR5);
                        if (VAR10 > VAR8 + VAR18)
                            FUN2(&VAR2->VAR20, VAR2->VAR20.VAR21 + VAR24, VAR2->VAR19[(VAR10)*VAR2->VAR14 + VAR9] & VAR11 ? 1 : 0);
                        if (VAR2->VAR19[(VAR10)*VAR2->VAR14 + VAR9] & VAR11)
                        {
                            int VAR25;
                            int VAR24 = FUN4(VAR2->VAR13[(VAR10 + 1) * VAR2->VAR14 + VAR9 + 1], &VAR25);
                            *VAR6 += FUN5(VAR2->VAR19[(VAR10)*VAR2->VAR14 + VAR9], VAR7 + VAR12);
                            FUN2(&VAR2->VAR20, VAR2->VAR20.VAR21 + VAR24, (VAR2->VAR13[(VAR10 + 1) * VAR2->VAR14 + VAR9 + 1] >> 15) ^ VAR25);
                            FUN6(VAR2, VAR9, VAR10, VAR2->VAR13[(VAR10 + 1) * VAR2->VAR14 + VAR9 + 1] >> 15);
                        }
                    }
                    VAR2->VAR13[(VAR10 + 1) * VAR2->VAR14 + VAR9 + 1] &= ~VAR16;
                }
            }
            else
            {
                for (VAR10 = VAR8; VAR10 < VAR8 + 4 && VAR10 < VAR4; VAR10++)
                {
                    if (!(VAR2->VAR13[(VAR10 + 1) * VAR2->VAR14 + VAR9 + 1] & (VAR17 | VAR16)))
                    {
                        int VAR24 = FUN3(VAR2->VAR13[(VAR10 + 1) * VAR2->VAR14 + VAR9 + 1], VAR5);
                        FUN2(&VAR2->VAR20, VAR2->VAR20.VAR21 + VAR24, VAR2->VAR19[(VAR10)*VAR2->VAR14 + VAR9] & VAR11 ? 1 : 0);
                        if (VAR2->VAR19[(VAR10)*VAR2->VAR14 + VAR9] & VAR11)
                        {
                            int VAR25;
                            int VAR24 = FUN4(VAR2->VAR13[(VAR10 + 1) * VAR2->VAR14 + VAR9 + 1], &VAR25);
                            *VAR6 += FUN5(VAR2->VAR19[(VAR10)*VAR2->VAR14 + VAR9], VAR7 + VAR12);
                            FUN2(&VAR2->VAR20, VAR2->VAR20.VAR21 + VAR24, (VAR2->VAR13[(VAR10 + 1) * VAR2->VAR14 + VAR9 + 1] >> 15) ^ VAR25);
                            FUN6(VAR2, VAR9, VAR10, VAR2->VAR13[(VAR10 + 1) * VAR2->VAR14 + VAR9 + 1] >> 15);
                        }
                    }
                    VAR2->VAR13[(VAR10 + 1) * VAR2->VAR14 + VAR9 + 1] &= ~VAR16;
                }
            }
        }
}