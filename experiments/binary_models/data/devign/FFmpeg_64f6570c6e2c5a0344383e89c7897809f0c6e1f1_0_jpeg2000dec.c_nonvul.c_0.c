static void FUN1(VAR1 *VAR2, int VAR3, int VAR4, int VAR5, int VAR6, int VAR7, int VAR8)
{
    int VAR9 = 3 << (VAR5 - 1), VAR10, VAR11, VAR12;
    for (VAR10 = 0; VAR10 < VAR4; VAR10 += 4)
        for (VAR11 = 0; VAR11 < VAR3; VAR11++)
            for (VAR12 = VAR10; VAR12 < VAR4 && VAR12 < VAR10 + 4; VAR12++)
            {
                if ((VAR2->VAR13[VAR12 + 1][VAR11 + 1] & VAR14) && !(VAR2->VAR13[VAR12 + 1][VAR11 + 1] & (VAR15 | VAR16)))
                {
                    int VAR17 = -1;
                    if (VAR8 && VAR12 == VAR10 + 3)
                        VAR17 &= ~(VAR18 | VAR19 | VAR20);
                    if (FUN2(&VAR2->VAR21, VAR2->VAR21.VAR22 + FUN3(VAR2->VAR13[VAR12 + 1][VAR11 + 1] & VAR17, VAR6)))
                    {
                        int VAR23, VAR24 = FUN4(VAR2->VAR13[VAR12 + 1][VAR11 + 1], &VAR23);
                        if (VAR7)
                            VAR2->VAR25[VAR12][VAR11] = FUN2(&VAR2->VAR21, VAR2->VAR21.VAR22 + VAR24) ? -VAR9 : VAR9;
                        else
                            VAR2->VAR25[VAR12][VAR11] = (FUN2(&VAR2->VAR21, VAR2->VAR21.VAR22 + VAR24) ^ VAR23) ? -VAR9 : VAR9;
                        FUN5(VAR2, VAR11, VAR12, VAR2->VAR25[VAR12][VAR11] < 0);
                    }
                    VAR2->VAR13[VAR12 + 1][VAR11 + 1] |= VAR16;
                }
            }
}