void FUN1(VAR1 *VAR2, int VAR3)
{
    int VAR4;
    VAR4 = VAR2->VAR5 & VAR6;
    if (VAR2->VAR7 == 0 || VAR4 != 0)
    {
        FUN2(VAR2, VAR8, 0);
    }
    if (VAR3 == 2)
    {
        FUN3(VAR2, VAR9, ((VAR2->VAR7 + 32) & 0xfffc) | 3, 0, 0xffffffff, VAR10 | VAR11 | VAR12 | VAR13 | (3 << VAR14) | VAR15 | VAR16 | VAR17 | VAR18);
        FUN3(VAR2, VAR19, ((VAR2->VAR7 + 40) & 0xfffc) | 3, 0, 0xffffffff, VAR10 | VAR11 | VAR12 | VAR13 | (3 << VAR14) | VAR20 | VAR17);
    }
    else
    {
        FUN3(VAR2, VAR9, ((VAR2->VAR7 + 16) & 0xfffc) | 3, 0, 0xffffffff, VAR10 | VAR11 | VAR12 | VAR13 | (3 << VAR14) | VAR15 | VAR16 | VAR17);
        FUN3(VAR2, VAR19, ((VAR2->VAR7 + 24) & 0xfffc) | 3, 0, 0xffffffff, VAR10 | VAR11 | VAR12 | VAR13 | (3 << VAR14) | VAR20 | VAR17);
    }
    VAR2->VAR21[VAR22] = VAR2->VAR21[VAR23];
    VAR2->VAR24 = VAR2->VAR21[VAR25];
}