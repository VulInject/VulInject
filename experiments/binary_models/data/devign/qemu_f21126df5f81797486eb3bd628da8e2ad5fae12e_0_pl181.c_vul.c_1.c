static void FUN1(VAR1 *VAR2)
{
    uint32_t VAR3;
    uint32_t VAR4;
    int VAR5;
    int VAR6;
    VAR6 = (VAR2->VAR7 & VAR8) != 0;
    if (VAR2->VAR9 != 0 && (!VAR6 || FUN2(VAR2->VAR10)) && !VAR2->VAR11)
    {
        if (VAR6)
        {
            VAR5 = 0;
            VAR4 = 0;
            while (VAR2->VAR9 && VAR2->VAR12 < VAR13)
            {
                VAR4 |= (VAR14)FUN3(VAR2->VAR10) << (VAR5 * 8);
                VAR2->VAR9--;
                VAR5++;
                if (VAR5 == 4)
                {
                    FUN4(VAR2, VAR4);
                    VAR5 = 0;
                    VAR4 = 0;
                }
            }
            if (VAR5 != 0)
            {
                FUN4(VAR2, VAR4);
            }
        }
        else
        {
            VAR5 = 0;
            while (VAR2->VAR9 > 0 && (VAR2->VAR12 > 0 || VAR5 > 0))
            {
                if (VAR5 == 0)
                {
                    VAR4 = FUN5(VAR2);
                    VAR5 = 4;
                }
                VAR5--;
                VAR2->VAR9--;
                FUN6(VAR2->VAR10, VAR4 & 0xff);
                VAR4 >>= 8;
            }
        }
    }
    VAR2->VAR15 &= ~(VAR16 | VAR17);
    if (VAR2->VAR9 == 0)
    {
        VAR2->VAR15 |= VAR18;
        VAR2->VAR15 |= VAR19;
        FUN7("");
    }
    if (VAR2->VAR9 == 0 && VAR2->VAR12 == 0)
    {
        VAR2->VAR7 &= ~VAR20;
        FUN7("");
    }
    else
    {
        VAR3 = VAR21 | VAR22;
        if (VAR2->VAR12 == 0)
        {
            VAR3 |= VAR23;
            VAR3 |= VAR24;
        }
        else
        {
            VAR3 |= VAR25;
            VAR3 |= VAR26;
        }
        if (VAR2->VAR12 == 16)
        {
            VAR3 |= VAR27;
            VAR3 |= VAR28;
        }
        if (VAR2->VAR12 <= 8)
        {
            VAR3 |= VAR29;
        }
        if (VAR2->VAR12 >= 8)
        {
            VAR3 |= VAR30;
        }
        if (VAR2->VAR7 & VAR8)
        {
            VAR3 &= VAR16;
        }
        else
        {
            VAR3 &= VAR17;
        }
        VAR2->VAR15 |= VAR3;
    }
}