static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, const VAR5 *VAR6, int VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    VAR5 *VAR11 = VAR9->VAR11;
    VAR5 *VAR12, *VAR13, VAR14, VAR15;
    VAR5 *VAR16 = VAR9->VAR11 + VAR2->VAR17 * VAR2->VAR18;
    VAR19 *VAR20;
    int VAR21, VAR22, VAR18 = VAR2->VAR18;
    if (VAR9->VAR23.VAR3[0])
        VAR2->FUN2(VAR2, &VAR9->VAR23);
    VAR9->VAR23.VAR24 = 1;
    if (VAR2->FUN3(VAR2, &VAR9->VAR23) < 0)
    {
        FUN4(VAR2, VAR25, "");
        return -1;
    }
    if (!VAR2->VAR26)
    {
        VAR9->VAR23.VAR27 = VAR28;
        VAR9->VAR23.VAR29 = 1;
        if (VAR2->VAR30 > 768)
        {
            FUN4(NULL, VAR25, "");
            return -1;
        }
        VAR20 = (VAR19 *)VAR9->VAR23.VAR3[1];
        for (VAR21 = 0; VAR21 < VAR2->VAR30 / 3; VAR21++)
        {
            int VAR31 = 16;
            *VAR20 = 0;
            for (VAR22 = 0; VAR22 < 3; VAR22++, VAR31 -= 8)
                *VAR20 += ((VAR2->VAR32[VAR21 * 3 + VAR22] << 2) | (VAR2->VAR32[VAR21 * 3 + VAR22] >> 4)) << VAR31;
            VAR20++;
        }
        VAR9->VAR23.VAR33 = 1;
    }
    else
    {
        VAR9->VAR23.VAR27 = VAR34;
        VAR9->VAR23.VAR29 = 0;
    }
    VAR6 += 4;
    while (VAR11 != VAR16)
    {
        static const uint8_t VAR35[4] = {0, 2, 0, 1};
        unsigned int VAR36 = *VAR6++, VAR37;
        unsigned int VAR38 = VAR36 >> 6;
        unsigned int VAR39 = VAR36 & ~0xC0;
        if (VAR39 == 0)
        {
            if (VAR38 == 1)
            {
                VAR39 = FUN5(&VAR6);
                VAR37 = FUN6(&VAR6);
            }
            else
            {
                VAR39 = FUN6(&VAR6);
                if (VAR38 == 2 && VAR39 == 0)
                    break;
            }
        }
        else
        {
            if (VAR38 == 1)
                VAR37 = FUN5(&VAR6);
        }
        if (VAR11 + (VAR39 << VAR35[VAR38]) > VAR16)
            break;
        switch (VAR38)
        {
        case 0:
            FUN7(&VAR6, VAR11, VAR39);
            VAR11 += VAR39;
            break;
        case 1:
            VAR13 = VAR11 - VAR37;
            VAR39 *= 4;
            if (VAR13 < VAR9->VAR11)
                break;
            while (VAR39--)
                *VAR11++ = *VAR13++;
            break;
        case 2:
            VAR11 += VAR39;
            break;
        case 3:
            VAR14 = FUN5(&VAR6);
            VAR15 = FUN5(&VAR6);
            while (VAR39--)
            {
                *VAR11++ = VAR14;
                *VAR11++ = VAR15;
            }
            break;
        }
    }
    VAR12 = VAR9->VAR11;
    VAR11 = VAR9->VAR23.VAR3[0];
    while (VAR18--)
    {
        memcpy(VAR11, VAR12, VAR2->VAR17);
        VAR12 += VAR2->VAR17;
        VAR11 += VAR9->VAR23.VAR40[0];
    }
    *VAR4 = sizeof(VAR41);
    *(VAR41 *)VAR3 = VAR9->VAR23;
    return VAR7;
}