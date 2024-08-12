static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    const VAR7 *VAR8 = VAR6->VAR3, *VAR9 = VAR6->VAR3 + VAR6->VAR10;
    int VAR11 = VAR6->VAR10;
    VAR12 *VAR13 = VAR2->VAR14;
    VAR7 *VAR15 = VAR13->VAR15;
    VAR7 *VAR16, *VAR17, VAR18, VAR19;
    VAR7 *VAR20 = VAR13->VAR15 + VAR2->VAR21 * VAR2->VAR22;
    VAR23 *VAR24;
    int VAR25, VAR26, VAR22 = VAR2->VAR22;
    if (VAR13->VAR27.VAR3[0])
        VAR2->FUN2(VAR2, &VAR13->VAR27);
    VAR13->VAR27.VAR28 = 1;
    if (VAR2->FUN3(VAR2, &VAR13->VAR27) < 0)
    {
        FUN4(VAR2, VAR29, "");
        return -1;
    }
    if (!VAR2->VAR30)
    {
        VAR13->VAR27.VAR31 = VAR32;
        VAR13->VAR27.VAR33 = 1;
        if (VAR2->VAR34 > 768)
        {
            FUN4(NULL, VAR29, "");
            return -1;
        }
        VAR24 = (VAR23 *)VAR13->VAR27.VAR3[1];
        for (VAR25 = 0; VAR25 < VAR2->VAR34 / 3; VAR25++)
        {
            int VAR35 = 16;
            *VAR24 = 0;
            for (VAR26 = 0; VAR26 < 3; VAR26++, VAR35 -= 8)
                *VAR24 += ((VAR2->VAR36[VAR25 * 3 + VAR26] << 2) | (VAR2->VAR36[VAR25 * 3 + VAR26] >> 4)) << VAR35;
            VAR24++;
        }
        VAR13->VAR27.VAR37 = 1;
    }
    else
    {
        VAR13->VAR27.VAR31 = VAR38;
        VAR13->VAR27.VAR33 = 0;
    }
    VAR8 += 4;
    while (VAR15 != VAR20)
    {
        static const uint8_t VAR39[4] = {0, 2, 0, 1};
        unsigned int VAR40 = *VAR8++, FUN5(VAR41);
        unsigned int VAR42 = VAR40 >> 6;
        unsigned int VAR43 = VAR40 & ~0xC0;
        if (VAR8 >= VAR9)
        {
            FUN4(VAR2, VAR29, "");
            return -1;
        }
        if (VAR43 == 0)
        {
            if (VAR42 == 1)
            {
                VAR43 = FUN6(&VAR8);
                VAR41 = FUN7(&VAR8);
            }
            else
            {
                VAR43 = FUN7(&VAR8);
                if (VAR42 == 2 && VAR43 == 0)
                    break;
            }
        }
        else
        {
            if (VAR42 == 1)
                VAR41 = FUN6(&VAR8);
        }
        if (VAR15 + (VAR43 << VAR39[VAR42]) > VAR20)
            break;
        switch (VAR42)
        {
        case 0:
            if (VAR43 >= VAR9 - VAR8)
            {
                FUN4(VAR2, VAR29, "");
                return -1;
            }
            FUN8(&VAR8, VAR15, VAR43);
            VAR15 += VAR43;
            break;
        case 1:
            VAR17 = VAR15 - VAR41;
            VAR43 *= 4;
            if (VAR17 < VAR13->VAR15)
                break;
            while (VAR43--)
                *VAR15++ = *VAR17++;
            break;
        case 2:
            VAR15 += VAR43;
            break;
        case 3:
            VAR18 = FUN6(&VAR8);
            VAR19 = FUN6(&VAR8);
            while (VAR43--)
            {
                *VAR15++ = VAR18;
                *VAR15++ = VAR19;
            }
            break;
        }
    }
    VAR16 = VAR13->VAR15;
    VAR15 = VAR13->VAR27.VAR3[0];
    while (VAR22--)
    {
        memcpy(VAR15, VAR16, VAR2->VAR21);
        VAR16 += VAR2->VAR21;
        VAR15 += VAR13->VAR27.VAR44[0];
    }
    *VAR4 = sizeof(VAR45);
    *(VAR45 *)VAR3 = VAR13->VAR27;
    return VAR11;
}