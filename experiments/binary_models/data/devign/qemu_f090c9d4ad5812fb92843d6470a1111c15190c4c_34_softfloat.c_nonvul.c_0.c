static VAR1 FUN1(flag VAR2, int16 VAR3, bits32 zSig VAR4)
{
    int8 VAR5;
    flag VAR6;
    int8 VAR7, VAR8;
    flag VAR9;
    VAR5 = FUN2(VAR10);
    VAR6 = (VAR5 == VAR11);
    VAR7 = 0x40;
    if (!VAR6)
    {
        if (VAR5 == VAR12)
        {
            VAR7 = 0;
        }
        else
        {
            VAR7 = 0x7F;
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
    VAR8 = VAR15 & 0x7F;
    if (0xFD <= (VAR16)VAR3)
    {
        if ((0xFD < VAR3) || ((VAR3 == 0xFD) && ((VAR17)(VAR15 + VAR7) < 0)))
        {
            FUN3(VAR18 | float_flag_inexact VAR19);
            return FUN4(VAR2, 0xFF, -(VAR7 == 0));
        }
        if (VAR3 < 0)
        {
            VAR9 = (FUN2(VAR20) == VAR21) || (VAR3 < -1) || (VAR15 + VAR7 < 0x80000000);
            FUN5(VAR15, -VAR3, &VAR15);
            VAR3 = 0;
            VAR8 = VAR15 & 0x7F;
            if (VAR9 && VAR8)
                FUN3(float_flag_underflow VAR19);
        }
    }
    if (VAR8)
        FUN2(VAR22) |= VAR23;
    VAR15 = (VAR15 + VAR7) >> 7;
    VAR15 &= ~(((VAR8 ^ 0x40) == 0) & VAR6);
    if (VAR15 == 0)
        VAR3 = 0;
    return FUN4(VAR2, VAR3, VAR15);
}