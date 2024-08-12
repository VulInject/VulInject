static VAR1 FUN1(flag VAR2, int16 VAR3, uint64_t zSig VAR4)
{
    int8 VAR5;
    flag VAR6;
    int16 VAR7, VAR8;
    flag VAR9;
    VAR5 = FUN2(VAR10);
    VAR6 = (VAR5 == VAR11);
    VAR7 = 0x200;
    if (!VAR6)
    {
        if (VAR5 == VAR12)
        {
            VAR7 = 0;
        }
        else
        {
            VAR7 = 0x3FF;
            if (VAR2)
            {
                if (VAR5 == VAR13)
                    VAR7 = 0;
            }
            else
            {
                if (VAR5 == VAR14)
                    VAR7 = 0;
            }
        }
    }
    VAR8 = VAR15 & 0x3FF;
    if (0x7FD <= (VAR16)VAR3)
    {
        if ((0x7FD < VAR3) || ((VAR3 == 0x7FD) && ((VAR17)(VAR15 + VAR7) < 0)))
        {
            FUN3(VAR18 | float_flag_inexact VAR19);
            return FUN4(VAR2, 0x7FF, -(VAR7 == 0));
        }
        if (VAR3 < 0)
        {
            if (FUN2(VAR20))
                return FUN4(VAR2, 0, 0);
            VAR9 = (FUN2(VAR21) == VAR22) || (VAR3 < -1) || (VAR15 + VAR7 < FUN5(0x8000000000000000));
            FUN6(VAR15, -VAR3, &VAR15);
            VAR3 = 0;
            VAR8 = VAR15 & 0x3FF;
            if (VAR9 && VAR8)
                FUN3(float_flag_underflow VAR19);
        }
    }
    if (VAR8)
        FUN2(VAR23) |= VAR24;
    VAR15 = (VAR15 + VAR7) >> 10;
    VAR15 &= ~(((VAR8 ^ 0x200) == 0) & VAR6);
    if (VAR15 == 0)
        VAR3 = 0;
    return FUN4(VAR2, VAR3, VAR15);
}