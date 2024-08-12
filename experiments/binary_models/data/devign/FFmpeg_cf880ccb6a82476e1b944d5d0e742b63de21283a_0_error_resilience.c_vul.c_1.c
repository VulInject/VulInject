void FUN1(VAR1 *VAR2, int VAR3, int VAR4, int VAR5, int VAR6, int VAR7)
{
    const int VAR8 = FUN2(VAR3 + VAR4 * VAR2->VAR9, 0, VAR2->VAR10 - 1);
    const int VAR11 = FUN2(VAR5 + VAR6 * VAR2->VAR9, 0, VAR2->VAR10);
    const int VAR12 = VAR2->VAR13[VAR8];
    const int VAR14 = VAR2->VAR13[VAR11];
    int VAR15 = -1;
    if (VAR2->VAR16->VAR17 && VAR2->VAR16->VAR17->VAR18)
        return;
    if (VAR8 > VAR11 || VAR12 > VAR14)
    {
        FUN3(VAR2->VAR16, VAR19, "");
        return;
    }
    if (!VAR2->VAR16->VAR20)
        return;
    VAR15 &= ~VAR21;
    if (VAR7 & (VAR22 | VAR23))
    {
        VAR15 &= ~(VAR22 | VAR23);
        VAR2->VAR24 -= VAR11 - VAR8 + 1;
    }
    if (VAR7 & (VAR25 | VAR26))
    {
        VAR15 &= ~(VAR25 | VAR26);
        VAR2->VAR24 -= VAR11 - VAR8 + 1;
    }
    if (VAR7 & (VAR27 | VAR28))
    {
        VAR15 &= ~(VAR27 | VAR28);
        VAR2->VAR24 -= VAR11 - VAR8 + 1;
    }
    if (VAR7 & VAR29)
    {
        VAR2->VAR30 = 1;
        VAR2->VAR24 = VAR31;
    }
    if (VAR15 == ~0x7F)
    {
        memset(&VAR2->VAR32[VAR12], 0, (VAR14 - VAR12) * sizeof(VAR33));
    }
    else
    {
        int VAR34;
        for (VAR34 = VAR12; VAR34 < VAR14; VAR34++)
            VAR2->VAR32[VAR34] &= VAR15;
    }
    if (VAR11 == VAR2->VAR10)
        VAR2->VAR24 = VAR31;
    else
    {
        VAR2->VAR32[VAR14] &= VAR15;
        VAR2->VAR32[VAR14] |= VAR7;
    }
    VAR2->VAR32[VAR12] |= VAR21;
    if (VAR12 > 0 && !(VAR2->VAR16->VAR35 & VAR36) && FUN4(VAR2) && VAR2->VAR16->VAR37 * VAR2->VAR9 < VAR8)
    {
        int VAR38 = VAR2->VAR32[VAR2->VAR13[VAR8 - 1]];
        VAR38 &= ~VAR21;
        if (VAR38 != (VAR28 | VAR26 | VAR23))
        {
            VAR2->VAR30 = 1;
            VAR2->VAR24 = VAR31;
        }
    }
}