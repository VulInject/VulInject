static void FUN1(VAR1 *VAR2)
{
    unsigned int VAR3, VAR4, VAR5;
    const uint16_t VAR6 = VAR2->VAR7 & 0x0fff;
    ADMADescr VAR8;
    int VAR9;
    for (VAR9 = 0; VAR9 < VAR10; ++VAR9)
    {
        VAR2->VAR11 &= ~VAR12;
        FUN2(VAR2, &VAR8);
        FUN3("" VAR13 "", VAR8.VAR14, VAR8.VAR5, VAR8.VAR15);
        if ((VAR8.VAR15 & VAR16) == 0)
        {
            VAR2->VAR11 &= ~VAR17;
            VAR2->VAR11 |= VAR18;
            if (VAR2->VAR19 & VAR20)
            {
                VAR2->VAR21 |= VAR22;
                VAR2->VAR23 |= VAR24;
            }
            FUN4(VAR2);
            return;
        }
        VAR5 = VAR8.VAR5 ? VAR8.VAR5 : 65536;
        switch (VAR8.VAR15 & VAR25)
        {
        case VAR26:
            if (VAR2->VAR27 & VAR28)
            {
                while (VAR5)
                {
                    if (VAR2->VAR29 == 0)
                    {
                        for (VAR3 = 0; VAR3 < VAR6; VAR3++)
                        {
                            VAR2->VAR30[VAR3] = FUN5(VAR2->VAR31);
                        }
                    }
                    VAR4 = VAR2->VAR29;
                    if ((VAR5 + VAR4) < VAR6)
                    {
                        VAR2->VAR29 = VAR5 + VAR4;
                        VAR5 = 0;
                    }
                    else
                    {
                        VAR2->VAR29 = VAR6;
                        VAR5 -= VAR6 - VAR4;
                    }
                    FUN6(&VAR32, VAR8.VAR14, &VAR2->VAR30[VAR4], VAR2->VAR29 - VAR4);
                    VAR8.VAR14 += VAR2->VAR29 - VAR4;
                    if (VAR2->VAR29 == VAR6)
                    {
                        VAR2->VAR29 = 0;
                        if (VAR2->VAR27 & VAR33)
                        {
                            VAR2->VAR34--;
                            if (VAR2->VAR34 == 0)
                            {
                                break;
                            }
                        }
                    }
                }
            }
            else
            {
                while (VAR5)
                {
                    VAR4 = VAR2->VAR29;
                    if ((VAR5 + VAR4) < VAR6)
                    {
                        VAR2->VAR29 = VAR5 + VAR4;
                        VAR5 = 0;
                    }
                    else
                    {
                        VAR2->VAR29 = VAR6;
                        VAR5 -= VAR6 - VAR4;
                    }
                    FUN7(&VAR32, VAR8.VAR14, &VAR2->VAR30[VAR4], VAR2->VAR29 - VAR4);
                    VAR8.VAR14 += VAR2->VAR29 - VAR4;
                    if (VAR2->VAR29 == VAR6)
                    {
                        for (VAR3 = 0; VAR3 < VAR6; VAR3++)
                        {
                            FUN8(VAR2->VAR31, VAR2->VAR30[VAR3]);
                        }
                        VAR2->VAR29 = 0;
                        if (VAR2->VAR27 & VAR33)
                        {
                            VAR2->VAR34--;
                            if (VAR2->VAR34 == 0)
                            {
                                break;
                            }
                        }
                    }
                }
            }
            VAR2->VAR35 += VAR8.VAR36;
            break;
        case VAR37:
            VAR2->VAR35 = VAR8.VAR14;
            FUN9("", VAR2->VAR35);
            break;
        default:
            VAR2->VAR35 += VAR8.VAR36;
            break;
        }
        if (VAR8.VAR15 & VAR38)
        {
            FUN9("", VAR2->VAR35);
            if (VAR2->VAR39 & VAR40)
            {
                VAR2->VAR23 |= VAR41;
            }
            FUN4(VAR2);
        }
        if (((VAR2->VAR27 & VAR33) && (VAR2->VAR34 == 0)) || (VAR8.VAR15 & VAR42))
        {
            FUN3("");
            if (VAR5 || ((VAR8.VAR15 & VAR42) && (VAR2->VAR27 & VAR33) && VAR2->VAR34 != 0))
            {
                FUN10("");
                VAR2->VAR11 |= VAR12 | VAR43;
                if (VAR2->VAR19 & VAR20)
                {
                    FUN10("");
                    VAR2->VAR21 |= VAR22;
                    VAR2->VAR23 |= VAR24;
                }
                FUN4(VAR2);
            }
            FUN11(VAR2);
            return;
        }
    }
    FUN12(VAR2->VAR44, FUN13(VAR45) + VAR46);
}