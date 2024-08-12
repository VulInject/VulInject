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
    VAR19 *VAR17 = VAR2->VAR17;
    VP56mv VAR20[4];
    uint8_t VAR21[4] = {0};
    VAR22 *VAR23 = &VAR2->VAR23;
    FUN2(&VAR20[0]);
    FUN2(&VAR20[1]);
    {
        VAR3 *VAR24 = VAR7[VAR25];
        int VAR26 = VAR24->VAR18;
        if (VAR26 != VAR27)
        {
            uint32_t VAR28 = FUN3(&VAR24->VAR28);
            if (VAR28)
            {
                if (VAR16 != VAR17[VAR26])
                {
                    VAR28 = ~VAR28;
                    VAR28 = ((VAR28 & 0x7fff7fff) + 0x00010001) ^ (VAR28 & 0x80008000);
                }
                if (!VAR25 || VAR28 != FUN3(&VAR20[VAR15]))
                    FUN4(&VAR20[++VAR15], VAR28);
                VAR21[VAR15] += 1 + (VAR25 != 2);
            }
            else
                VAR21[VAR8] += 1 + (VAR25 != 2);
        }
    }
    FUN5(0)
    FUN5(1) FUN5(2) VAR4->VAR29 = VAR30;
    if (FUN6(VAR23, VAR31[VAR21[VAR8]][0]))
    {
        VAR4->VAR32 = VAR33;
        if (VAR21[VAR11] && FUN3(&VAR20[1 + VAR12]) == FUN3(&VAR20[1 + VAR14]))
            VAR21[VAR9] += 1;
        if (VAR21[VAR10] > VAR21[VAR9])
        {
            FUN7(VAR34, VAR21[VAR9], VAR21[VAR10]);
            FUN7(VAR35, VAR20[VAR9], VAR20[VAR10]);
        }
        if (FUN6(VAR23, VAR31[VAR21[VAR9]][1]))
        {
            if (FUN6(VAR23, VAR31[VAR21[VAR10]][2]))
            {
                FUN8(VAR2, &VAR4->VAR28, &VAR20[VAR8 + (VAR21[VAR9] >= VAR21[VAR8])]);
                VAR21[VAR11] = ((VAR7[VAR13]->VAR32 == VAR36) + (VAR7[VAR12]->VAR32 == VAR36)) * 2 + (VAR7[VAR14]->VAR32 == VAR36);
                if (FUN6(VAR23, VAR31[VAR21[VAR11]][3]))
                {
                    VAR4->VAR32 = VAR36;
                    VAR4->VAR28 = VAR4->VAR37[FUN9(VAR2, VAR23, VAR4) - 1];
                }
                else
                {
                    VAR4->VAR28.VAR38 += FUN10(VAR23, VAR2->VAR39->VAR40[0]);
                    VAR4->VAR28.VAR41 += FUN10(VAR23, VAR2->VAR39->VAR40[1]);
                    VAR4->VAR37[0] = VAR4->VAR28;
                }
            }
            else
            {
                FUN8(VAR2, &VAR4->VAR28, &VAR20[VAR10]);
                VAR4->VAR37[0] = VAR4->VAR28;
            }
        }
        else
        {
            FUN8(VAR2, &VAR4->VAR28, &VAR20[VAR9]);
            VAR4->VAR37[0] = VAR4->VAR28;
        }
    }
    else
    {
        VAR4->VAR32 = VAR42;
        FUN2(&VAR4->VAR28);
        VAR4->VAR37[0] = VAR4->VAR28;
    }