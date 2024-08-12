void FUN1(VAR1 *VAR2, int VAR3, int VAR4, int VAR5, int VAR6, int VAR7)
{
    const int VAR8 = FUN2(VAR3 + VAR4 * VAR2->VAR9, 0, VAR2->VAR10 - 1);
    const int VAR11 = FUN2(VAR5 + VAR6 * VAR2->VAR9, 0, VAR2->VAR10);
    const int VAR12 = VAR2->VAR13[VAR8];
    const int VAR14 = VAR2->VAR13[VAR11];
    int VAR15 = -1;
    if (VAR2->VAR16->VAR17)
        return;
    if (VAR8 > VAR11 || VAR12 > VAR14)
    {
        FUN3(VAR2->VAR16, VAR18, "");
        return;
    }
    if (!VAR2->VAR16->VAR19)
        return;
    VAR15 &= ~VAR20;
    if (VAR7 & (VAR21 | VAR22))
    {
        VAR15 &= ~(VAR21 | VAR22);
        VAR2->VAR23 -= VAR11 - VAR8 + 1;
    }
    if (VAR7 & (VAR24 | VAR25))
    {
        VAR15 &= ~(VAR24 | VAR25);
        VAR2->VAR23 -= VAR11 - VAR8 + 1;
    }
    if (VAR7 & (VAR26 | VAR27))
    {
        VAR15 &= ~(VAR26 | VAR27);
        VAR2->VAR23 -= VAR11 - VAR8 + 1;
    }
    if (VAR7 & VAR28)
    {
        VAR2->VAR29 = 1;
        VAR2->VAR23 = VAR30;
    }
    if (VAR15 == ~0x7F)
    {
        memset(&VAR2->VAR31[VAR12], 0, (VAR14 - VAR12) * sizeof(VAR32));
    }
    else
    {
        int VAR33;
        for (VAR33 = VAR12; VAR33 < VAR14; VAR33++)
            VAR2->VAR31[VAR33] &= VAR15;
    }
    if (VAR11 == VAR2->VAR10)
        VAR2->VAR23 = VAR30;
    else
    {
        VAR2->VAR31[VAR14] &= VAR15;
        VAR2->VAR31[VAR14] |= VAR7;
    }
    VAR2->VAR31[VAR12] |= VAR20;
    if (VAR12 > 0 && !(VAR2->VAR16->VAR34 & VAR35) && VAR2->VAR16->VAR36 * VAR2->VAR9 < VAR8)
    {
        int VAR37 = VAR2->VAR31[VAR2->VAR13[VAR8 - 1]];
        VAR37 &= ~VAR20;
        if (VAR37 != (VAR27 | VAR25 | VAR22))
        {
            VAR2->VAR29 = 1;
            VAR2->VAR23 = VAR30;
        }
    }
}