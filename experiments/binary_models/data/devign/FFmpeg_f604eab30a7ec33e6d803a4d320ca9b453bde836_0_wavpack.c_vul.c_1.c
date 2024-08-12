static float FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5)
{
    union
    {
        float VAR6;
        uint32_t VAR7;
    } VAR8;
    int VAR9;
    int VAR10 = VAR2->VAR11;
    if (VAR2->VAR12)
    {
        const int VAR13 = 1 + 23 + 8 + 1;
        const int VAR14 = FUN2(&VAR2->VAR15);
        if (VAR14 + 8 * VAR16 < VAR13)
            return 0.0;
    }
    if (VAR5)
    {
        VAR5 <<= VAR2->VAR17;
        VAR9 = VAR5 < 0;
        if (VAR9)
            VAR5 = -VAR5;
        if (VAR5 >= 0x1000000)
        {
            if (VAR2->VAR12 && FUN3(&VAR2->VAR15))
                VAR5 = FUN4(&VAR2->VAR15, 23);
            else
                VAR5 = 0;
            VAR10 = 255;
        }
        else if (VAR10)
        {
            int VAR18 = 23 - FUN5(VAR5);
            VAR10 = VAR2->VAR11;
            if (VAR10 <= VAR18)
                VAR18 = --VAR10;
            VAR10 -= VAR18;
            if (VAR18)
            {
                VAR5 <<= VAR18;
                if ((VAR2->VAR19 & VAR20) || (VAR2->VAR12 && (VAR2->VAR19 & VAR21) && FUN3(&VAR2->VAR15)))
                {
                    VAR5 |= (1 << VAR18) - 1;
                }
                else if (VAR2->VAR12 && (VAR2->VAR19 & VAR22))
                {
                    VAR5 |= FUN4(&VAR2->VAR15, VAR18);
                }
            }
        }
        else
        {
            VAR10 = VAR2->VAR11;
        }
        VAR5 &= 0x7fffff;
    }
    else
    {
        VAR9 = 0;
        VAR10 = 0;
        if (VAR2->VAR12 && (VAR2->VAR19 & VAR23))
        {
            if (FUN3(&VAR2->VAR15))
            {
                VAR5 = FUN4(&VAR2->VAR15, 23);
                if (VAR2->VAR11 >= 25)
                    VAR10 = FUN4(&VAR2->VAR15, 8);
                VAR9 = FUN3(&VAR2->VAR15);
            }
            else
            {
                if (VAR2->VAR19 & VAR24)
                    VAR9 = FUN3(&VAR2->VAR15);
            }
        }
    }
    *VAR4 = *VAR4 * 27 + VAR5 * 9 + VAR10 * 3 + VAR9;
    VAR8.VAR7 = (VAR9 << 31) | (VAR10 << 23) | VAR5;
    return VAR8.VAR6;
}