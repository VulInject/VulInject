static void FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, int VAR6, int VAR7, int VAR8, int VAR9, int VAR10)
{
    int VAR11 = 3 << (VAR7 - 1), VAR12, VAR13, VAR14, VAR15, VAR16;
    for (VAR12 = 0; VAR12 < VAR6; VAR12 += 4)
    {
        for (VAR13 = 0; VAR13 < VAR5; VAR13++)
        {
            int VAR17 = -1;
            if (VAR10)
                VAR17 &= ~(VAR18 | VAR19 | VAR20 | VAR21);
            if (VAR12 + 3 < VAR6 && !((VAR4->VAR22[(VAR12 + 1) * VAR4->VAR23 + VAR13 + 1] & (VAR24 | VAR25 | VAR26)) || (VAR4->VAR22[(VAR12 + 2) * VAR4->VAR23 + VAR13 + 1] & (VAR24 | VAR25 | VAR26)) || (VAR4->VAR22[(VAR12 + 3) * VAR4->VAR23 + VAR13 + 1] & (VAR24 | VAR25 | VAR26)) || (VAR4->VAR22[(VAR12 + 4) * VAR4->VAR23 + VAR13 + 1] & (VAR24 | VAR25 | VAR26) & VAR17)))
            {
                if (!FUN2(&VAR4->VAR27, VAR4->VAR27.VAR28 + VAR29))
                    continue;
                VAR15 = FUN2(&VAR4->VAR27, VAR4->VAR27.VAR28 + VAR30);
                VAR15 = (VAR15 << 1) | FUN2(&VAR4->VAR27, VAR4->VAR27.VAR28 + VAR30);
                VAR16 = 1;
            }
            else
            {
                VAR15 = 0;
                VAR16 = 0;
            }
            for (VAR14 = VAR12 + VAR15; VAR14 < VAR12 + 4 && VAR14 < VAR6; VAR14++)
            {
                int VAR17 = -1;
                if (VAR10 && VAR14 == VAR12 + 3)
                    VAR17 &= ~(VAR18 | VAR19 | VAR20 | VAR21);
                if (!VAR16)
                {
                    if (!(VAR4->VAR22[(VAR14 + 1) * VAR4->VAR23 + VAR13 + 1] & (VAR26 | VAR25)))
                    {
                        VAR16 = FUN2(&VAR4->VAR27, VAR4->VAR27.VAR28 + FUN3(VAR4->VAR22[(VAR14 + 1) * VAR4->VAR23 + VAR13 + 1] & VAR17, VAR8));
                    }
                }
                if (VAR16)
                {
                    int VAR31;
                    int VAR32 = FUN4(VAR4->VAR22[(VAR14 + 1) * VAR4->VAR23 + VAR13 + 1] & VAR17, &VAR31);
                    VAR4->VAR33[(VAR14)*VAR4->VAR23 + VAR13] = (FUN2(&VAR4->VAR27, VAR4->VAR27.VAR28 + VAR32) ^ VAR31) ? -VAR11 : VAR11;
                    FUN5(VAR4, VAR13, VAR14, VAR4->VAR33[(VAR14)*VAR4->VAR23 + VAR13] < 0);
                }
                VAR16 = 0;
                VAR4->VAR22[(VAR14 + 1) * VAR4->VAR23 + VAR13 + 1] &= ~VAR25;
            }
        }
    }
    if (VAR9)
    {
        int VAR34;
        VAR34 = FUN2(&VAR4->VAR27, VAR4->VAR27.VAR28 + VAR30);
        VAR34 = (VAR34 << 1) + FUN2(&VAR4->VAR27, VAR4->VAR27.VAR28 + VAR30);
        VAR34 = (VAR34 << 1) + FUN2(&VAR4->VAR27, VAR4->VAR27.VAR28 + VAR30);
        VAR34 = (VAR34 << 1) + FUN2(&VAR4->VAR27, VAR4->VAR27.VAR28 + VAR30);
        if (VAR34 != 0xa)
            FUN6(VAR2->VAR35, VAR36, "");
    }
}