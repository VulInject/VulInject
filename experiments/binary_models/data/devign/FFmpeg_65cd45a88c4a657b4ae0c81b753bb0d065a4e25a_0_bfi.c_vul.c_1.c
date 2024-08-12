static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    const VAR7 *VAR8 = VAR6->VAR3;
    int VAR9 = VAR6->VAR10;
    VAR11 *VAR12 = VAR2->VAR13;
    VAR7 *VAR14 = VAR12->VAR14;
    VAR7 *VAR15, *VAR16, VAR17, VAR18;
    VAR7 *VAR19 = VAR12->VAR14 + VAR2->VAR20 * VAR2->VAR21;
    VAR22 *VAR23;
    int VAR24, VAR25, VAR21 = VAR2->VAR21;
    if (VAR12->VAR26.VAR3[0])
        VAR2->FUN2(VAR2, &VAR12->VAR26);
    VAR12->VAR26.VAR27 = 1;
    if (VAR2->FUN3(VAR2, &VAR12->VAR26) < 0)
    {
        FUN4(VAR2, VAR28, "");
        return -1;
    }
    if (!VAR2->VAR29)
    {
        VAR12->VAR26.VAR30 = VAR31;
        VAR12->VAR26.VAR32 = 1;
        if (VAR2->VAR33 > 768)
        {
            FUN4(NULL, VAR28, "");
            return -1;
        }
        VAR23 = (VAR22 *)VAR12->VAR26.VAR3[1];
        for (VAR24 = 0; VAR24 < VAR2->VAR33 / 3; VAR24++)
        {
            int VAR34 = 16;
            *VAR23 = 0;
            for (VAR25 = 0; VAR25 < 3; VAR25++, VAR34 -= 8)
                *VAR23 += ((VAR2->VAR35[VAR24 * 3 + VAR25] << 2) | (VAR2->VAR35[VAR24 * 3 + VAR25] >> 4)) << VAR34;
            VAR23++;
        }
        VAR12->VAR26.VAR36 = 1;
    }
    else
    {
        VAR12->VAR26.VAR30 = VAR37;
        VAR12->VAR26.VAR32 = 0;
    }
    VAR8 += 4;
    while (VAR14 != VAR19)
    {
        static const uint8_t VAR38[4] = {0, 2, 0, 1};
        unsigned int VAR39 = *VAR8++, FUN5(VAR40);
        unsigned int VAR41 = VAR39 >> 6;
        unsigned int VAR42 = VAR39 & ~0xC0;
        if (VAR42 == 0)
        {
            if (VAR41 == 1)
            {
                VAR42 = FUN6(&VAR8);
                VAR40 = FUN7(&VAR8);
            }
            else
            {
                VAR42 = FUN7(&VAR8);
                if (VAR41 == 2 && VAR42 == 0)
                    break;
            }
        }
        else
        {
            if (VAR41 == 1)
                VAR40 = FUN6(&VAR8);
        }
        if (VAR14 + (VAR42 << VAR38[VAR41]) > VAR19)
            break;
        switch (VAR41)
        {
        case 0:
            FUN8(&VAR8, VAR14, VAR42);
            VAR14 += VAR42;
            break;
        case 1:
            VAR16 = VAR14 - VAR40;
            VAR42 *= 4;
            if (VAR16 < VAR12->VAR14)
                break;
            while (VAR42--)
                *VAR14++ = *VAR16++;
            break;
        case 2:
            VAR14 += VAR42;
            break;
        case 3:
            VAR17 = FUN6(&VAR8);
            VAR18 = FUN6(&VAR8);
            while (VAR42--)
            {
                *VAR14++ = VAR17;
                *VAR14++ = VAR18;
            }
            break;
        }
    }
    VAR15 = VAR12->VAR14;
    VAR14 = VAR12->VAR26.VAR3[0];
    while (VAR21--)
    {
        memcpy(VAR14, VAR15, VAR2->VAR20);
        VAR15 += VAR2->VAR20;
        VAR14 += VAR12->VAR26.VAR43[0];
    }
    *VAR4 = sizeof(VAR44);
    *(VAR44 *)VAR3 = VAR12->VAR26;
    return VAR9;
}