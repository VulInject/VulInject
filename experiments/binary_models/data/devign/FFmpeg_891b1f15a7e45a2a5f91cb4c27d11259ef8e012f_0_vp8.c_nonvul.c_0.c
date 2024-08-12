void FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, int VAR6)
{
    VAR3 *VAR7[3] = {VAR4 + 2, VAR4 - 1, VAR4 + 1};
    enum
    {
        VAR8,
        VAR9,
        VAR10,
        VAR11
    };
    enum
    {
        VAR12,
        VAR13,
        VAR14
    };
    int VAR15 = VAR8;
    int VAR16 = VAR2->VAR17[VAR4->VAR18];
    int *VAR17 = VAR2->VAR17;
    VP56mv VAR19[4];
    uint8_t VAR20[4] = {0};
    VAR21 *VAR22 = &VAR2->VAR22;
    FUN2(&VAR19[0]);
    FUN2(&VAR19[1]);
    {
        VAR3 *VAR23 = VAR7[VAR24];
        int VAR25 = VAR23->VAR18;
        if (VAR25 != VAR26)
        {
            uint32_t VAR27 = FUN3(&VAR23->VAR27);
            if (VAR27)
            {
                if (VAR16 != VAR17[VAR25])
                {
                    VAR27 = ~VAR27;
                    VAR27 = ((VAR27 & 0x7fff7fff) + 0x00010001) ^ (VAR27 & 0x80008000);
                }
                if (!VAR24 || VAR27 != FUN3(&VAR19[VAR15]))
                    FUN4(&VAR19[++VAR15], VAR27);
                VAR20[VAR15] += 1 + (VAR24 != 2);
            }
            VAR28[VAR8] += 1 + (VAR24 != 2);
        }
    }
    FUN5(0)
    FUN5(1) FUN5(2) VAR4->VAR29 = VAR30;
    if (FUN6(VAR22, VAR31[VAR20[VAR8]][0]))
    {
        VAR4->VAR32 = VAR33;
        if (VAR20[VAR11] && FUN3(&VAR19[1 + VAR12]) == FUN3(&VAR19[1 + VAR14]))
            VAR20[VAR9] += 1;
        if (VAR20[VAR10] > VAR20[VAR9])
        {
            FUN7(VAR34, VAR20[VAR9], VAR20[VAR10]);
            FUN7(VAR35, VAR19[VAR9], VAR19[VAR10]);
        }
        if (FUN6(VAR22, VAR31[VAR20[VAR9]][1]))
        {
            if (FUN6(VAR22, VAR31[VAR20[VAR10]][2]))
            {
                FUN8(VAR2, &VAR4->VAR27, &VAR19[VAR8 + (VAR20[VAR9] >= VAR20[VAR8])]);
                VAR20[VAR11] = ((VAR7[VAR13]->VAR32 == VAR36) + (VAR7[VAR12]->VAR32 == VAR36)) * 2 + (VAR7[VAR14]->VAR32 == VAR36);
                if (FUN6(VAR22, VAR31[VAR20[VAR11]][3]))
                {
                    VAR4->VAR32 = VAR36;
                    VAR4->VAR27 = VAR4->VAR37[FUN9(VAR2, VAR22, VAR4) - 1];
                }
                else
                {
                    VAR4->VAR27.VAR38 += FUN10(VAR22, VAR2->VAR39->VAR40[0]);
                    VAR4->VAR27.VAR41 += FUN10(VAR22, VAR2->VAR39->VAR40[1]);
                    VAR4->VAR37[0] = VAR4->VAR27;
                }
            }
            else
            {
                FUN8(VAR2, &VAR4->VAR27, &VAR19[VAR10]);
                VAR4->VAR37[0] = VAR4->VAR27;
            }
        }
        else
        {
            FUN8(VAR2, &VAR4->VAR27, &VAR19[VAR9]);
            VAR4->VAR37[0] = VAR4->VAR27;
        }
    }
    else
    {
        VAR4->VAR32 = VAR42;
        FUN2(&VAR4->VAR27);
        VAR4->VAR37[0] = VAR4->VAR27;
    }
}