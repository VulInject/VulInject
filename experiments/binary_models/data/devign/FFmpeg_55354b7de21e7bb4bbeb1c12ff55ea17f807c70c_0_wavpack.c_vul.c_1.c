static inline int FUN1(VAR1 *VAR2, VAR3 *VAR4, void *VAR5, const int VAR6)
{
    int VAR7, VAR8, VAR9 = 0;
    int VAR10, VAR11;
    int VAR12, VAR13, VAR14, VAR15, VAR16, VAR17;
    int VAR18 = VAR2->VAR18;
    uint32_t VAR19 = VAR2->VAR20.VAR19;
    uint32_t VAR21 = VAR2->VAR22.VAR19;
    VAR23 *VAR24 = VAR5;
    VAR25 *VAR26 = VAR5;
    float *VAR27 = VAR5;
    const int VAR28 = VAR2->VAR29->VAR30 - 2;
    if (VAR2->VAR31 == VAR2->VAR32)
        VAR2->VAR33 = VAR2->VAR34 = VAR2->VAR35 = 0;
    do
    {
        VAR14 = FUN2(VAR2, VAR4, 0, &VAR10);
        if (VAR10)
            break;
        VAR16 = FUN2(VAR2, VAR4, 1, &VAR10);
        if (VAR10)
            break;
        for (VAR7 = 0; VAR7 < VAR2->VAR36; VAR7++)
        {
            VAR11 = VAR2->VAR37[VAR7].VAR38;
            if (VAR11 > 0)
            {
                if (VAR11 > 8)
                {
                    if (VAR11 & 1)
                    {
                        VAR12 = 2 * VAR2->VAR37[VAR7].VAR39[0] - VAR2->VAR37[VAR7].VAR39[1];
                        VAR13 = 2 * VAR2->VAR37[VAR7].VAR40[0] - VAR2->VAR37[VAR7].VAR40[1];
                    }
                    else
                    {
                        VAR12 = (3 * VAR2->VAR37[VAR7].VAR39[0] - VAR2->VAR37[VAR7].VAR39[1]) >> 1;
                        VAR13 = (3 * VAR2->VAR37[VAR7].VAR40[0] - VAR2->VAR37[VAR7].VAR40[1]) >> 1;
                    }
                    VAR2->VAR37[VAR7].VAR39[1] = VAR2->VAR37[VAR7].VAR39[0];
                    VAR2->VAR37[VAR7].VAR40[1] = VAR2->VAR37[VAR7].VAR40[0];
                    VAR8 = 0;
                }
                else
                {
                    VAR12 = VAR2->VAR37[VAR7].VAR39[VAR18];
                    VAR13 = VAR2->VAR37[VAR7].VAR40[VAR18];
                    VAR8 = (VAR18 + VAR11) & 7;
                }
                if (VAR6 != VAR41)
                {
                    VAR15 = VAR14 + ((VAR2->VAR37[VAR7].VAR42 * (VAR43)VAR12 + 512) >> 10);
                    VAR17 = VAR16 + ((VAR2->VAR37[VAR7].VAR44 * (VAR43)VAR13 + 512) >> 10);
                }
                else
                {
                    VAR15 = VAR14 + ((VAR2->VAR37[VAR7].VAR42 * VAR12 + 512) >> 10);
                    VAR17 = VAR16 + ((VAR2->VAR37[VAR7].VAR44 * VAR13 + 512) >> 10);
                }
                if (VAR12 && VAR14)
                    VAR2->VAR37[VAR7].VAR42 -= ((((VAR14 ^ VAR12) >> 30) & 2) - 1) * VAR2->VAR37[VAR7].VAR45;
                if (VAR13 && VAR16)
                    VAR2->VAR37[VAR7].VAR44 -= ((((VAR16 ^ VAR13) >> 30) & 2) - 1) * VAR2->VAR37[VAR7].VAR45;
                VAR2->VAR37[VAR7].VAR39[VAR8] = VAR14 = VAR15;
                VAR2->VAR37[VAR7].VAR40[VAR8] = VAR16 = VAR17;
            }
            else if (VAR11 == -1)
            {
                if (VAR6 != VAR41)
                    VAR15 = VAR14 + ((VAR2->VAR37[VAR7].VAR42 * (VAR43)VAR2->VAR37[VAR7].VAR39[0] + 512) >> 10);
                else
                    VAR15 = VAR14 + ((VAR2->VAR37[VAR7].VAR42 * VAR2->VAR37[VAR7].VAR39[0] + 512) >> 10);
                FUN3(VAR2->VAR37[VAR7].VAR42, VAR2->VAR37[VAR7].VAR45, VAR2->VAR37[VAR7].VAR39[0], VAR14);
                VAR14 = VAR15;
                if (VAR6 != VAR41)
                    VAR17 = VAR16 + ((VAR2->VAR37[VAR7].VAR44 * (VAR43)VAR15 + 512) >> 10);
                else
                    VAR17 = VAR16 + ((VAR2->VAR37[VAR7].VAR44 * VAR15 + 512) >> 10);
                FUN3(VAR2->VAR37[VAR7].VAR44, VAR2->VAR37[VAR7].VAR45, VAR15, VAR16);
                VAR16 = VAR17;
                VAR2->VAR37[VAR7].VAR39[0] = VAR16;
            }
            else
            {
                if (VAR6 != VAR41)
                    VAR17 = VAR16 + ((VAR2->VAR37[VAR7].VAR44 * (VAR43)VAR2->VAR37[VAR7].VAR40[0] + 512) >> 10);
                else
                    VAR17 = VAR16 + ((VAR2->VAR37[VAR7].VAR44 * VAR2->VAR37[VAR7].VAR40[0] + 512) >> 10);
                FUN3(VAR2->VAR37[VAR7].VAR44, VAR2->VAR37[VAR7].VAR45, VAR2->VAR37[VAR7].VAR40[0], VAR16);
                VAR16 = VAR17;
                if (VAR11 == -3)
                {
                    VAR17 = VAR2->VAR37[VAR7].VAR39[0];
                    VAR2->VAR37[VAR7].VAR39[0] = VAR16;
                }
                if (VAR6 != VAR41)
                    VAR15 = VAR14 + ((VAR2->VAR37[VAR7].VAR42 * (VAR43)VAR17 + 512) >> 10);
                else
                    VAR15 = VAR14 + ((VAR2->VAR37[VAR7].VAR42 * VAR17 + 512) >> 10);
                FUN3(VAR2->VAR37[VAR7].VAR42, VAR2->VAR37[VAR7].VAR45, VAR17, VAR14);
                VAR14 = VAR15;
                VAR2->VAR37[VAR7].VAR40[0] = VAR14;
            }
        }
        VAR18 = (VAR18 + 1) & 7;
        if (VAR2->VAR46)
            VAR14 += (VAR16 -= (VAR14 >> 1));
        VAR19 = (VAR19 * 3 + VAR14) * 3 + VAR16;
        if (VAR6 == VAR47)
        {
            *VAR27++ = FUN4(VAR2, &VAR21, VAR14);
            *VAR27++ = FUN4(VAR2, &VAR21, VAR16);
            VAR27 += VAR28;
        }
        else if (VAR6 == VAR48)
        {
            *VAR26++ = FUN5(VAR2, &VAR21, VAR14);
            *VAR26++ = FUN5(VAR2, &VAR21, VAR16);
            VAR26 += VAR28;
        }
        else
        {
            *VAR24++ = FUN5(VAR2, &VAR21, VAR14);
            *VAR24++ = FUN5(VAR2, &VAR21, VAR16);
            VAR24 += VAR28;
        }
        VAR9++;
    } while (!VAR10 && VAR9 < VAR2->VAR49);
    VAR2->VAR31 -= VAR9;
    if (!VAR2->VAR31)
    {
        FUN6(VAR2);
        if (VAR19 != VAR2->VAR50)
        {
            FUN7(VAR2->VAR29, VAR51, "");
            return -1;
        }
        if (VAR2->VAR52 && VAR21 != VAR2->VAR21)
        {
            FUN7(VAR2->VAR29, VAR51, "");
            return -1;
        }
    }
    else
    {
        VAR2->VAR18 = VAR18;
        VAR2->VAR20.VAR19 = VAR19;
        VAR2->VAR20.VAR53 = FUN8(&VAR2->VAR4);
        if (VAR2->VAR52)
        {
            VAR2->VAR22.VAR19 = VAR21;
            VAR2->VAR22.VAR53 = FUN8(&VAR2->VAR54);
        }
    }
    return VAR9 * 2;
}