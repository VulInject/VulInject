FUN1(int8 VAR1, flag VAR2, int32 VAR3, uint64_t VAR4, uint64_t zSig1 VAR5)
{
    int8 VAR6;
    flag VAR7, VAR8, VAR9;
    int64 VAR10, VAR11, VAR12;
    VAR6 = FUN2(VAR13);
    VAR7 = (VAR6 == VAR14);
    if (VAR1 == 80)
        goto VAR15;
    if (VAR1 == 64)
    {
        VAR10 = FUN3(0x0000000000000400);
        VAR11 = FUN3(0x00000000000007FF);
    }
    else if (VAR1 == 32)
    {
        VAR10 = FUN3(0x0000008000000000);
        VAR11 = FUN3(0x000000FFFFFFFFFF);
    }
    else
    {
        goto VAR15;
    }
    VAR4 |= (VAR16 != 0);
    if (!VAR7)
    {
        if (VAR6 == VAR17)
        {
            VAR10 = 0;
        }
        else
        {
            VAR10 = VAR11;
            if (VAR2)
            {
                if (VAR6 == VAR18)
                    VAR10 = 0;
            }
            else
            {
                if (VAR6 == VAR19)
                    VAR10 = 0;
            }
        }
    }
    VAR12 = VAR4 & VAR11;
    if (0x7FFD <= (VAR20)(VAR3 - 1))
    {
        if ((0x7FFE < VAR3) || ((VAR3 == 0x7FFE) && (VAR4 + VAR10 < VAR4)))
        {
            goto VAR21;
        }
        if (VAR3 <= 0)
        {
            if (FUN2(VAR22))
                return FUN4(VAR2, 0, 0);
            VAR9 = (FUN2(VAR23) == VAR24) || (VAR3 < 0) || (VAR4 <= VAR4 + VAR10);
            FUN5(VAR4, 1 - VAR3, &VAR4);
            VAR3 = 0;
            VAR12 = VAR4 & VAR11;
            if (VAR9 && VAR12)
                FUN6(float_flag_underflow VAR25);
            if (VAR12)
                FUN2(VAR26) |= VAR27;
            VAR4 += VAR10;
            if ((VAR28)VAR4 < 0)
                VAR3 = 1;
            VAR10 = VAR11 + 1;
            if (VAR7 && (VAR12 << 1 == VAR10))
            {
                VAR11 |= VAR10;
            }
            VAR4 &= ~VAR11;
            return FUN4(VAR2, VAR3, VAR4);
        }
    }
    if (VAR12)
        FUN2(VAR26) |= VAR27;
    VAR4 += VAR10;
    if (VAR4 < VAR10)
    {
        ++VAR3;
        VAR4 = FUN3(0x8000000000000000);
    }
    VAR10 = VAR11 + 1;
    if (VAR7 && (VAR12 << 1 == VAR10))
    {
        VAR11 |= VAR10;
    }
    VAR4 &= ~VAR11;
    if (VAR4 == 0)
        VAR3 = 0;
    return FUN4(VAR2, VAR3, VAR4);
VAR15:
    VAR8 = ((VAR28)VAR16 < 0);
    if (!VAR7)
    {
        if (VAR6 == VAR17)
        {
            VAR8 = 0;
        }
        else
        {
            if (VAR2)
            {
                VAR8 = (VAR6 == VAR19) && VAR16;
            }
            else
            {
                VAR8 = (VAR6 == VAR18) && VAR16;
            }
        }
    }
    if (0x7FFD <= (VAR20)(VAR3 - 1))
    {
        if ((0x7FFE < VAR3) || ((VAR3 == 0x7FFE) && (VAR4 == FUN3(0xFFFFFFFFFFFFFFFF)) && VAR8))
        {
            VAR11 = 0;
        VAR21:
            FUN6(VAR29 | float_flag_inexact VAR25);
            if ((VAR6 == VAR17) || (VAR2 && (VAR6 == VAR18)) || (!VAR2 && (VAR6 == VAR19)))
            {
                return FUN4(VAR2, 0x7FFE, ~VAR11);
            }
            return FUN4(VAR2, 0x7FFF, FUN3(0x8000000000000000));
        }
        if (VAR3 <= 0)
        {
            VAR9 = (FUN2(VAR23) == VAR24) || (VAR3 < 0) || !VAR8 || (VAR4 < FUN3(0xFFFFFFFFFFFFFFFF));
            FUN7(VAR4, VAR16, 1 - VAR3, &VAR4, &VAR16);
            VAR3 = 0;
            if (VAR9 && VAR16)
                FUN6(float_flag_underflow VAR25);
            if (VAR16)
                FUN2(VAR26) |= VAR27;
            if (VAR7)
            {
                VAR8 = ((VAR28)VAR16 < 0);
            }
            else
            {
                if (VAR2)
                {
                    VAR8 = (VAR6 == VAR19) && VAR16;
                }
                else
                {
                    VAR8 = (VAR6 == VAR18) && VAR16;
                }
            }
            if (VAR8)
            {
                ++VAR4;
                VAR4 &= ~(((VAR30)(VAR16 << 1) == 0) & VAR7);
                if ((VAR28)VAR4 < 0)
                    VAR3 = 1;
            }
            return FUN4(VAR2, VAR3, VAR4);
        }
    }
    if (VAR16)
        FUN2(VAR26) |= VAR27;
    if (VAR8)
    {
        ++VAR4;
        if (VAR4 == 0)
        {
            ++VAR3;
            VAR4 = FUN3(0x8000000000000000);
        }
        else
        {
            VAR4 &= ~(((VAR30)(VAR16 << 1) == 0) & VAR7);
        }
    }
    else
    {
        if (VAR4 == 0)
            VAR3 = 0;
    }
    return FUN4(VAR2, VAR3, VAR4);
}