static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    const VAR7 *VAR8 = VAR6->VAR3;
    int VAR9 = VAR6->VAR10;
    VAR11 *VAR12 = VAR2->VAR13;
    int VAR14;
    FUN2(&VAR12->VAR15, VAR8, VAR9 * 8);
    {
        int VAR16 = 0, VAR17 = VAR12->VAR18;
        VAR19 *VAR20;
        VAR12->VAR21--;
        if (!VAR12->VAR21 && VAR12->VAR22)
            VAR17 = VAR12->VAR22;
        if (*VAR4 < (VAR17 * VAR12->VAR23 * 2))
        {
            FUN3(VAR2, VAR24, "");
            return -1;
        }
        for (VAR14 = 0; VAR14 < VAR12->VAR23; VAR14++)
        {
            VAR12->VAR25[VAR14].VAR26 = 0;
            FUN4(&VAR12->VAR25[VAR14].VAR27, VAR28[VAR12->VAR29 - 1][0], VAR28[VAR12->VAR29 - 1][1]);
            FUN5(&VAR12->VAR25[VAR14].VAR30, 10, 10);
        }
        for (VAR20 = VAR12->VAR31; VAR20 < VAR12->VAR31 + (VAR17 * VAR12->VAR23); VAR20++)
        {
            VAR19 *VAR26 = &VAR12->VAR25[VAR16].VAR26;
            VAR32 *VAR27 = &VAR12->VAR25[VAR16].VAR27;
            VAR33 *VAR30 = &VAR12->VAR25[VAR16].VAR30;
            uint32_t VAR34, VAR35, VAR36;
            int32_t VAR37;
            VAR34 = FUN6(&VAR12->VAR15);
            if (VAR34 == 0)
            {
                VAR35 = 0;
                VAR36 = VAR30->VAR38;
            }
            else
            {
                VAR35 = 1;
                VAR36 = VAR30->VAR39;
                VAR34--;
            }
            if (FUN7(&VAR12->VAR15) < VAR36)
                return -1;
            if (VAR36)
            {
                if (VAR36 > VAR40)
                    return -1;
                VAR37 = (VAR34 << VAR36) + FUN8(&VAR12->VAR15, VAR36);
            }
            else
                VAR37 = VAR34;
            switch (VAR35)
            {
            case 1:
                VAR30->VAR41 += VAR37 - (VAR30->VAR41 >> 4);
                if (VAR30->VAR39 > 0 && VAR30->VAR41 < VAR42[VAR30->VAR39])
                    VAR30->VAR39--;
                else if (VAR30->VAR41 > VAR42[VAR30->VAR39 + 1])
                    VAR30->VAR39++;
                VAR37 += VAR43[VAR30->VAR38];
            default:
                VAR30->VAR44 += VAR37 - (VAR30->VAR44 >> 4);
                if (VAR30->VAR38 > 0 && VAR30->VAR44 < VAR42[VAR30->VAR38])
                    VAR30->VAR38--;
                else if (VAR30->VAR44 > VAR42[VAR30->VAR38 + 1])
                    VAR30->VAR38++;
            }
            *VAR20 = FUN9(VAR37);
            FUN10(VAR27, VAR20, 0);
            switch (VAR12->VAR29)
            {
            case 1:
                *VAR20 += FUN11(*VAR26, 4);
                break;
            case 2:
            case 3:
                *VAR20 += FUN11(*VAR26, 5);
                break;
            case 4:
                *VAR20 += *VAR26;
                break;
            }
            *VAR26 = *VAR20;
            if (VAR16 < (VAR12->VAR23 - 1))
                VAR16++;
            else
            {
                if (VAR12->VAR23 > 1)
                {
                    VAR19 *VAR45 = VAR20 - 1;
                    for (*VAR20 += *VAR45 / 2; VAR45 > VAR20 - VAR12->VAR23; VAR45--)
                        *VAR45 = *(VAR45 + 1) - *VAR45;
                }
                VAR16 = 0;
            }
        }
        if (FUN7(&VAR12->VAR15) < 32)
            return -1;
        FUN12(&VAR12->VAR15, 32);
        switch (VAR12->VAR29)
        {
        case 2:
        {
            VAR46 *VAR47 = VAR3;
            for (VAR20 = VAR12->VAR31; VAR20 < VAR12->VAR31 + (VAR17 * VAR12->VAR23); VAR20++)
            {
                *VAR47++ = *VAR20;
            }
            *VAR4 = (VAR7 *)VAR47 - (VAR7 *)VAR3;
            break;
        }
        default:
            FUN3(VAR12->VAR2, VAR24, "");
        }
    }
    return VAR9;
}