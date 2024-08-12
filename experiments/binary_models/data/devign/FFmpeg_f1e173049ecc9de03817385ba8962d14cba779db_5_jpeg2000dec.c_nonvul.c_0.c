static void FUN1(VAR1 *VAR2, int VAR3, int VAR4, int VAR5, int VAR6)
{
    int VAR7, VAR8;
    int VAR9, VAR10, VAR11;
    VAR7 = 1 << (VAR5 - 1);
    VAR8 = -VAR7;
    for (VAR9 = 0; VAR9 < VAR4; VAR9 += 4)
        for (VAR10 = 0; VAR10 < VAR3; VAR10++)
            for (VAR11 = VAR9; VAR11 < VAR4 && VAR11 < VAR9 + 4; VAR11++)
                if ((VAR2->VAR12[(VAR11 + 1) * VAR2->VAR13 + VAR10 + 1] & (VAR14 | VAR15)) == VAR14)
                {
                    int VAR16 = (VAR6 && VAR11 == VAR9 + 3) ? ~(VAR17 | VAR18 | VAR19 | VAR20) : -1;
                    int VAR21 = FUN2(VAR2->VAR12[(VAR11 + 1) * VAR2->VAR13 + VAR10 + 1] & VAR16);
                    int VAR22 = FUN3(&VAR2->VAR23, VAR2->VAR23.VAR24 + VAR21) ? VAR7 : VAR8;
                    VAR2->VAR25[(VAR11)*VAR2->VAR13 + VAR10] += VAR2->VAR25[(VAR11)*VAR2->VAR13 + VAR10] < 0 ? -VAR22 : VAR22;
                    VAR2->VAR12[(VAR11 + 1) * VAR2->VAR13 + VAR10 + 1] |= VAR26;
                }
}