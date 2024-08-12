static void FUN1(VAR1 *VAR2)
{
    bool VAR3 = false;
    unsigned int VAR4, VAR5;
    const uint16_t VAR6 = VAR2->VAR7 & 0x0fff;
    uint32_t VAR8 = 1 << (((VAR2->VAR7 & 0xf000) >> 12) + 12);
    uint32_t VAR9 = VAR8 - (VAR2->VAR10 % VAR8);
    if ((VAR2->VAR10 % VAR8) == 0)
    {
        VAR3 = true;
    }
    if (VAR2->VAR11 & VAR12)
    {
        VAR2->VAR13 |= VAR14 | VAR15 | VAR16;
        while (VAR2->VAR17)
        {
            if (VAR2->VAR18 == 0)
            {
                for (VAR4 = 0; VAR4 < VAR6; VAR4++)
                {
                    VAR2->VAR19[VAR4] = FUN2(&VAR2->VAR20);
                }
            }
            VAR5 = VAR2->VAR18;
            if (((VAR9 + VAR5) < VAR6) && VAR3)
            {
                VAR2->VAR18 = VAR9 + VAR5;
                VAR9 = 0;
            }
            else
            {
                VAR2->VAR18 = VAR6;
                VAR9 -= VAR6 - VAR5;
                if (VAR2->VAR11 & VAR21)
                {
                    VAR2->VAR17--;
                }
            }
            FUN3(&VAR22, VAR2->VAR10, &VAR2->VAR19[VAR5], VAR2->VAR18 - VAR5);
            VAR2->VAR10 += VAR2->VAR18 - VAR5;
            if (VAR2->VAR18 == VAR6)
            {
                VAR2->VAR18 = 0;
            }
            if (VAR3 && VAR9 == 0)
            {
                break;
            }
        }
    }
    else
    {
        VAR2->VAR13 |= VAR23 | VAR15 | VAR16;
        while (VAR2->VAR17)
        {
            VAR5 = VAR2->VAR18;
            if (((VAR9 + VAR5) < VAR6) && VAR3)
            {
                VAR2->VAR18 = VAR9 + VAR5;
                VAR9 = 0;
            }
            else
            {
                VAR2->VAR18 = VAR6;
                VAR9 -= VAR6 - VAR5;
            }
            FUN4(&VAR22, VAR2->VAR10, &VAR2->VAR19[VAR5], VAR2->VAR18 - VAR5);
            VAR2->VAR10 += VAR2->VAR18 - VAR5;
            if (VAR2->VAR18 == VAR6)
            {
                for (VAR4 = 0; VAR4 < VAR6; VAR4++)
                {
                    FUN5(&VAR2->VAR20, VAR2->VAR19[VAR4]);
                }
                VAR2->VAR18 = 0;
                if (VAR2->VAR11 & VAR21)
                {
                    VAR2->VAR17--;
                }
            }
            if (VAR3 && VAR9 == 0)
            {
                break;
            }
        }
    }
    if (VAR2->VAR17 == 0)
    {
        FUN6(VAR2);
    }
    else
    {
        if (VAR2->VAR24 & VAR25)
        {
            VAR2->VAR26 |= VAR27;
        }
        FUN7(VAR2);
    }
}