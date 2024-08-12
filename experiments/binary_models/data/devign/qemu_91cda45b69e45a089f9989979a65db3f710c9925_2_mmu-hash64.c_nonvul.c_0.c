static int FUN1(struct VAR1 *VAR2, target_ulong VAR3, target_ulong VAR4, int VAR5, int VAR6)
{
    target_ulong VAR7;
    int VAR8, VAR9, VAR10;
    VAR9 = -1;
    if ((VAR3 & VAR11) && (VAR5 == !!(VAR3 & VAR12)))
    {
        VAR7 = VAR13;
        VAR10 = (VAR4 & VAR14) | ((VAR4 & VAR15) >> 61);
        VAR2->VAR16 = (VAR4 & VAR17) || (VAR4 & VAR18);
        if (FUN2(VAR3, VAR2->VAR19))
        {
            if (VAR2->VAR20 != (VAR21)-1ULL)
            {
                if ((VAR2->VAR20 & VAR7) != (VAR4 & VAR7))
                {
                    FUN3("");
                    return -3;
                }
            }
            VAR8 = FUN4(VAR2->VAR22, VAR10, VAR2->VAR16);
            VAR2->VAR20 = VAR4;
            VAR2->VAR23 = VAR8;
            VAR9 = FUN5(VAR2->VAR23, VAR6);
            if (VAR9 == 0)
            {
                FUN6("");
            }
            else
            {
                FUN6("");
            }
        }
    }
    return VAR9;
}