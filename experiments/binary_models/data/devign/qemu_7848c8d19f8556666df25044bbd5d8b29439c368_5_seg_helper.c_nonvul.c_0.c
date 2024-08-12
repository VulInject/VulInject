void FUN1(VAR1 *VAR2)
{
    if (VAR2->VAR3 == 0)
    {
        FUN2(VAR2, VAR4, 0);
    }
    VAR2->VAR5 &= ~(VAR6 | VAR7 | VAR8);
    if (VAR2->VAR9 & VAR10)
    {
        FUN3(VAR2, VAR11, VAR2->VAR3 & 0xfffc, 0, 0xffffffff, VAR12 | VAR13 | VAR14 | VAR15 | VAR16 | VAR17 | VAR18 | VAR19);
    }
    else
    {
        FUN3(VAR2, VAR11, VAR2->VAR3 & 0xfffc, 0, 0xffffffff, VAR12 | VAR13 | VAR14 | VAR15 | VAR16 | VAR17 | VAR18);
    }
    FUN3(VAR2, VAR20, (VAR2->VAR3 + 8) & 0xfffc, 0, 0xffffffff, VAR12 | VAR13 | VAR14 | VAR15 | VAR21 | VAR18);
    VAR2->VAR22[VAR23] = VAR2->VAR24;
    VAR2->VAR25 = VAR2->VAR26;
}