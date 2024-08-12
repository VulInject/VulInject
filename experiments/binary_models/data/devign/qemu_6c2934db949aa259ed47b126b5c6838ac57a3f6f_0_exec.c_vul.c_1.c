void FUN1(target_phys_addr_t VAR1, VAR2 *VAR3, int VAR4, int VAR5)
{
    int VAR6, VAR7;
    VAR2 *VAR8;
    uint32_t VAR9;
    target_phys_addr_t VAR10;
    unsigned long VAR11;
    VAR12 *VAR13;
    while (VAR4 > 0)
    {
        VAR10 = VAR1 & VAR14;
        VAR6 = (VAR10 + VAR15) - VAR1;
        if (VAR6 > VAR4)
            VAR6 = VAR4;
        VAR13 = FUN2(VAR10 >> VAR16);
        if (!VAR13)
        {
            VAR11 = VAR17;
        }
        else
        {
            VAR11 = VAR13->VAR18;
        }
        if (VAR5)
        {
            if ((VAR11 & ~VAR14) != VAR19)
            {
                VAR7 = (VAR11 >> VAR20) & (VAR21 - 1);
                if (VAR13)
                    VAR1 = (VAR1 & ~VAR14) + VAR13->VAR22;
                if (VAR6 >= 4 && ((VAR1 & 3) == 0))
                {
                    VAR9 = FUN3(VAR3);
                    VAR23[VAR7][2](VAR24[VAR7], VAR1, VAR9);
                    VAR6 = 4;
                }
                else if (VAR6 >= 2 && ((VAR1 & 1) == 0))
                {
                    VAR9 = FUN4(VAR3);
                    VAR23[VAR7][1](VAR24[VAR7], VAR1, VAR9);
                    VAR6 = 2;
                }
                else
                {
                    VAR9 = FUN5(VAR3);
                    VAR23[VAR7][0](VAR24[VAR7], VAR1, VAR9);
                    VAR6 = 1;
                }
            }
            else
            {
                unsigned long VAR25;
                VAR25 = (VAR11 & VAR14) + (VAR1 & ~VAR14);
                VAR8 = VAR26 + VAR25;
                memcpy(VAR8, VAR3, VAR6);
                if (!FUN6(VAR25))
                {
                    FUN7(VAR25, VAR25 + VAR6, 0);
                    VAR27[VAR25 >> VAR16] |= (0xff & ~VAR28);
                }
            }
        }
        else
        {
            if ((VAR11 & ~VAR14) > VAR29 && !(VAR11 & VAR30))
            {
                VAR7 = (VAR11 >> VAR20) & (VAR21 - 1);
                if (VAR13)
                    VAR1 = (VAR1 & ~VAR14) + VAR13->VAR22;
                if (VAR6 >= 4 && ((VAR1 & 3) == 0))
                {
                    VAR9 = VAR31[VAR7][2](VAR24[VAR7], VAR1);
                    FUN8(VAR3, VAR9);
                    VAR6 = 4;
                }
                else if (VAR6 >= 2 && ((VAR1 & 1) == 0))
                {
                    VAR9 = VAR31[VAR7][1](VAR24[VAR7], VAR1);
                    FUN9(VAR3, VAR9);
                    VAR6 = 2;
                }
                else
                {
                    VAR9 = VAR31[VAR7][0](VAR24[VAR7], VAR1);
                    FUN10(VAR3, VAR9);
                    VAR6 = 1;
                }
            }
            else
            {
                VAR8 = VAR26 + (VAR11 & VAR14) + (VAR1 & ~VAR14);
                memcpy(VAR3, VAR8, VAR6);
            }
        }
        VAR4 -= VAR6;
        VAR3 += VAR6;
        VAR1 += VAR6;
    }
}