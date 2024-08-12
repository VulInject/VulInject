void FUN1(VAR1 *VAR2, target_ulong VAR3)
{
    target_ulong VAR4, VAR5, VAR6;
    VAR6 = (VAR7 << 1) | VAR2->VAR8;
    if (((VAR2->VAR9 >> VAR10) & 0x3) >= 2)
    {
        VAR6 |= 1 << VAR11;
    }
    if (VAR2->VAR12 & VAR13)
    {
        int VAR14 = FUN2(VAR3, 62, 2);
        int VAR15 = FUN3(VAR2->VAR16, 13, 2);
        bool VAR17 = (VAR2->VAR18 & 0x8) == 0;
        if ((VAR14 == 2) || (VAR14 == 1 && (VAR17 || VAR15 == 1)))
        {
            VAR6 &= ~(0x3ull << 62);
        }
    }
    VAR6 &= VAR2->VAR19;
    VAR4 = VAR2->VAR20;
    VAR5 = (VAR3 & VAR6) | (VAR4 & ~VAR6);
    VAR2->VAR20 = VAR5;
    if (VAR2->VAR21 & (1 << VAR22))
    {
        FUN4(VAR2, VAR2->VAR23);
    }
    if ((VAR4 & VAR2->VAR8) != (VAR5 & VAR2->VAR8))
    {
        FUN5(FUN6(FUN7(VAR2)));
    }
}