static int FUN1(VAR1 *VAR2, target_ulong VAR3, target_ulong VAR4, int VAR5, int VAR6, int VAR7)
{
    target_ulong VAR8, VAR9;
    int VAR10, VAR11, VAR12, VAR13, VAR14;
    VAR11 = -1;
    VAR13 = FUN2(VAR3);
    VAR12 = (VAR3 >> 6) & 1;
    if (VAR13 && VAR5 == VAR12)
    {
        VAR8 = VAR3 & VAR15;
        VAR9 = VAR16;
        VAR14 = VAR4 & 0x00000003;
        if (VAR8 == VAR2->VAR8)
        {
            if (VAR2->VAR17 != (VAR18)-1ULL)
            {
                if ((VAR2->VAR17 & VAR9) != (VAR4 & VAR9))
                {
                    FUN3("");
                    return -3;
                }
            }
            VAR10 = FUN4(VAR2->VAR19, VAR14, VAR2->VAR20);
            VAR2->VAR17 = VAR4;
            VAR2->VAR21 = VAR10;
            VAR11 = FUN5(VAR2->VAR21, VAR6, VAR7);
            if (VAR11 == 0)
            {
                FUN6("");
            }
            else
            {
                FUN6("");
            }
        }
    }
    return VAR11;
}