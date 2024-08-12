static void FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, int VAR6, int VAR7, int VAR8, int VAR9, int VAR10)
{
    int VAR11 = 3 << (VAR7 - 1), VAR12, VAR13, VAR14, VAR15, VAR16;
    for (VAR12 = 0; VAR12 < VAR6; VAR12 += 4)
    {
        for (VAR13 = 0; VAR13 < VAR5; VAR13++)
        {
            if (VAR12 + 3 < VAR6 && !((VAR4->VAR17[VAR12 + 1][VAR13 + 1] & (VAR18 | VAR19 | VAR20)) || (VAR4->VAR17[VAR12 + 2][VAR13 + 1] & (VAR18 | VAR19 | VAR20)) || (VAR4->VAR17[VAR12 + 3][VAR13 + 1] & (VAR18 | VAR19 | VAR20)) || (VAR4->VAR17[VAR12 + 4][VAR13 + 1] & (VAR18 | VAR19 | VAR20))))
            {
                if (!FUN2(&VAR4->VAR21, VAR4->VAR21.VAR22 + VAR23))
                    continue;
                VAR15 = FUN2(&VAR4->VAR21, VAR4->VAR21.VAR22 + VAR24);
                VAR15 = (VAR15 << 1) | FUN2(&VAR4->VAR21, VAR4->VAR21.VAR22 + VAR24);
                VAR16 = 1;
            }
            else
            {
                VAR15 = 0;
                VAR16 = 0;
            }
            for (VAR14 = VAR12 + VAR15; VAR14 < VAR12 + 4 && VAR14 < VAR6; VAR14++)
            {
                if (!VAR16)
                {
                    if (!(VAR4->VAR17[VAR14 + 1][VAR13 + 1] & (VAR20 | VAR19)))
                    {
                        int VAR25 = -1;
                        if (VAR10 && VAR14 == VAR12 + 3)
                            VAR25 &= ~(VAR26 | VAR27 | VAR28);
                        VAR16 = FUN2(&VAR4->VAR21, VAR4->VAR21.VAR22 + FUN3(VAR4->VAR17[VAR14 + 1][VAR13 + 1] & VAR25, VAR8));
                    }
                }
                if (VAR16)
                {
                    int VAR29;
                    int VAR30 = FUN4(VAR4->VAR17[VAR14 + 1][VAR13 + 1], &VAR29);
                    VAR4->VAR31[VAR14][VAR13] = (FUN2(&VAR4->VAR21, VAR4->VAR21.VAR22 + VAR30) ^ VAR29) ? -VAR11 : VAR11;
                    FUN5(VAR4, VAR13, VAR14, VAR4->VAR31[VAR14][VAR13] < 0);
                }
                VAR16 = 0;
                VAR4->VAR17[VAR14 + 1][VAR13 + 1] &= ~VAR19;
            }
        }
    }
    if (VAR9)
    {
        int VAR32;
        VAR32 = FUN2(&VAR4->VAR21, VAR4->VAR21.VAR22 + VAR24);
        VAR32 = (VAR32 << 1) + FUN2(&VAR4->VAR21, VAR4->VAR21.VAR22 + VAR24);
        VAR32 = (VAR32 << 1) + FUN2(&VAR4->VAR21, VAR4->VAR21.VAR22 + VAR24);
        VAR32 = (VAR32 << 1) + FUN2(&VAR4->VAR21, VAR4->VAR21.VAR22 + VAR24);
        if (VAR32 != 0xa)
            FUN6(VAR2->VAR33, VAR34, "");
    }
}