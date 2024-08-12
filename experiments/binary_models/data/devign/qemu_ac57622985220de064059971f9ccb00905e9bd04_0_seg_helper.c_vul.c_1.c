void FUN1(VAR1 *VAR2, int VAR3)
{
    int VAR4, VAR5;
    if (!(VAR2->VAR6 & VAR7))
    {
        FUN2(VAR2, VAR8, 0);
    }
    VAR4 = VAR2->VAR9 & VAR10;
    if (!(VAR2->VAR11[0] & VAR12) || VAR4 != 0)
    {
        FUN2(VAR2, VAR13, 0);
    }
    VAR5 = (VAR2->VAR14 >> 48) & 0xffff;
    if (VAR2->VAR9 & VAR15)
    {
        FUN3(VAR2, (VAR16)(VAR2->VAR17[11]), VAR18 | VAR19 | VAR20 | VAR21 | VAR22 | VAR23 | VAR24 | VAR25);
        if (VAR3 == 2)
        {
            FUN4(VAR2, VAR26, (VAR5 + 16) | 3, 0, 0xffffffff, VAR27 | VAR28 | VAR29 | (3 << VAR30) | VAR31 | VAR32 | VAR33 | VAR34);
            VAR2->VAR35 = VAR2->VAR17[VAR36];
        }
        else
        {
            FUN4(VAR2, VAR26, VAR5 | 3, 0, 0xffffffff, VAR27 | VAR37 | VAR28 | VAR29 | (3 << VAR30) | VAR31 | VAR32 | VAR33);
            VAR2->VAR35 = (VAR16)VAR2->VAR17[VAR36];
        }
        FUN4(VAR2, VAR38, VAR5 + 8, 0, 0xffffffff, VAR27 | VAR37 | VAR28 | VAR29 | (3 << VAR30) | VAR39 | VAR33);
    }
    else
    {
        VAR2->VAR40 |= VAR21;
        FUN4(VAR2, VAR26, VAR5 | 3, 0, 0xffffffff, VAR27 | VAR37 | VAR28 | VAR29 | (3 << VAR30) | VAR31 | VAR32 | VAR33);
        VAR2->VAR35 = (VAR16)VAR2->VAR17[VAR36];
        FUN4(VAR2, VAR38, VAR5 + 8, 0, 0xffffffff, VAR27 | VAR37 | VAR28 | VAR29 | (3 << VAR30) | VAR39 | VAR33);
    }
}