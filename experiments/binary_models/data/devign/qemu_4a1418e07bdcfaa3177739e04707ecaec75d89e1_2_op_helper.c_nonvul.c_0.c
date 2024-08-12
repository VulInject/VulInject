void FUN1(int VAR1)
{
    int VAR2, VAR3;
    if (!(VAR4->VAR5 & VAR6))
    {
        FUN2(VAR7, 0);
    }
    VAR2 = VAR4->VAR8 & VAR9;
    if (!(VAR4->VAR10[0] & VAR11) || VAR2 != 0)
    {
        FUN2(VAR12, 0);
    }
    VAR3 = (VAR4->VAR13 >> 48) & 0xffff;
    if (VAR4->VAR8 & VAR14)
    {
        if (VAR1 == 2)
        {
            FUN3(VAR4, VAR15, (VAR3 + 16) | 3, 0, 0xffffffff, VAR16 | VAR17 | VAR18 | (3 << VAR19) | VAR20 | VAR21 | VAR22 | VAR23);
            VAR4->VAR24 = VAR25;
        }
        else
        {
            FUN3(VAR4, VAR15, VAR3 | 3, 0, 0xffffffff, VAR16 | VAR26 | VAR17 | VAR18 | (3 << VAR19) | VAR20 | VAR21 | VAR22);
            VAR4->VAR24 = (VAR27)VAR25;
        }
        FUN3(VAR4, VAR28, VAR3 + 8, 0, 0xffffffff, VAR16 | VAR26 | VAR17 | VAR18 | (3 << VAR19) | VAR29 | VAR22);
        FUN4((VAR27)(VAR4->VAR30[11]), VAR31 | VAR32 | VAR33 | VAR34 | VAR35 | VAR36 | VAR37 | VAR38);
        FUN5(VAR4, 3);
    }
    else
    {
        FUN3(VAR4, VAR15, VAR3 | 3, 0, 0xffffffff, VAR16 | VAR26 | VAR17 | VAR18 | (3 << VAR19) | VAR20 | VAR21 | VAR22);
        VAR4->VAR24 = (VAR27)VAR25;
        FUN3(VAR4, VAR28, VAR3 + 8, 0, 0xffffffff, VAR16 | VAR26 | VAR17 | VAR18 | (3 << VAR19) | VAR29 | VAR22);
        VAR4->VAR39 |= VAR34;
        FUN5(VAR4, 3);
    }
}