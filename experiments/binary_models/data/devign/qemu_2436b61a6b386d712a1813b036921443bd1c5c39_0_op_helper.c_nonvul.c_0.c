void FUN1(void)
{
    if (VAR1->VAR2 == 0)
    {
        FUN2(VAR3, 0);
    }
    VAR1->VAR4 &= ~(VAR5 | VAR6 | VAR7);
    FUN3(VAR1, 0);
    if (VAR1->VAR8 & VAR9)
    {
        FUN4(VAR1, VAR10, VAR1->VAR2 & 0xfffc, 0, 0xffffffff, VAR11 | VAR12 | VAR13 | VAR14 | VAR15 | VAR16 | VAR17 | VAR18);
    }
    else
    {
        FUN4(VAR1, VAR10, VAR1->VAR2 & 0xfffc, 0, 0xffffffff, VAR11 | VAR12 | VAR13 | VAR14 | VAR15 | VAR16 | VAR17);
    }
    FUN4(VAR1, VAR19, (VAR1->VAR2 + 8) & 0xfffc, 0, 0xffffffff, VAR11 | VAR12 | VAR13 | VAR14 | VAR20 | VAR17);
    VAR21 = VAR1->VAR22;
    VAR23 = VAR1->VAR24;
}