int FUN1(VAR1 *VAR2, target_ulong VAR3, target_phys_addr_t VAR4, int VAR5, int VAR6, int VAR7)
{
    VAR8 *VAR9;
    unsigned long VAR10;
    unsigned int VAR11;
    target_ulong VAR12;
    target_phys_addr_t VAR13;
    int VAR14;
    VAR15 *VAR16;
    VAR9 = FUN2(VAR4 >> VAR17);
    if (!VAR9)
    {
        VAR10 = VAR18;
    }
    else
    {
        VAR10 = VAR9->VAR19;
    }
    FUN3("" VAR20 "", VAR3, (int)VAR4, VAR5, VAR6, VAR7, VAR10);
    VAR14 = 0;
    if (VAR7)
    {
        if ((VAR10 & ~VAR21) > VAR22 && !(VAR10 & VAR23))
        {
            VAR12 = VAR3 | VAR10;
            VAR13 = VAR4;
        }
        else
        {
            VAR12 = VAR3;
            VAR13 = (unsigned long)VAR24 + (VAR10 & VAR21);
        }
        for (VAR25 = 0; VAR25 < VAR2->VAR26; VAR25++)
        {
            if (VAR3 == (VAR2->VAR27[VAR25].VAR3 & VAR21))
            {
                if (VAR12 & ~VAR21)
                {
                    VAR2->VAR27[VAR25].VAR28 = 0;
                    VAR12 = VAR3 | VAR29;
                }
                else
                {
                    VAR2->VAR27[VAR25].VAR28 = 1;
                    VAR10 = (VAR10 & VAR21) | VAR29 | VAR23;
                }
            }
        }
        VAR11 = (VAR3 >> VAR17) & (VAR30 - 1);
        VAR13 -= VAR3;
        VAR16 = &VAR2->VAR31[VAR6][VAR11];
        VAR16->VAR13 = VAR13;
        if (VAR5 & VAR32)
        {
            VAR16->VAR33 = VAR12;
        }
        else
        {
            VAR16->VAR33 = -1;
        }
        if (VAR5 & VAR34)
        {
            VAR16->VAR35 = VAR12;
        }
        else
        {
            VAR16->VAR35 = -1;
        }
        if (VAR5 & VAR36)
        {
            if ((VAR10 & ~VAR21) == VAR22 || (VAR10 & VAR23))
            {
                VAR16->VAR37 = VAR3 | (VAR10 & ~(VAR21 | VAR23));
            }
            else if ((VAR10 & ~VAR21) == VAR38 && !FUN4(VAR10))
            {
                VAR16->VAR37 = VAR3 | VAR39;
            }
            else
            {
                VAR16->VAR37 = VAR12;
            }
        }
        else
        {
            VAR16->VAR37 = -1;
        }
    }
    else
    {
        if ((VAR10 & ~VAR21) > VAR22)
        {
            if (!(VAR2->VAR40 & VAR41))
                VAR14 = 2;
        }
        else
        {
            void *VAR42;
            if (VAR3 >= VAR43)
            {
                VAR14 = 2;
            }
            else
            {
                if (VAR5 & VAR44)
                {
                    if ((VAR10 & ~VAR21) == VAR22 || VAR45 || ((VAR10 & ~VAR21) == VAR38 && !FUN4(VAR10)))
                    {
                        VAR46 *VAR47;
                        VAR47 = FUN5(VAR3 >> VAR17, 1);
                        VAR47->VAR48 = VAR10;
                        VAR47->VAR5 = VAR5;
                        VAR47->VAR49 = VAR50;
                        VAR5 &= ~VAR36;
                    }
                }
                VAR42 = FUN6((void *)VAR3, VAR51, VAR5, VAR52 | VAR53, VAR54, (VAR10 & VAR21));
                if (VAR42 == VAR55)
                {
                    FUN7(VAR2, "", VAR4, VAR3);
                }
            }
        }
    }
    return VAR14;