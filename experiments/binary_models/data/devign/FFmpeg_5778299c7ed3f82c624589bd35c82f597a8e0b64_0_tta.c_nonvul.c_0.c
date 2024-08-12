static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    const VAR7 *VAR8 = VAR6->VAR3;
    int VAR9 = VAR6->VAR10;
    VAR11 *VAR12 = VAR2->VAR13;
    int VAR14, VAR15;
    int VAR16 = 0, VAR17 = VAR12->VAR18;
    VAR19 *VAR20;
    if (VAR2->VAR21 & VAR22)
    {
        if (VAR9 < 4 || FUN2(VAR12, VAR8, VAR9 - 4))
            return VAR23;
    }
    FUN3(&VAR12->VAR24, VAR8, VAR9 * 8);
    VAR12->VAR25.VAR26 = VAR17;
    if ((VAR15 = FUN4(VAR2, &VAR12->VAR25)) < 0)
    {
        FUN5(VAR2, VAR27, "");
        return VAR15;
    }
    if (VAR12->VAR28 == 3)
        VAR12->VAR29 = (VAR19 *)VAR12->VAR25.VAR3[0];
    for (VAR14 = 0; VAR14 < VAR12->VAR30; VAR14++)
    {
        VAR12->VAR31[VAR14].VAR32 = 0;
        FUN6(&VAR12->VAR31[VAR14].VAR33, VAR34[VAR12->VAR28 - 1]);
        FUN7(&VAR12->VAR31[VAR14].VAR35, 10, 10);
    }
    VAR14 = 0;
    for (VAR20 = VAR12->VAR29; VAR20 < VAR12->VAR29 + (VAR17 * VAR12->VAR30); VAR20++)
    {
        VAR19 *VAR32 = &VAR12->VAR31[VAR16].VAR32;
        VAR36 *VAR33 = &VAR12->VAR31[VAR16].VAR33;
        VAR37 *VAR35 = &VAR12->VAR31[VAR16].VAR35;
        uint32_t VAR38, VAR39, VAR40;
        int32_t VAR41;
        VAR38 = FUN8(&VAR12->VAR24);
        if (VAR38 == 0)
        {
            VAR39 = 0;
            VAR40 = VAR35->VAR42;
        }
        else
        {
            VAR39 = 1;
            VAR40 = VAR35->VAR43;
            VAR38--;
        }
        if (FUN9(&VAR12->VAR24) < VAR40)
        {
            VAR15 = VAR23;
            goto VAR44;
        }
        if (VAR40)
        {
            if (VAR40 > VAR45)
            {
                VAR15 = VAR23;
                goto VAR44;
            }
            VAR41 = (VAR38 << VAR40) + FUN10(&VAR12->VAR24, VAR40);
        }
        else
            VAR41 = VAR38;
        switch (VAR39)
        {
        case 1:
            VAR35->VAR46 += VAR41 - (VAR35->VAR46 >> 4);
            if (VAR35->VAR43 > 0 && VAR35->VAR46 < VAR47[VAR35->VAR43])
                VAR35->VAR43--;
            else if (VAR35->VAR46 > VAR47[VAR35->VAR43 + 1])
                VAR35->VAR43++;
            VAR41 += VAR48[VAR35->VAR42];
        default:
            VAR35->VAR49 += VAR41 - (VAR35->VAR49 >> 4);
            if (VAR35->VAR42 > 0 && VAR35->VAR49 < VAR47[VAR35->VAR42])
                VAR35->VAR42--;
            else if (VAR35->VAR49 > VAR47[VAR35->VAR42 + 1])
                VAR35->VAR42++;
        }
        *VAR20 = 1 + ((VAR41 >> 1) ^ ((VAR41 & 1) - 1));
        FUN11(VAR33, VAR20);
        switch (VAR12->VAR28)
        {
        case 1:
            *VAR20 += FUN12(*VAR32, 4);
            break;
        case 2:
        case 3:
            *VAR20 += FUN12(*VAR32, 5);
            break;
        case 4:
            *VAR20 += *VAR32;
            break;
        }
        *VAR32 = *VAR20;
        if (VAR16 < (VAR12->VAR30 - 1))
            VAR16++;
        else
        {
            if (VAR12->VAR30 > 1)
            {
                VAR19 *VAR50 = VAR20 - 1;
                for (*VAR20 += *VAR50 / 2; VAR50 > VAR20 - VAR12->VAR30; VAR50--)
                    *VAR50 = *(VAR50 + 1) - *VAR50;
            }
            VAR16 = 0;
            VAR14++;
            if (VAR14 == VAR12->VAR51 && FUN9(&VAR12->VAR24) / 8 == 4)
            {
                VAR12->VAR25.VAR26 = VAR17 = VAR12->VAR51;
                break;
            }
        }
    }
    FUN13(&VAR12->VAR24);
    if (FUN9(&VAR12->VAR24) < 32)
    {
        VAR15 = VAR23;
        goto VAR44;
    }
    FUN14(&VAR12->VAR24, 32);
    if (VAR12->VAR28 == 2)
    {
        VAR52 *VAR53 = (VAR52 *)VAR12->VAR25.VAR3[0];
        for (VAR20 = VAR12->VAR29; VAR20 < VAR12->VAR29 + (VAR17 * VAR12->VAR30); VAR20++)
            *VAR53++ = *VAR20;
    }
    else
    {
        VAR19 *VAR53 = (VAR19 *)VAR12->VAR25.VAR3[0];
        for (VAR14 = 0; VAR14 < VAR17 * VAR12->VAR30; VAR14++)
            *VAR53++ <<= 8;
        VAR12->VAR29 = NULL;
    }
    *VAR4 = 1;
    *(VAR54 *)VAR3 = VAR12->VAR25;
    return VAR9;
VAR44:
    if (VAR12->VAR28 == 3)
        VAR12->VAR29 = NULL;
    return VAR15;
}