static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    const VAR7 *VAR8 = VAR6->VAR3;
    int VAR9 = VAR6->VAR10;
    VAR11 *VAR12 = VAR2->VAR13;
    int VAR14;
    FUN2(&VAR12->VAR15, VAR8, VAR9 * 8);
    {
        int32_t VAR16[VAR12->VAR17];
        TTAFilter VAR18[VAR12->VAR17];
        TTARice VAR19[VAR12->VAR17];
        int VAR20 = 0, VAR21 = VAR12->VAR22;
        VAR23 *VAR24;
        VAR12->VAR25--;
        if (!VAR12->VAR25 && VAR12->VAR26)
            VAR21 = VAR12->VAR26;
        for (VAR14 = 0; VAR14 < VAR12->VAR17; VAR14++)
        {
            VAR16[VAR14] = 0;
            FUN3(&(VAR18[VAR14]), VAR27[VAR12->VAR28 - 1][0], VAR27[VAR12->VAR28 - 1][1]);
            FUN4(&(VAR19[VAR14]), 10, 10);
        }
        for (VAR24 = VAR12->VAR29; VAR24 < VAR12->VAR29 + (VAR21 * VAR12->VAR17); VAR24++)
        {
            VAR23 *VAR30 = &(VAR16[VAR20]);
            VAR31 *VAR32 = &(VAR18[VAR20]);
            VAR33 *VAR34 = &(VAR19[VAR20]);
            uint32_t VAR35, VAR36, VAR37;
            int32_t VAR38;
            VAR35 = FUN5(&VAR12->VAR15);
            if (VAR35 == 0)
            {
                VAR36 = 0;
                VAR37 = VAR34->VAR39;
            }
            else
            {
                VAR36 = 1;
                VAR37 = VAR34->VAR40;
                VAR35--;
            }
            if (VAR37)
                VAR38 = (VAR35 << VAR37) + FUN6(&VAR12->VAR15, VAR37);
            else
                VAR38 = VAR35;
            switch (VAR36)
            {
            case 1:
                VAR34->VAR41 += VAR38 - (VAR34->VAR41 >> 4);
                if (VAR34->VAR40 > 0 && VAR34->VAR41 < VAR42[VAR34->VAR40])
                    VAR34->VAR40--;
                else if (VAR34->VAR41 > VAR42[VAR34->VAR40 + 1])
                    VAR34->VAR40++;
                VAR38 += VAR43[VAR34->VAR39];
            default:
                VAR34->VAR44 += VAR38 - (VAR34->VAR44 >> 4);
                if (VAR34->VAR39 > 0 && VAR34->VAR44 < VAR42[VAR34->VAR39])
                    VAR34->VAR39--;
                else if (VAR34->VAR44 > VAR42[VAR34->VAR39 + 1])
                    VAR34->VAR39++;
            }
            *VAR24 = FUN7(VAR38);
            FUN8(VAR32, VAR24, 0);
            switch (VAR12->VAR28)
            {
            case 1:
                *VAR24 += FUN9(*VAR30, 4);
                break;
            case 2:
            case 3:
                *VAR24 += FUN9(*VAR30, 5);
                break;
            case 4:
                *VAR24 += *VAR30;
                break;
            }
            *VAR30 = *VAR24;
            if (VAR12->VAR45 && ((VAR24 - VAR3) & 1))
            {
                uint32_t VAR46 = *VAR24 & 0x80000000;
                uint32_t VAR47 = *(VAR24 - 1);
                uint32_t VAR48 = FUN10(*VAR24) - 1;
                VAR47 += (VAR47 || VAR48) ? 0x3f80 : 0;
                *(VAR24 - 1) = (VAR47 << 16) | FUN11(VAR48) | VAR46;
            }
            if (VAR20 < (VAR12->VAR17 - 1))
                VAR20++;
            else
            {
                if (!VAR12->VAR45 && (VAR12->VAR17 > 1))
                {
                    VAR23 *VAR49 = VAR24 - 1;
                    for (*VAR24 += *VAR49 / 2; VAR49 > VAR24 - VAR12->VAR17; VAR49--)
                        *VAR49 = *(VAR49 + 1) - *VAR49;
                }
                VAR20 = 0;
            }
        }
        FUN12(&VAR12->VAR15, 32);
        switch (VAR12->VAR28)
        {
        case 2:
        {
            VAR50 *VAR51 = VAR3;
            for (VAR24 = VAR12->VAR29; VAR24 < VAR12->VAR29 + (VAR21 * VAR12->VAR17); VAR24++)
            {
                *VAR51++ = *VAR24;
            }
            *VAR4 = (VAR7 *)VAR51 - (VAR7 *)VAR3;
            break;
        }
        default:
            FUN13(VAR12->VAR2, VAR52, "");
        }
    }
    return VAR9;
}