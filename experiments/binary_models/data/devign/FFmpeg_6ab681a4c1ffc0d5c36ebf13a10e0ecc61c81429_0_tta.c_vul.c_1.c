static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    const VAR7 *VAR8 = VAR6->VAR3;
    int VAR9 = VAR6->VAR10;
    VAR11 *VAR12 = VAR2->VAR13;
    int VAR14, VAR15;
    int VAR16 = 0, VAR17 = VAR12->VAR18;
    VAR19 *VAR20;
    FUN2(&VAR12->VAR21, VAR8, VAR9 * 8);
    VAR12->VAR22--;
    if (!VAR12->VAR22 && VAR12->VAR23)
        VAR17 = VAR12->VAR23;
    VAR12->VAR24.VAR25 = VAR17;
    if ((VAR15 = VAR2->FUN3(VAR2, &VAR12->VAR24)) < 0)
    {
        FUN4(VAR2, VAR26, "");
        return VAR15;
    }
    if (VAR12->VAR27 == 3)
        VAR12->VAR28 = (VAR19 *)VAR12->VAR24.VAR3[0];
    for (VAR14 = 0; VAR14 < VAR12->VAR29; VAR14++)
    {
        VAR12->VAR30[VAR14].VAR31 = 0;
        FUN5(&VAR12->VAR30[VAR14].VAR32, VAR33[VAR12->VAR27 - 1][0], VAR33[VAR12->VAR27 - 1][1]);
        FUN6(&VAR12->VAR30[VAR14].VAR34, 10, 10);
    }
    for (VAR20 = VAR12->VAR28; VAR20 < VAR12->VAR28 + (VAR17 * VAR12->VAR29); VAR20++)
    {
        VAR19 *VAR31 = &VAR12->VAR30[VAR16].VAR31;
        VAR35 *VAR32 = &VAR12->VAR30[VAR16].VAR32;
        VAR36 *VAR34 = &VAR12->VAR30[VAR16].VAR34;
        uint32_t VAR37, VAR38, VAR39;
        int32_t VAR40;
        VAR37 = FUN7(&VAR12->VAR21);
        if (VAR37 == 0)
        {
            VAR38 = 0;
            VAR39 = VAR34->VAR41;
        }
        else
        {
            VAR38 = 1;
            VAR39 = VAR34->VAR42;
            VAR37--;
        }
        if (FUN8(&VAR12->VAR21) < VAR39)
            return -1;
        if (VAR39)
        {
            if (VAR39 > VAR43)
                return -1;
            VAR40 = (VAR37 << VAR39) + FUN9(&VAR12->VAR21, VAR39);
        }
        else
            VAR40 = VAR37;
        switch (VAR38)
        {
        case 1:
            VAR34->VAR44 += VAR40 - (VAR34->VAR44 >> 4);
            if (VAR34->VAR42 > 0 && VAR34->VAR44 < VAR45[VAR34->VAR42])
                VAR34->VAR42--;
            else if (VAR34->VAR44 > VAR45[VAR34->VAR42 + 1])
                VAR34->VAR42++;
            VAR40 += VAR46[VAR34->VAR41];
        default:
            VAR34->VAR47 += VAR40 - (VAR34->VAR47 >> 4);
            if (VAR34->VAR41 > 0 && VAR34->VAR47 < VAR45[VAR34->VAR41])
                VAR34->VAR41--;
            else if (VAR34->VAR47 > VAR45[VAR34->VAR41 + 1])
                VAR34->VAR41++;
        }
        *VAR20 = FUN10(VAR40);
        FUN11(VAR32, VAR20, 0);
        switch (VAR12->VAR27)
        {
        case 1:
            *VAR20 += FUN12(*VAR31, 4);
            break;
        case 2:
        case 3:
            *VAR20 += FUN12(*VAR31, 5);
            break;
        case 4:
            *VAR20 += *VAR31;
            break;
        }
        *VAR31 = *VAR20;
        if (VAR16 < (VAR12->VAR29 - 1))
            VAR16++;
        else
        {
            if (VAR12->VAR29 > 1)
            {
                VAR19 *VAR48 = VAR20 - 1;
                for (*VAR20 += *VAR48 / 2; VAR48 > VAR20 - VAR12->VAR29; VAR48--)
                    *VAR48 = *(VAR48 + 1) - *VAR48;
            }
            VAR16 = 0;
        }
    }
    if (FUN8(&VAR12->VAR21) < 32)
        return -1;
    FUN13(&VAR12->VAR21, 32);
    if (VAR12->VAR27 == 2)
    {
        VAR49 *VAR50 = (VAR49 *)VAR12->VAR24.VAR3[0];
        for (VAR20 = VAR12->VAR28; VAR20 < VAR12->VAR28 + (VAR17 * VAR12->VAR29); VAR20++)
            *VAR50++ = *VAR20;
    }
    else
    {
        VAR19 *VAR50 = (VAR19 *)VAR12->VAR24.VAR3[0];
        for (VAR14 = 0; VAR14 < VAR17 * VAR12->VAR29; VAR14++)
            *VAR50++ <<= 8;
        VAR12->VAR28 = NULL;
    }
    *VAR4 = 1;
    *(VAR51 *)VAR3 = VAR12->VAR24;
    return VAR9;
}