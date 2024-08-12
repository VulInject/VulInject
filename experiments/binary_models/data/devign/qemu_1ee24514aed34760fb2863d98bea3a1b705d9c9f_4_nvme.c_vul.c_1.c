static VAR1 FUN1(VAR2 *VAR3, VAR4 *VAR5, uint64_t VAR6, uint64_t VAR7, uint32_t VAR8, VAR9 *VAR10)
{
    hwaddr VAR11 = VAR10->VAR12 - (VAR6 % VAR10->VAR12);
    VAR11 = FUN2(VAR8, VAR11);
    int VAR13 = (VAR8 >> VAR10->VAR14) + 1;
    if (!VAR6)
    {
        return VAR15 | VAR16;
    }
    else if (VAR10->VAR17 && VAR6 >= VAR10->VAR18.VAR19 && VAR6 < VAR10->VAR18.VAR19 + FUN3(VAR10->VAR18.VAR20))
    {
        VAR3->VAR21 = 0;
        FUN4(VAR5, VAR13);
        FUN5(VAR5, (void *)&VAR10->VAR22[VAR6 - VAR10->VAR18.VAR19], VAR11);
    }
    else
    {
        FUN6(VAR3, &VAR10->VAR23, VAR13);
        FUN7(VAR3, VAR6, VAR11);
    }
    VAR8 -= VAR11;
    if (VAR8)
    {
        if (!VAR7)
        {
            goto VAR24;
        }
        if (VAR8 > VAR10->VAR12)
        {
            uint64_t VAR25[VAR10->VAR26];
            uint32_t VAR27, VAR28;
            int VAR29 = 0;
            VAR27 = (VAR8 + VAR10->VAR12 - 1) >> VAR10->VAR14;
            VAR28 = FUN2(VAR10->VAR26, VAR27) * sizeof(VAR30);
            FUN8(VAR10, VAR7, (void *)VAR25, VAR28);
            while (VAR8 != 0)
            {
                uint64_t VAR31 = FUN9(VAR25[VAR29]);
                if (VAR29 == VAR10->VAR26 - 1 && VAR8 > VAR10->VAR12)
                {
                    if (!VAR31 || VAR31 & (VAR10->VAR12 - 1))
                    {
                        goto VAR24;
                    }
                    VAR29 = 0;
                    VAR27 = (VAR8 + VAR10->VAR12 - 1) >> VAR10->VAR14;
                    VAR28 = FUN2(VAR10->VAR26, VAR27) * sizeof(VAR30);
                    FUN8(VAR10, VAR31, (void *)VAR25, VAR28);
                    VAR31 = FUN9(VAR25[VAR29]);
                }
                if (!VAR31 || VAR31 & (VAR10->VAR12 - 1))
                {
                    goto VAR24;
                }
                VAR11 = FUN2(VAR8, VAR10->VAR12);
                if (VAR3->VAR21)
                {
                    FUN7(VAR3, VAR31, VAR11);
                }
                else
                {
                    FUN5(VAR5, (void *)&VAR10->VAR22[VAR31 - VAR10->VAR18.VAR19], VAR11);
                }
                VAR8 -= VAR11;
                VAR29++;
            }
        }
        else
        {
            if (VAR7 & (VAR10->VAR12 - 1))
            {
                goto VAR24;
            }
            if (VAR3->VAR21)
            {
                FUN7(VAR3, VAR7, VAR8);
            }
            else
            {
                FUN5(VAR5, (void *)&VAR10->VAR22[VAR7 - VAR10->VAR18.VAR19], VAR11);
            }
        }
    }
    return VAR32;
VAR24:
    FUN10(VAR3);
    return VAR15 | VAR16;
}