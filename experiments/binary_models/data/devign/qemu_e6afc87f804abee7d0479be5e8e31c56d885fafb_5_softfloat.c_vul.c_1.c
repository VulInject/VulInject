FUN1(flag VAR1, int32 VAR2, uint64_t VAR3, uint64_t VAR4, uint64_t zSig2 VAR5)
{
    int8 VAR6;
    flag VAR7, VAR8, VAR9;
    VAR6 = FUN2(VAR10);
    VAR7 = (VAR6 == VAR11);
    VAR8 = ((VAR12)VAR13 < 0);
    if (!VAR7)
    {
        if (VAR6 == VAR14)
        {
            VAR8 = 0;
        }
        else
        {
            if (VAR1)
            {
                VAR8 = (VAR6 == VAR15) && VAR13;
            }
            else
            {
                VAR8 = (VAR6 == VAR16) && VAR13;
            }
        }
    }
    if (0x7FFD <= (VAR17)VAR2)
    {
        if ((0x7FFD < VAR2) || ((VAR2 == 0x7FFD) && FUN3(FUN4(0x0001FFFFFFFFFFFF), FUN4(0xFFFFFFFFFFFFFFFF), VAR3, VAR4) && VAR8))
        {
            FUN5(VAR18 | float_flag_inexact VAR19);
            if ((VAR6 == VAR14) || (VAR1 && (VAR6 == VAR16)) || (!VAR1 && (VAR6 == VAR15)))
            {
                return FUN6(VAR1, 0x7FFE, FUN4(0x0000FFFFFFFFFFFF), FUN4(0xFFFFFFFFFFFFFFFF));
            }
            return FUN6(VAR1, 0x7FFF, 0, 0);
        }
        if (VAR2 < 0)
        {
            if (FUN2(VAR20))
                return FUN6(VAR1, 0, 0, 0);
            VAR9 = (FUN2(VAR21) == VAR22) || (VAR2 < -1) || !VAR8 || FUN7(VAR3, VAR4, FUN4(0x0001FFFFFFFFFFFF), FUN4(0xFFFFFFFFFFFFFFFF));
            FUN8(VAR3, VAR4, VAR13, -VAR2, &VAR3, &VAR4, &VAR13);
            VAR2 = 0;
            if (VAR9 && VAR13)
                FUN5(float_flag_underflow VAR19);
            if (VAR7)
            {
                VAR8 = ((VAR12)VAR13 < 0);
            }
            else
            {
                if (VAR1)
                {
                    VAR8 = (VAR6 == VAR15) && VAR13;
                }
                else
                {
                    VAR8 = (VAR6 == VAR16) && VAR13;
                }
            }
        }
    }
    if (VAR13)
        FUN2(VAR23) |= VAR24;
    if (VAR8)
    {
        FUN9(VAR3, VAR4, 0, 1, &VAR3, &VAR4);
        VAR4 &= ~((VAR13 + VAR13 == 0) & VAR7);
    }
    else
    {
        if ((VAR3 | VAR4) == 0)
            VAR2 = 0;
    }
    return FUN6(VAR1, VAR2, VAR3, VAR4);
}